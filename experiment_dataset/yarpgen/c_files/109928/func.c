/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109928
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
    var_10 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (signed char)24)), (((((/* implicit */_Bool) ((var_6) * (((/* implicit */unsigned long long int) 9223372036854710272LL))))) ? (min((((/* implicit */unsigned long long int) 7LL)), (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (-1562875837) : (1562875836))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_11 = arr_1 [i_0];
                            var_12 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [i_1])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 2])))))) ? (((var_2) >> (((var_3) - (15331671823626906513ULL))))) : (((/* implicit */unsigned long long int) var_7)))) << (((((266114304U) * (var_1))) - (3484272345U)))));
                            arr_10 [i_0 - 1] [i_0 - 2] [i_0] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_0 + 2]))) ? (((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) arr_8 [(_Bool)1] [2U])) : (var_4))) & (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_5 [i_0 - 1]), (((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_1] [4U]))))))));
                var_14 = ((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */unsigned long long int) max((arr_6 [i_0] [i_0 + 1] [i_0] [i_0 + 1]), (((/* implicit */long long int) arr_2 [i_0] [i_0]))))), (min((var_6), (((/* implicit */unsigned long long int) 1562875837)))))) : (((min((var_6), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_0] [i_0 - 1])))) | (max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0])), (var_6))))));
            }
        } 
    } 
}
