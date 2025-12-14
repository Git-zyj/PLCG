/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178848
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
    var_20 = ((0LL) % ((-9223372036854775807LL - 1LL)));
    var_21 = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_13)))))) : (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))), (var_7)));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_2])) ? (((/* implicit */int) ((signed char) ((var_10) / (var_15))))) : (((/* implicit */int) ((((((/* implicit */long long int) -209479088)) * (0LL))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_6 [i_0])) <= (var_1))))))))));
                    var_23 = ((/* implicit */_Bool) min((var_23), ((!(((/* implicit */_Bool) max((min((9223372036854775807LL), (9223372036854775807LL))), (((/* implicit */long long int) (unsigned short)2048)))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_24 &= (-(((((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_4 - 2] [i_4 - 2] [i_4 - 2])) ? (arr_12 [i_3] [i_4 + 3] [i_4 + 2] [i_4 - 2] [i_4]) : (arr_12 [i_3 + 1] [i_4 + 4] [i_4 + 2] [i_3 + 1] [i_4]))));
                                arr_14 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) 100663296))), (arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_13 [i_4 + 1] [i_3 + 1] [i_1] [i_1 + 1] [i_0 + 4] [i_0 + 4])) ? (arr_13 [i_4 - 2] [i_3 + 1] [i_2] [i_1 - 1] [i_1] [i_0 + 4]) : (arr_13 [i_4 + 2] [i_3 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_0 - 1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned char)62), (((/* implicit */unsigned char) (_Bool)1))))) ? ((-(((/* implicit */int) arr_4 [i_2])))) : (((/* implicit */int) arr_4 [i_0 - 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_15 [(_Bool)1] |= ((((/* implicit */_Bool) max((33554431LL), (-1LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_5 [(unsigned short)14])))) : (arr_2 [i_0]));
    }
}
