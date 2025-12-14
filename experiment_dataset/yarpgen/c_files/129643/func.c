/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129643
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */_Bool) arr_13 [i_0 + 2] [i_1 + 1] [i_1 + 3] [i_1 - 1]);
                        var_21 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_0 [(signed char)3])) ? (arr_4 [i_0 + 2] [i_1 + 2] [i_2]) : (arr_0 [i_0])))));
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3]))))))))));
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0 + 3] [i_0 + 1] [i_0 - 1])))))));
                    }
                    var_24 ^= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_4 [i_1 + 1] [i_1 + 1] [i_1]) : (((((/* implicit */_Bool) arr_5 [(short)18] [16ULL])) ? (((/* implicit */int) arr_7 [i_0] [18] [(short)2] [4U])) : (arr_4 [i_0] [i_1 + 2] [i_2])))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_12)) ? ((+(var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))))));
}
