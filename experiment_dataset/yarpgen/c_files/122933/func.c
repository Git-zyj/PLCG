/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122933
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_0 [i_0])) - (((((/* implicit */int) arr_1 [i_0] [i_0])) + (((/* implicit */int) var_3)))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 + 3])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)24967)) ? ((-((-(((/* implicit */int) (unsigned short)8064)))))) : (max((((((/* implicit */int) (unsigned short)4948)) | (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) max((var_15), ((unsigned short)53136))))))));
        arr_4 [i_0] [(unsigned short)11] = arr_1 [i_0] [i_0];
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_7 [i_1]))));
        arr_9 [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_1])) < (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)12413)) : (((/* implicit */int) (unsigned short)12402))))));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 2; i_2 < 19; i_2 += 3) 
        {
            arr_12 [i_2] = arr_10 [i_2 + 1] [i_2 - 2];
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [i_2 + 1] [i_2 - 2])))))));
            arr_13 [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_19))));
        }
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            arr_16 [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_10 [i_3] [i_1])) : (((/* implicit */int) (unsigned short)3769))))) ? ((-(((/* implicit */int) (unsigned short)9310)))) : (((/* implicit */int) arr_15 [i_1] [i_3] [i_3]))));
            var_21 = ((unsigned short) arr_6 [i_1]);
        }
        for (unsigned short i_4 = 2; i_4 < 18; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_5 = 1; i_5 < 17; i_5 += 1) 
            {
                for (unsigned short i_6 = 3; i_6 < 16; i_6 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned short) max((var_22), ((unsigned short)56208)));
                            arr_29 [i_1] [i_1] [i_5] [i_1] [i_1] [i_5] = arr_10 [i_5 + 1] [i_5 + 1];
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((unsigned short) arr_24 [i_4] [i_4] [i_4]))));
                        }
                        var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_27 [i_4] [i_5]))));
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 1; i_8 < 17; i_8 += 3) 
                        {
                            arr_33 [i_1] [i_5] [i_5] [i_1] [i_5 + 1] = (unsigned short)56222;
                            var_25 = ((/* implicit */unsigned short) max((var_25), ((unsigned short)9327)));
                        }
                        for (unsigned short i_9 = 2; i_9 < 19; i_9 += 4) 
                        {
                            arr_38 [i_1] [i_4] [i_5] [i_5] [i_9] [i_6] [(unsigned short)16] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)63243)))) ? (((/* implicit */int) arr_28 [(unsigned short)19] [i_4 - 1] [i_4] [i_4] [i_6 + 1])) : (((/* implicit */int) (unsigned short)59284))));
                            arr_39 [i_1] [i_4] [i_5] [i_6 - 2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12410)) ? (((/* implicit */int) (unsigned short)53136)) : (((/* implicit */int) var_2))))) || (((/* implicit */_Bool) (unsigned short)46773))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 1) 
                        {
                            arr_42 [i_1] [i_1] [i_1] [i_5] [i_1] = ((unsigned short) (+(((/* implicit */int) var_13))));
                            var_26 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)20218)) ? (((/* implicit */int) (unsigned short)45318)) : (((/* implicit */int) (unsigned short)9310))))));
                            var_27 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)8126)) ? (((/* implicit */int) arr_18 [i_4 + 2] [i_5 + 2])) : ((+(((/* implicit */int) (unsigned short)3769))))));
                        }
                    }
                } 
            } 
            arr_43 [(unsigned short)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_4])) ? (((/* implicit */int) arr_26 [i_4])) : (((/* implicit */int) arr_26 [i_4]))));
            var_28 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)1581)))) || (((/* implicit */_Bool) (unsigned short)30542))));
            arr_44 [i_4] [i_4] [(unsigned short)11] = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) | (((/* implicit */int) (unsigned short)65527))));
        }
        arr_45 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1] [(unsigned short)2])) ? (((/* implicit */int) arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
    }
    for (unsigned short i_11 = 1; i_11 < 17; i_11 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 3) 
        {
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) min(((unsigned short)63955), ((unsigned short)45318)))), (((((/* implicit */int) arr_48 [i_11] [i_12])) / (((/* implicit */int) arr_47 [i_11]))))))) ? (((/* implicit */int) (unsigned short)46758)) : (((/* implicit */int) (unsigned short)65515))));
            arr_50 [i_11] [i_12] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) (unsigned short)18745)))))) ? (((/* implicit */int) (unsigned short)65521)) : ((-(((/* implicit */int) arr_46 [i_11 - 1]))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_13 = 1; i_13 < 19; i_13 += 1) 
        {
            for (unsigned short i_14 = 0; i_14 < 21; i_14 += 1) 
            {
                {
                    arr_56 [i_11] [i_11] [i_14] [i_11] = ((unsigned short) ((((/* implicit */int) (unsigned short)65533)) << (((((/* implicit */int) (unsigned short)57417)) - (57407)))));
                    var_30 = var_2;
                }
            } 
        } 
        arr_57 [i_11] [i_11] = ((unsigned short) ((((/* implicit */_Bool) arr_55 [(unsigned short)11] [(unsigned short)11] [i_11 + 2] [(unsigned short)11])) ? ((~(((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))))));
    }
    for (unsigned short i_15 = 2; i_15 < 16; i_15 += 1) 
    {
        var_31 = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) arr_47 [i_15])))) && (((/* implicit */_Bool) ((unsigned short) arr_52 [i_15]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65527))))) : (max((((((/* implicit */_Bool) (unsigned short)53103)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))), (((/* implicit */int) arr_59 [i_15 - 2]))))));
        arr_60 [i_15] = var_9;
        arr_61 [i_15] = max(((unsigned short)7147), (min((arr_53 [(unsigned short)16]), (arr_5 [i_15] [(unsigned short)7]))));
    }
    var_32 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1794)))))));
    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) (unsigned short)53125)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)59290), ((unsigned short)18749))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_17)))))))))));
    var_34 = ((/* implicit */unsigned short) min((min((((/* implicit */int) var_5)), ((-(((/* implicit */int) (unsigned short)5078)))))), (((/* implicit */int) var_7))));
}
