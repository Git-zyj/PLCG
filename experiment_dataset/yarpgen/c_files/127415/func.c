/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127415
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))) - (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_7)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) var_7);
        arr_2 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) var_8)))));
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) arr_6 [i_1 - 2] [i_1 - 2]))) != (((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1 - 2]))) : (arr_6 [i_0] [i_1 - 2]))))))));
            arr_7 [(short)3] [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_1]);
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (-(var_11))))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1 - 2]))))) ? (((((arr_1 [i_0]) & (arr_1 [i_1 - 2]))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)6144))))))) : (max((arr_6 [i_1 - 1] [i_1 - 2]), (arr_6 [i_1 - 2] [i_1 - 2])))));
                /* LoopSeq 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1 - 2] [i_1 + 1] [i_1] [i_1 - 2]);
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((585768242) != (((/* implicit */int) (_Bool)1)))))));
                        arr_16 [i_0] [i_3] [i_2] [i_3] [i_0] [i_1 - 2] [i_2] = ((/* implicit */unsigned long long int) ((short) 585768252));
                    }
                    var_22 = ((/* implicit */unsigned short) var_4);
                }
                for (int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_0] [i_1 - 1])) != (((/* implicit */int) arr_9 [i_0] [i_1 - 2]))));
                    var_24 = ((/* implicit */signed char) max((arr_15 [i_1 - 2] [i_1 - 2] [i_5] [i_5]), (arr_15 [i_1 + 1] [i_1] [i_1] [i_5])));
                    arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) ((((/* implicit */int) max((var_7), (var_13)))) != (((/* implicit */int) arr_5 [i_5] [i_1 + 1])))))));
                }
                /* LoopSeq 1 */
                for (int i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        arr_26 [i_0] [i_1 + 1] [i_2] [i_6] [i_6] = ((/* implicit */short) var_4);
                        arr_27 [i_7] = ((/* implicit */int) arr_0 [i_6]);
                    }
                    var_25 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) var_12)) < (((/* implicit */int) arr_19 [(short)3])))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_21 [i_0] [i_1] [i_1] [i_1]))))) : ((-(arr_8 [i_1 - 2] [i_1 - 2] [2LL] [i_1])))));
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_1] [i_1] [i_1 - 1]))) : (arr_18 [i_1] [i_1] [i_1 - 1] [i_1 + 1] [i_1])))) ? (((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_5 [i_1 - 2] [i_1])))) : (((((/* implicit */int) var_13)) + (((/* implicit */int) arr_5 [i_1 - 1] [i_1]))))));
                }
            }
            for (signed char i_8 = 0; i_8 < 15; i_8 += 4) 
            {
                var_27 = ((/* implicit */unsigned char) ((((((arr_24 [i_8] [i_8] [i_8]) < (((/* implicit */int) var_12)))) ? (((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) arr_11 [i_1] [i_1] [i_8] [i_8] [i_1 - 2] [i_8]))))) : (((((/* implicit */int) var_8)) - (arr_24 [i_0] [i_1] [i_8]))))) & (((((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) var_8))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))));
                /* LoopSeq 3 */
                for (short i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_32 [i_9] [4] [i_1 - 1] [i_9])))) / (arr_8 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_0])));
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((((arr_29 [i_0] [i_8] [i_8] [i_10]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1]))))) < (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_0]))))))) ? (arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_1] [i_10]))) != (((((/* implicit */_Bool) var_9)) ? (arr_34 [i_0] [i_1] [i_8] [i_8] [i_8]) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_9])))))))))))));
                        var_30 = ((/* implicit */long long int) max((((arr_32 [i_1 + 1] [i_0] [i_0] [i_0]) & (arr_32 [i_1 + 1] [i_1] [i_1] [11LL]))), (((((/* implicit */_Bool) arr_32 [i_1 + 1] [i_1] [i_1] [i_1 - 1])) ? (arr_32 [i_1 + 1] [i_1 + 1] [i_1] [i_0]) : (arr_32 [i_1 + 1] [i_1] [i_1 - 1] [i_1])))));
                        var_31 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_24 [i_1 - 2] [i_1] [i_8])))) != (((unsigned long long int) ((var_11) != (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((_Bool) var_3)))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 15; i_11 += 1) 
                    {
                        arr_38 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((arr_32 [i_0] [i_1 + 1] [i_8] [i_9]) != (arr_32 [i_0] [i_0] [i_0] [(short)3]))))));
                        arr_39 [i_0] [i_0] [i_8] [i_0] = ((/* implicit */unsigned short) min(((short)-23803), (((/* implicit */short) var_13))));
                    }
                    var_33 |= ((/* implicit */short) arr_14 [i_1 - 2] [i_1] [i_1] [i_9] [i_9]);
                }
                for (long long int i_12 = 0; i_12 < 15; i_12 += 4) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned int) arr_36 [i_1] [i_0] [i_8] [i_12] [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        arr_45 [11] = ((/* implicit */unsigned long long int) var_4);
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */int) arr_17 [i_0])) : (max((((/* implicit */int) (_Bool)1)), (-585768231)))));
                        arr_46 [i_1] [i_8] [i_12] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)(-32767 - 1)))))) : (min((arr_4 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_4))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_3)) ? (arr_18 [i_0] [i_12] [i_1 + 1] [i_12] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_9 [i_13] [i_0])) : (((/* implicit */int) var_7)))))))));
                    }
                    for (short i_14 = 0; i_14 < 15; i_14 += 2) 
                    {
                        var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_33 [i_12] [i_1] [i_1] [i_0] [i_14])) != (((/* implicit */int) arr_41 [i_14] [i_14] [i_14] [i_14] [i_14]))))) != (((/* implicit */int) arr_43 [i_0] [i_8] [i_8] [i_8] [i_12] [i_1 + 1] [i_0])))))) - (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_8] [i_12] [(short)13])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_0 [i_0]))))) - (arr_42 [i_1 - 1] [i_1 - 2]))))))));
                        arr_49 [i_14] [i_12] [3LL] [i_8] [i_8] [i_1] [i_0] = arr_3 [i_0] [i_1] [i_1];
                    }
                }
                for (long long int i_15 = 0; i_15 < 15; i_15 += 4) /* same iter space */
                {
                    var_37 = ((/* implicit */signed char) arr_48 [i_15] [i_8] [i_8] [i_1] [i_1 - 2] [i_0] [i_0]);
                    var_38 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_32 [i_15] [i_15] [i_1 + 1] [i_1 - 2]) & (arr_32 [i_15] [i_8] [i_1 + 1] [i_1]))))));
                }
            }
        }
        for (short i_16 = 0; i_16 < 15; i_16 += 2) 
        {
            var_39 = ((/* implicit */short) arr_0 [i_0]);
            /* LoopSeq 1 */
            for (int i_17 = 0; i_17 < 15; i_17 += 3) 
            {
                var_40 = ((/* implicit */short) ((((((/* implicit */int) arr_9 [i_0] [i_16])) & (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) ((_Bool) arr_9 [i_0] [i_16])))));
                var_41 = ((/* implicit */unsigned int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
            arr_59 [i_16] = ((/* implicit */unsigned short) ((arr_25 [i_0] [i_16] [i_16] [7] [(_Bool)1] [i_16]) ? (((/* implicit */int) ((((var_1) - (((/* implicit */long long int) ((/* implicit */int) var_7))))) != (((/* implicit */long long int) arr_51 [i_0] [i_16] [i_16] [i_16]))))) : ((-(((/* implicit */int) ((_Bool) var_1)))))));
        }
        var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) var_2))));
        /* LoopNest 3 */
        for (long long int i_18 = 0; i_18 < 15; i_18 += 1) 
        {
            for (unsigned int i_19 = 0; i_19 < 15; i_19 += 4) 
            {
                for (long long int i_20 = 0; i_20 < 15; i_20 += 3) 
                {
                    {
                        arr_67 [i_18] [i_18] [i_18] [i_19] [i_20] = min((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)223))))), (((short) arr_65 [i_0] [i_0])));
                        var_43 = var_7;
                    }
                } 
            } 
        } 
    }
    var_44 -= ((/* implicit */_Bool) var_1);
    var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_5)) : (var_9)))) ? (((((/* implicit */int) (unsigned char)165)) / (((/* implicit */int) (unsigned char)147)))) : (((/* implicit */int) var_3))))) != ((-(var_1)))));
}
