/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166897
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
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                arr_4 [(unsigned short)8] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1])) ? (arr_3 [i_0] [i_1 + 1]) : (arr_3 [i_1] [i_1 + 2])))) ? (var_0) : (((/* implicit */int) (unsigned char)198))));
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((_Bool) arr_3 [i_1 + 1] [i_1 + 3])) ? (var_13) : (arr_3 [i_1 + 2] [8U])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) arr_0 [i_0]);
                        arr_10 [i_1] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
                    }
                    var_20 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [2ULL] [i_1 + 2] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_7 [0] [i_1 + 2] [i_2] [0] [0])) : (((/* implicit */int) arr_7 [i_1 - 1] [i_1] [i_1 + 2] [i_1] [i_1 - 1]))));
                }
                arr_11 [i_1 + 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                var_21 *= ((/* implicit */_Bool) var_16);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_10);
    var_23 = max((((/* implicit */unsigned long long int) var_6)), (var_13));
}
