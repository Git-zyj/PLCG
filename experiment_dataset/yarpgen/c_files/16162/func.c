/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16162
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
    var_17 = ((/* implicit */unsigned int) (~(var_0)));
    var_18 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_19 &= ((((/* implicit */int) (unsigned char)57)) * ((+(((/* implicit */int) min((arr_3 [i_0]), (arr_7 [i_0] [i_0] [i_3])))))));
                                arr_16 [i_0] [0LL] [i_2] [16LL] [i_4] [i_4] [i_4] = ((((/* implicit */int) (unsigned char)198)) << (((arr_6 [i_0]) - (8406417500641015593LL))));
                                arr_17 [i_0] [i_1] [i_0] [i_3] [i_2] [i_4] [i_3] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1]);
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) ((short) min((arr_4 [i_1 + 1]), (arr_4 [i_1 + 2]))));
                /* LoopSeq 2 */
                for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_3 [i_1])), (((unsigned long long int) (!(((/* implicit */_Bool) var_1))))))))));
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_14) + (((/* implicit */long long int) arr_5 [i_1 - 1] [i_1 + 2]))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) min((var_1), (((/* implicit */unsigned int) (unsigned char)57))))), ((-(var_16))))))));
                    arr_20 [(short)13] [i_1] [14ULL] [11] = ((/* implicit */int) ((unsigned char) (-(((((/* implicit */_Bool) 4611686018427387903LL)) ? (var_6) : (((/* implicit */unsigned long long int) var_1)))))));
                }
                /* vectorizable */
                for (short i_6 = 3; i_6 < 14; i_6 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 16; i_7 += 4) 
                    {
                        for (short i_8 = 1; i_8 < 15; i_8 += 2) 
                        {
                            {
                                arr_30 [i_0] [i_1] [i_6] [(unsigned char)0] [i_7] = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_6]);
                                arr_31 [i_7] [i_7] [9ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_28 [i_0])) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_6] [(unsigned char)15] [i_8 + 2]))))) : (((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))));
                                var_23 = ((/* implicit */unsigned int) (-(694309613)));
                                var_24 = ((/* implicit */int) var_2);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (long long int i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        arr_35 [i_9] [i_1] = ((/* implicit */short) ((int) arr_4 [i_6 - 1]));
                        arr_36 [i_9] [i_6 - 1] [i_0] [i_0] [i_0] = arr_24 [i_9] [i_1] [i_6] [i_6] [i_9];
                    }
                    for (long long int i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        var_25 = ((/* implicit */long long int) (unsigned char)81);
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 + 2] [i_6] [i_6])) ? (arr_21 [6LL] [i_1] [i_0] [i_10]) : (20U)))) ? (((/* implicit */unsigned long long int) var_14)) : (arr_11 [0LL] [i_1] [i_6] [i_10] [(unsigned char)12])));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 2) 
                    {
                        arr_41 [i_0] [i_1] [(unsigned char)10] [i_6 - 1] [i_6] [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 255U))));
                        var_27 = ((/* implicit */unsigned char) -4013261724781041648LL);
                        arr_42 [i_11] [i_0] [i_6 + 3] [i_1] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32316))) : (var_6))))));
                    }
                }
            }
        } 
    } 
}
