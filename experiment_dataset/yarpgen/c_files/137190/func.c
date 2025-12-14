/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137190
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
    var_11 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((((short) (signed char)-34)), (var_3))))) / (max((var_5), (var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) max((min((arr_0 [i_0] [14ULL]), (((/* implicit */unsigned long long int) (signed char)33)))), (((/* implicit */unsigned long long int) var_4)))))));
                arr_5 [(short)18] [i_1] [i_0] &= ((/* implicit */short) var_1);
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_3 [4])))))));
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) (signed char)25)), (3416837365U))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)1))))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */_Bool) (unsigned short)1920);
            }
        } 
    } 
}
