/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186441
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
    var_16 = ((/* implicit */unsigned short) (~((~(((((/* implicit */int) var_0)) & (((/* implicit */int) var_15))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_17 = min(((unsigned short)18449), ((unsigned short)47087));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                for (unsigned short i_3 = 1; i_3 < 20; i_3 += 1) 
                {
                    {
                        arr_12 [(unsigned short)15] [i_2] [i_2] [i_1] [i_0] [i_0] = max((max((arr_7 [i_2 + 2] [i_3 + 2] [i_3] [i_2 + 2]), (var_1))), (var_4));
                        arr_13 [i_3 - 1] [i_1] = ((unsigned short) max((arr_3 [i_2 + 1] [i_3 - 1]), (arr_11 [(unsigned short)3] [i_3 - 1] [i_2 + 2])));
                        var_18 = ((/* implicit */unsigned short) min((var_18), (max(((unsigned short)47086), (var_10)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 2; i_4 < 13; i_4 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    {
                        arr_24 [i_4] [i_5] [i_5] [i_5] [i_5] [i_7] = ((/* implicit */unsigned short) max((min((((/* implicit */int) arr_1 [i_4 - 1])), (((((/* implicit */_Bool) arr_3 [i_4] [i_5])) ? (((/* implicit */int) (unsigned short)2047)) : (((/* implicit */int) var_2)))))), (((/* implicit */int) min((arr_23 [i_4 + 3] [i_4] [i_4 + 2] [i_4]), ((unsigned short)37821))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            arr_28 [i_4] [i_4] = ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_4 - 2] [i_4 + 1])) : (((/* implicit */int) arr_0 [i_4 + 2] [i_4 - 2]))));
                            arr_29 [i_8] [(unsigned short)14] [i_5] [i_4 + 1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_6 [i_4 + 2] [i_4 + 1] [i_4 + 3])) ? (((/* implicit */int) arr_6 [i_4 - 1] [i_4] [i_4 - 1])) : (((/* implicit */int) arr_6 [i_4 - 1] [i_4] [i_4])))), ((+(((/* implicit */int) var_4))))));
                            var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)52231)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)19891))))), ((unsigned short)65535)))) : (((((/* implicit */int) (unsigned short)6544)) * (((/* implicit */int) min(((unsigned short)2716), (var_4))))))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            arr_33 [i_7] [i_9] = arr_22 [i_4 - 2];
                            arr_34 [i_4 - 1] [(unsigned short)1] [i_6] [i_4 + 1] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_4 - 2] [i_4 + 2])) ? (((((/* implicit */int) var_2)) | (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_22 [(unsigned short)0]))));
                            arr_35 [i_5] [(unsigned short)13] [i_9] [i_7] [i_9] [i_7] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_9))));
                            arr_36 [i_9] [i_7] [i_4 + 1] [i_4 + 1] [i_4 + 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_22 [i_4 + 3]))));
                            arr_37 [i_4 + 3] [i_4 + 3] [i_4] [(unsigned short)4] [i_4] = (unsigned short)2716;
                        }
                        arr_38 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) * (((/* implicit */int) max((var_13), (arr_14 [i_4]))))));
                    }
                } 
            } 
        } 
        var_20 = (unsigned short)45645;
        arr_39 [i_4 + 3] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) min((var_12), (arr_23 [i_4 + 2] [i_4 + 2] [i_4] [i_4])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_10 = 2; i_10 < 14; i_10 += 2) 
        {
            var_21 = var_10;
            /* LoopNest 2 */
            for (unsigned short i_11 = 0; i_11 < 16; i_11 += 2) 
            {
                for (unsigned short i_12 = 0; i_12 < 16; i_12 += 1) 
                {
                    {
                        arr_46 [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)31004)) : (((/* implicit */int) arr_21 [i_10 + 1] [i_10 - 1] [i_10 - 2] [i_10 - 1]))));
                        var_22 = (unsigned short)62819;
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = 2; i_13 < 15; i_13 += 1) 
                        {
                            arr_49 [(unsigned short)3] [i_10] [(unsigned short)8] [i_11] [i_12] [i_13] [(unsigned short)3] = var_3;
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)55520)) << (((((((/* implicit */_Bool) (unsigned short)10016)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_22 [i_4])))) - (6532)))));
                            arr_50 [(unsigned short)2] [i_10] [i_11] [i_11] [i_11] &= (unsigned short)45645;
                            arr_51 [i_12] [i_12] [i_11] [i_11] [i_12] = var_1;
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_14 = 1; i_14 < 14; i_14 += 2) 
            {
                arr_56 [i_4] [i_4] [i_10] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_16 [i_4]))));
                var_24 = arr_44 [i_10] [i_10];
                /* LoopSeq 1 */
                for (unsigned short i_15 = 0; i_15 < 16; i_15 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 0; i_16 < 16; i_16 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned short) max((var_25), (var_6)));
                        arr_63 [i_4 - 2] [i_10] [i_14 + 2] [i_15] [i_16] = (unsigned short)38900;
                        var_26 = (unsigned short)55535;
                    }
                    var_27 = arr_48 [i_4 + 1] [i_10 - 2] [i_14] [(unsigned short)11] [(unsigned short)3];
                }
            }
        }
        var_28 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)52306)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)16490)) : (((/* implicit */int) arr_54 [i_4] [i_4] [i_4])))))))), (((((/* implicit */_Bool) max((var_8), (arr_44 [(unsigned short)4] [(unsigned short)4])))) ? (((/* implicit */int) arr_30 [i_4] [i_4] [i_4] [i_4] [i_4 + 2])) : (((/* implicit */int) min((arr_59 [i_4] [i_4 + 1] [i_4]), ((unsigned short)45644))))))));
    }
    var_29 = var_10;
    var_30 += min((((unsigned short) max((var_0), ((unsigned short)46273)))), (max((((/* implicit */unsigned short) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_14))))), (var_6))));
}
