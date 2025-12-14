/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135604
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_20 ^= ((/* implicit */unsigned int) max((((/* implicit */short) max((((/* implicit */unsigned char) arr_2 [i_1 - 1] [i_1 + 1] [i_1 + 1])), (var_1)))), (min((((/* implicit */short) arr_2 [i_1 + 1] [i_1 - 1] [i_1 + 1])), (arr_4 [i_1 + 1])))));
                var_21 += ((/* implicit */signed char) arr_3 [i_0] [i_0]);
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) var_12);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned int i_3 = 4; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) var_11))))));
                            arr_11 [i_2] [i_1] [i_1 + 1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) min((((/* implicit */short) arr_10 [i_3] [i_1] [i_2] [i_3] [i_1])), (arr_7 [(unsigned char)1] [(unsigned char)1])))) : (((/* implicit */int) max((((/* implicit */signed char) arr_6 [i_2])), (arr_2 [i_2] [i_2] [i_2]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned int) var_12))))) ? (((long long int) var_6)) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 + 3])))))));
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */unsigned int) ((long long int) 4294967273U));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (+(var_17))))));
}
