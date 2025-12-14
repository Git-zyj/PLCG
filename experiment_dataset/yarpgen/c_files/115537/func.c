/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115537
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((unsigned int) var_18)), (((/* implicit */unsigned int) ((var_18) ^ (var_6))))))) || (((/* implicit */_Bool) ((unsigned int) ((1447080836U) | (1447080836U)))))));
    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned char)20)), (1447080821U)));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                arr_4 [i_0 - 1] [i_0 - 1] = ((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) -1LL)) == (4333584577676738369ULL)))) < (((((/* implicit */int) arr_3 [i_0] [i_1] [i_1 - 2])) * (((/* implicit */int) arr_2 [i_1 - 1] [i_0] [i_0]))))))), (max((((/* implicit */signed char) ((((/* implicit */long long int) var_6)) <= (-1LL)))), (((signed char) (unsigned short)21004))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_21 = ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_16))))) != (min((var_13), (((/* implicit */unsigned long long int) -210796799))))));
                            var_22 = min((((/* implicit */unsigned int) max((((_Bool) var_8)), (((_Bool) arr_9 [(_Bool)1] [(_Bool)1] [i_2] [i_3]))))), (min((2170519353U), (((/* implicit */unsigned int) (unsigned char)8)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
