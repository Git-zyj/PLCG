/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149147
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
    var_18 = ((/* implicit */long long int) min((((((var_14) > (var_6))) ? (max((((/* implicit */unsigned long long int) var_1)), (var_14))) : (((/* implicit */unsigned long long int) var_0)))), (min(((~(var_6))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned int) var_10);
                /* LoopSeq 3 */
                for (long long int i_2 = 1; i_2 < 23; i_2 += 1) 
                {
                    var_20 ^= ((/* implicit */unsigned char) ((short) (+(((/* implicit */int) arr_6 [i_2 + 2] [i_2] [i_2 + 2])))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 3; i_3 < 24; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */short) (+(var_2)));
                        var_22 = ((/* implicit */int) arr_6 [i_3 + 1] [i_3 + 1] [i_3 - 3]);
                        var_23 = ((/* implicit */_Bool) min((((var_9) ^ (((/* implicit */int) arr_9 [i_2] [i_2] [i_2 + 2] [i_2] [i_2 + 1])))), ((~(((/* implicit */int) var_1))))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        var_24 &= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_2] [i_2] [i_2 - 1] [i_2] [(unsigned short)3]))));
                        arr_14 [i_0] [i_1] = ((/* implicit */long long int) ((arr_13 [i_0] [i_1] [i_2 + 2] [i_4]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_2 + 2] [i_4] [i_4])))));
                        var_25 = ((/* implicit */int) (~(var_0)));
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_12 [i_1] [i_1] [i_2 - 1] [i_4] [i_0]))));
                        arr_15 [i_4] [i_2] [7LL] [7LL] = ((/* implicit */unsigned char) (+(var_17)));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) < (arr_13 [i_5] [i_1] [i_2 - 1] [i_5])));
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) var_5))));
                        arr_18 [i_5] = ((/* implicit */_Bool) ((unsigned int) arr_9 [i_0] [i_1] [i_1] [i_5] [i_0]));
                        var_29 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min((var_10), (var_3)))) ? (var_4) : (((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_0] [22] [i_0] [i_0] [i_0] [1U])))))))));
                    }
                }
                /* vectorizable */
                for (int i_6 = 3; i_6 < 23; i_6 += 4) 
                {
                    arr_22 [i_0] [i_1] [i_6] &= ((/* implicit */signed char) (~((-(1720642826)))));
                    arr_23 [12] [12] [i_6 - 2] [i_6] = ((/* implicit */short) var_16);
                    var_30 = ((/* implicit */long long int) arr_0 [i_0] [i_6 + 2]);
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    arr_28 [i_0] [i_0] [i_7] [i_7] = ((/* implicit */unsigned char) ((arr_20 [i_7] [i_1] [i_0]) ? (arr_13 [i_0] [i_1] [i_0] [i_7]) : (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_1] [(_Bool)1]))));
                    var_31 = ((/* implicit */long long int) max((var_31), (((long long int) (!(((/* implicit */_Bool) var_11)))))));
                    arr_29 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */signed char) (-(((/* implicit */int) arr_20 [i_0] [i_0] [i_7]))));
                    arr_30 [i_0] [i_0] [i_7] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_19 [i_0] [i_1] [i_7]) + (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? ((~(((/* implicit */int) arr_20 [i_0] [i_1] [i_7])))) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_7]))));
                    arr_31 [i_7] [i_0] [i_7] = ((/* implicit */short) ((long long int) arr_9 [i_0] [i_0] [i_7] [i_7] [i_7]));
                }
                var_32 = ((/* implicit */unsigned int) ((var_0) <= (((/* implicit */long long int) arr_2 [i_1]))));
            }
        } 
    } 
}
