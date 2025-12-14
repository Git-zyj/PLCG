/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177385
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
    var_18 = (-(((/* implicit */int) ((short) ((var_6) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8)))))));
    var_19 = ((/* implicit */_Bool) ((var_9) / (var_0)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    arr_10 [(unsigned short)7] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1]))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 8; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [9] [i_2] [i_2] [(_Bool)1] [i_4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (4626323167463681774LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-16)))))) || (((/* implicit */_Bool) var_0))));
                                arr_17 [(unsigned char)2] [(unsigned char)2] [(unsigned char)2] [i_3] [(unsigned char)2] [i_3] [i_3] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_11 [i_0])))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [(unsigned char)4] [i_1 - 1])) ? (((/* implicit */int) ((unsigned char) var_3))) : (((((/* implicit */int) (signed char)-12)) ^ (((/* implicit */int) var_10))))));
                    arr_18 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((arr_14 [i_2] [i_1 - 1] [i_0] [i_1 - 1] [i_1 + 1] [i_0]) ? (((/* implicit */int) arr_6 [i_2] [i_1] [i_1 - 1] [i_1])) : (((var_12) ? (arr_1 [i_0] [i_1]) : (((/* implicit */int) var_17))))));
                    arr_19 [i_2] [i_2] [i_0] [i_0] |= ((/* implicit */unsigned char) ((signed char) var_9));
                }
                for (short i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    var_21 |= ((max((arr_8 [i_1 - 1] [i_1 + 1] [i_1 - 1]), (var_11))) ? (((((long long int) arr_9 [i_0] [i_1] [i_1] [i_5])) / (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_1 - 1]))))) : (((/* implicit */long long int) max((((((/* implicit */int) (signed char)-42)) / (((/* implicit */int) (signed char)-16)))), (((/* implicit */int) var_8))))));
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) || (arr_20 [i_0] [i_0] [i_0])))), (max((((/* implicit */unsigned char) arr_6 [i_1 - 1] [i_1] [i_1] [i_1])), (((unsigned char) var_2)))))))));
                    arr_22 [i_5] [i_1] [(_Bool)1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_7 [i_1 + 1]))) ? (((/* implicit */int) (!(var_4)))) : (((/* implicit */int) ((unsigned short) arr_3 [i_1 + 1])))));
                    var_23 = ((/* implicit */signed char) max((((unsigned char) arr_5 [i_1 - 1] [i_1 + 1])), (((unsigned char) arr_5 [i_1 + 1] [i_1 + 1]))));
                }
                var_24 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_0] [i_1 + 1] [(short)0] [i_1 + 1] [i_1 - 1] [i_1 - 1]))))) ? (((/* implicit */int) ((_Bool) (signed char)36))) : (((arr_14 [(unsigned char)8] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (((/* implicit */int) var_16)) : (var_9))));
                /* LoopSeq 2 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    var_25 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)48)) ? (min((((var_5) ? (((/* implicit */int) var_13)) : (arr_13 [i_0] [i_0] [i_0] [i_0] [(unsigned char)10] [i_0] [i_0]))), (((((/* implicit */int) (signed char)36)) * (((/* implicit */int) var_14)))))) : (((((var_9) / (((/* implicit */int) arr_0 [i_0])))) / (((var_11) ? (((/* implicit */int) arr_12 [i_0] [i_1 - 1] [i_0])) : (((/* implicit */int) (signed char)-126))))))));
                    var_26 = ((/* implicit */signed char) var_11);
                }
                /* vectorizable */
                for (short i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    var_27 = ((/* implicit */long long int) arr_21 [i_0] [i_0]);
                    arr_27 [i_1] = ((/* implicit */unsigned char) (-(((arr_26 [i_0] [i_1] [i_7] [i_1]) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)15))))));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-35)) >= (((((/* implicit */int) var_6)) & (((/* implicit */int) var_8))))));
                }
            }
        } 
    } 
}
