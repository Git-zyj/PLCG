/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16093
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
    var_11 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_5)) ? (((var_5) + (var_9))) : (((/* implicit */long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_7)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    var_12 = (unsigned short)7693;
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_0] [(unsigned char)5] [i_2 - 1] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [(_Bool)1] [i_2 + 3] [i_3] [(_Bool)1] [i_3 - 1])) ? (((/* implicit */int) arr_6 [i_3 + 1] [i_1] [i_3 + 1] [i_2 - 1])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3] [i_2 + 3] [i_3 + 1]))));
                        var_13 *= ((/* implicit */unsigned int) ((var_8) ? (arr_9 [i_2 - 1] [i_3 - 1] [i_2 - 1] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_3 + 1] [i_0])))));
                    }
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        var_14 = ((/* implicit */_Bool) max((var_14), (((_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)7680))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */int) arr_8 [i_2 + 3] [i_2] [i_1] [i_4])))))));
                        var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) var_0)))));
                        var_16 = ((/* implicit */_Bool) var_1);
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_2 - 1] [i_2 + 2] [i_2 + 1] [i_2 + 2]))))) ? (((/* implicit */int) min((arr_13 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]), (arr_13 [i_2 - 1] [i_2 + 2] [i_2 - 2] [i_2 + 1])))) : (((/* implicit */int) min((arr_13 [i_2 - 1] [i_2 - 2] [i_2 + 2] [i_2 + 1]), (((/* implicit */signed char) var_2)))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 11; i_6 += 2) 
                        {
                            var_18 |= ((/* implicit */unsigned short) ((long long int) arr_10 [i_2 + 1] [i_2 + 1]));
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_9 [(signed char)13] [i_1] [(signed char)13] [(signed char)13])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_12 [i_0] [7] [i_2 + 2] [i_6 - 1]))))))));
                        }
                        var_20 |= ((/* implicit */unsigned char) arr_8 [(unsigned char)12] [i_1] [i_0] [i_5]);
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) max((var_1), (var_1)))) | (((((/* implicit */_Bool) arr_15 [1LL] [(unsigned char)12] [1LL] [i_2])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_5])))) : (((/* implicit */int) (_Bool)1)))))))));
                    }
                }
                var_22 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (arr_9 [i_0] [i_0] [i_0] [i_0]))))));
                var_23 = var_0;
                arr_19 [1LL] [i_1] = ((/* implicit */unsigned char) (-(((arr_0 [i_1]) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [(unsigned char)7])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) var_10);
}
