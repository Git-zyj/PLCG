/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183044
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */int) ((((((/* implicit */int) var_18)) <= (((/* implicit */int) arr_2 [i_0] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_2 [i_0] [i_0])))))))) != ((~((-(((/* implicit */int) var_17)))))))))));
        var_20 = ((/* implicit */short) var_9);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0] [i_1]);
            arr_6 [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) >> (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_1])))) + (23509)))))));
            var_21 = ((/* implicit */short) ((((((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (arr_4 [i_0] [i_1] [(unsigned char)15])))) < (((/* implicit */int) var_3)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                var_22 += ((/* implicit */short) ((unsigned short) arr_8 [(_Bool)1] [i_0] [i_1] [i_0]));
                /* LoopSeq 3 */
                for (short i_3 = 3; i_3 < 20; i_3 += 4) 
                {
                    var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) var_10))));
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((unsigned short) ((var_8) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13))))))));
                    var_25 += ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_12)))) : (((int) arr_2 [i_2] [i_3]))));
                }
                for (unsigned char i_4 = 4; i_4 < 18; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        arr_17 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */_Bool) ((int) var_14));
                        arr_18 [i_0] [(short)7] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */int) arr_15 [i_4 + 2] [i_4] [i_4 + 2] [i_4] [17] [i_4 - 1])) & (((/* implicit */int) arr_15 [i_4 + 2] [i_4] [i_4] [i_4] [i_4] [i_4])));
                    }
                    var_26 = var_10;
                }
                for (short i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    var_27 += ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) var_6))));
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((unsigned char) var_18)))));
                        var_29 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0] [i_0])) - (((/* implicit */int) arr_0 [i_0] [i_2]))));
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_7 [i_2])))))));
                        var_31 += ((/* implicit */short) (-(arr_10 [i_0] [i_2] [i_6] [7])));
                    }
                    for (int i_8 = 1; i_8 < 19; i_8 += 4) 
                    {
                        var_32 += var_14;
                        var_33 = ((/* implicit */unsigned char) ((int) ((int) arr_11 [i_1])));
                    }
                }
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_34 = ((/* implicit */int) var_6);
                var_35 += ((/* implicit */short) var_1);
            }
            var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((unsigned char) var_14))) : (((/* implicit */int) var_16)))))));
        }
        for (unsigned short i_10 = 4; i_10 < 18; i_10 += 4) 
        {
            var_37 = ((/* implicit */unsigned short) max((var_37), (var_0)));
            var_38 += ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0] [i_10 - 3])) / ((+(((int) arr_12 [i_0] [i_0] [i_0] [i_10]))))));
            var_39 = ((/* implicit */signed char) var_9);
        }
        var_40 += ((/* implicit */short) var_13);
    }
    var_41 = ((/* implicit */_Bool) var_18);
    var_42 = ((/* implicit */short) var_9);
}
