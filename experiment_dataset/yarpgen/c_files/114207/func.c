/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114207
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
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */short) ((min((((/* implicit */long long int) var_5)), (arr_1 [i_0 - 3] [i_0 + 1]))) >= (((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0 + 2])) ? (arr_1 [i_0 - 4] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 -= ((/* implicit */short) (~(max((((/* implicit */int) arr_6 [i_0 - 3] [i_0 - 1] [i_0] [i_3])), (arr_5 [i_0] [i_0])))));
                            var_20 += ((/* implicit */unsigned short) (~((~(((((/* implicit */long long int) ((/* implicit */int) var_10))) | (arr_1 [i_1] [i_3])))))));
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((max((var_6), (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) 2339097911U)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (signed char)-26))))))), (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))), (((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (var_3) : (((/* implicit */unsigned long long int) -135912927)))))))))));
                            var_22 = ((((/* implicit */int) (!(var_12)))) == ((((+(((/* implicit */int) arr_0 [i_0] [i_0])))) * (((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_2] [i_0 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_6 [i_2] [i_2] [i_2] [4LL])))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_5 [i_0] [i_0])))) ? ((+(3892336470684500256LL))) : (((/* implicit */long long int) var_6)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(var_13))), (((var_1) >> (((((/* implicit */int) var_0)) - (27604)))))))) || (var_10)));
    var_24 |= var_1;
}
