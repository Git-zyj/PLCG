/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107455
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) min(((short)-18470), (max((var_4), ((short)-7245)))))) <= (((/* implicit */int) var_12))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_14 |= arr_4 [(unsigned char)14] [i_2];
                    arr_7 [i_0] [i_1] [i_2] [(unsigned char)19] = ((/* implicit */short) (((~(((/* implicit */int) arr_0 [i_2] [i_1 - 1])))) * ((~(((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (short)32745))))))));
                    arr_8 [i_0] [i_0] [i_0] [i_1] = var_7;
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                {
                    arr_18 [i_3] [i_4] [i_5] |= arr_1 [i_3];
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_3] [i_4])) % (((/* implicit */int) (short)32745)))))));
                    var_16 = arr_1 [i_3];
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 4; i_6 < 15; i_6 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            var_17 = ((/* implicit */short) ((((/* implicit */int) arr_23 [i_6 - 1] [i_6 - 2] [i_6 - 1] [i_6 - 4] [i_6 - 3] [i_6 + 2])) != (((/* implicit */int) arr_23 [i_6 + 2] [i_6 - 4] [i_6] [i_6 - 4] [i_6 - 3] [i_6 + 3]))));
                            var_18 = (unsigned char)231;
                            var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_3] [i_5])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_9 [i_3])))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 3) 
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */int) (short)-32725)) > (((/* implicit */int) (unsigned char)117))));
                            arr_27 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_3] [i_4] [i_5] [i_6])) ? ((~(((/* implicit */int) var_12)))) : (((((/* implicit */int) var_7)) - (((/* implicit */int) (unsigned char)142))))));
                            arr_28 [i_3] [i_3] [i_3] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_26 [i_6 - 4] [i_6 - 3])) * (((/* implicit */int) arr_11 [i_6 + 1]))));
                        }
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_2)))) - (((/* implicit */int) arr_24 [i_6 + 3] [i_6] [i_6 + 3] [i_6 - 1] [i_6] [i_6 - 1] [i_6]))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_9), (var_1)))) ^ (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) arr_15 [i_4] [i_9])) ? (((/* implicit */int) arr_13 [i_3] [i_9])) : (((/* implicit */int) arr_17 [i_9] [i_4] [i_4])))) : (((/* implicit */int) arr_1 [i_3])))) : (((/* implicit */int) arr_0 [i_4] [i_5]))));
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (((-(((/* implicit */int) arr_4 [i_5] [i_9])))) < (((/* implicit */int) var_9)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 1; i_10 < 17; i_10 += 1) 
                        {
                            arr_33 [i_10] [i_4] [i_4] [(unsigned char)12] [i_4] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)122))));
                            var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min(((unsigned char)0), ((unsigned char)209)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) max((arr_25 [i_9] [i_9]), ((unsigned char)45)))))) | (((((/* implicit */_Bool) arr_26 [i_9] [i_5])) ? (((((/* implicit */int) arr_25 [i_3] [i_3])) << (((((/* implicit */int) var_6)) - (61))))) : (((/* implicit */int) var_6))))));
                            var_25 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)0)) != (max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) arr_15 [i_4] [i_10 - 1])) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) var_11))))))));
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_6 [(short)18] [i_9] [i_5])) <= (((/* implicit */int) (unsigned char)15)))))))))))));
                        }
                    }
                    var_27 = ((/* implicit */unsigned char) var_4);
                }
            } 
        } 
    } 
}
