/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171017
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
    var_15 += (~(var_5));
    var_16 += ((/* implicit */short) (!(((/* implicit */_Bool) max(((~(((/* implicit */int) var_10)))), (((/* implicit */int) var_4)))))));
    var_17 = ((/* implicit */unsigned int) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7))))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) var_11))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned char) ((unsigned int) arr_1 [i_0 + 1] [i_0 + 2]));
        arr_3 [i_0] = ((/* implicit */short) (+(((/* implicit */int) var_10))));
        var_18 += ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) var_14)) == (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        arr_4 [(unsigned short)10] = ((/* implicit */short) (!(((/* implicit */_Bool) 18U))));
        arr_5 [i_0 + 2] [i_0] = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_1 [(short)6] [i_0])))) < (((/* implicit */int) ((unsigned short) arr_0 [i_0])))));
    }
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                {
                    var_19 ^= ((/* implicit */int) min((((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (arr_8 [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_2] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_14 [i_3] [i_2]))))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + (arr_8 [i_1])))));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        arr_20 [i_4] [i_3] [(signed char)6] [i_1] [i_1] = ((/* implicit */unsigned int) arr_17 [i_1] [i_2] [i_3] [i_4]);
                        arr_21 [i_1] [i_2] [i_3] |= ((/* implicit */short) (+(((((/* implicit */int) var_1)) >> (((((((/* implicit */_Bool) arr_12 [i_1])) ? (((/* implicit */int) arr_15 [i_1] [i_2] [i_3] [i_2])) : (((/* implicit */int) (signed char)(-127 - 1))))) - (27986)))))));
                        arr_22 [i_1] [(signed char)9] [i_3] [(short)11] [i_2] [i_3] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_15 [(unsigned short)10] [i_2] [(unsigned short)10] [i_2])) : (max((((((/* implicit */int) var_8)) * (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((arr_16 [(signed char)3]), (arr_18 [i_3] [i_2] [i_1])))))));
                        var_20 *= ((/* implicit */short) (-(((/* implicit */int) var_1))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 2; i_5 < 13; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned char) var_13);
                            arr_28 [i_1] [i_2] [i_5] [i_5] [i_6] [i_5] [i_3] = ((((((/* implicit */_Bool) arr_17 [i_1] [i_2] [i_3] [i_6])) ? (((/* implicit */int) arr_17 [i_1] [i_2] [i_3] [(short)6])) : (((/* implicit */int) arr_17 [i_1] [i_2] [i_3] [i_5 - 2])))) & (((((((/* implicit */int) arr_27 [i_1] [i_1] [i_3] [i_3] [(signed char)2])) * (((/* implicit */int) var_10)))) << (((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_4))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 1; i_7 < 13; i_7 += 1) 
                        {
                            arr_31 [i_1] [i_2] [i_3] [i_5] [(_Bool)1] [i_2] [i_5] = ((((/* implicit */_Bool) arr_24 [i_1] [(signed char)12] [(signed char)12] [(_Bool)1] [i_1])) ? (((/* implicit */int) arr_24 [i_7 + 1] [i_5 + 1] [i_3] [i_1] [i_1])) : (((/* implicit */int) arr_24 [i_7 - 1] [i_5 + 1] [i_1] [(signed char)3] [i_1])));
                            var_22 *= ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) - (((/* implicit */int) arr_24 [i_1] [i_2] [i_3] [i_1] [i_5 - 2]))));
                        }
                        var_23 *= min((arr_13 [i_1]), ((signed char)30));
                        var_24 = (~((+(((/* implicit */int) var_14)))));
                    }
                    for (int i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        arr_36 [(signed char)1] [i_2] [i_2] &= ((short) arr_19 [i_1] [i_2] [i_3] [i_8]);
                        var_25 -= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & ((+(((((/* implicit */_Bool) arr_23 [i_3] [9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)30))) : (arr_33 [i_1] [i_2] [i_2] [i_2])))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        for (unsigned short i_10 = 1; i_10 < 15; i_10 += 2) 
                        {
                            {
                                var_26 *= ((/* implicit */unsigned short) var_1);
                                var_27 += ((/* implicit */_Bool) min((65535), (((((/* implicit */int) var_11)) * (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_11)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (arr_34 [i_1] [i_1])))) ? (max((((/* implicit */unsigned int) var_9)), (arr_34 [i_1] [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) << (((arr_34 [i_1] [i_1]) - (844523833U))))))));
        /* LoopNest 2 */
        for (signed char i_11 = 0; i_11 < 16; i_11 += 2) 
        {
            for (unsigned int i_12 = 0; i_12 < 16; i_12 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 16; i_13 += 3) 
                    {
                        for (signed char i_14 = 1; i_14 < 14; i_14 += 4) 
                        {
                            {
                                var_29 *= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) min((arr_25 [i_1] [i_1] [i_11] [i_13] [(signed char)12] [i_14] [i_13]), (((/* implicit */unsigned char) var_8))))) >> (((((((/* implicit */int) (short)16527)) << (((((/* implicit */int) var_13)) - (29))))) - (4230908))))));
                                var_30 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_14 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_1] [i_11] [i_12] [(unsigned short)6] [0U]))) : (arr_9 [i_1])))) && (((/* implicit */_Bool) max((arr_35 [i_1] [i_11] [i_12]), (arr_35 [i_1] [i_1] [i_1]))))));
                            }
                        } 
                    } 
                    arr_50 [i_1] [i_12] [i_12] = ((/* implicit */unsigned short) (-((((+(((/* implicit */int) arr_26 [i_1] [i_12])))) & (max((var_5), (((/* implicit */int) var_0))))))));
                    var_31 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (unsigned short)55108)))))));
                    var_32 |= ((/* implicit */_Bool) ((((((/* implicit */int) var_14)) == (((/* implicit */int) arr_46 [i_1] [i_1] [i_12] [i_12] [i_1] [i_11])))) ? (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) arr_15 [i_1] [i_1] [i_11] [i_12])) % (((/* implicit */int) var_12)))) : ((-(((/* implicit */int) arr_49 [i_1] [i_1] [(unsigned short)8] [i_12] [i_12] [i_12])))))) : (min((1469199276), (((arr_32 [i_1] [i_11] [i_12] [i_1]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1]))))))));
                }
            } 
        } 
    }
}
