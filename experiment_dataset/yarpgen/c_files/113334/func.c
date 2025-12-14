/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113334
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
    var_20 = ((/* implicit */unsigned long long int) var_14);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_21 = ((/* implicit */int) ((short) arr_0 [i_0]));
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)255))));
            /* LoopSeq 3 */
            for (long long int i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                arr_8 [5ULL] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_0] [i_2]))));
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)1)))))));
                var_24 = arr_0 [i_2];
            }
            for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 12; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 4) 
                    {
                        {
                            arr_18 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) 2147483647))) ? (var_3) : (((/* implicit */long long int) (~(arr_0 [i_1]))))));
                            arr_19 [i_0] [i_1] [2] [i_3] [i_5] = ((/* implicit */int) var_11);
                            var_25 = ((/* implicit */long long int) ((unsigned long long int) var_13));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_6 = 0; i_6 < 13; i_6 += 1) 
                {
                    arr_23 [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) var_7);
                    var_26 &= (+(((/* implicit */int) var_12)));
                    var_27 *= ((/* implicit */short) var_11);
                    var_28 = ((/* implicit */unsigned char) (-(var_19)));
                }
                for (int i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    arr_27 [(unsigned char)2] [(unsigned char)2] [i_7] [i_3] = ((/* implicit */short) ((((/* implicit */long long int) var_6)) / (var_3)));
                    var_29 = ((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [6] [6]);
                    arr_28 [i_0] [i_0] [i_3] [i_7] [i_7] |= ((/* implicit */unsigned char) arr_12 [i_7]);
                }
                /* LoopSeq 2 */
                for (int i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    var_30 ^= ((/* implicit */short) ((int) var_12));
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 2; i_9 < 12; i_9 += 4) 
                    {
                        arr_33 [i_0] [i_9 + 1] [i_1] [i_3 + 1] [i_0] [i_0] &= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)14))));
                        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((unsigned char) arr_29 [i_9] [i_8] [i_3 - 1])))));
                    }
                    for (short i_10 = 3; i_10 < 10; i_10 += 3) 
                    {
                        var_32 += ((/* implicit */unsigned char) ((((long long int) var_18)) ^ (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0])))));
                        var_33 = ((/* implicit */int) min((var_33), (((int) arr_11 [i_10 - 3] [i_1]))));
                        arr_37 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)2)) + (1011551144)));
                    }
                    var_34 = ((/* implicit */int) var_12);
                }
                for (short i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    var_35 = ((/* implicit */unsigned long long int) (~(var_10)));
                    var_36 = ((/* implicit */short) ((int) arr_16 [i_0] [i_1] [i_1] [i_11] [i_3 + 1] [i_11]));
                    arr_42 [i_3] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (-1011551145) : (((/* implicit */int) (unsigned char)246))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (((arr_24 [i_0] [i_3] [i_3] [i_11]) << (((-2147483615) - (-2147483631)))))));
                }
            }
            for (unsigned long long int i_12 = 2; i_12 < 12; i_12 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 13; i_13 += 2) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 4) 
                    {
                        {
                            var_37 = ((((/* implicit */int) (short)4297)) << ((((-(var_11))) - (5754708525074251081LL))));
                            var_38 = ((/* implicit */int) ((arr_47 [i_14] [i_14] [i_14] [i_14] [i_14] [(unsigned char)0] [i_12 + 1]) - (arr_47 [i_13] [i_12 - 1] [i_13] [0ULL] [i_12 + 1] [i_12 - 1] [i_12 - 1])));
                            var_39 = ((/* implicit */long long int) (~(((/* implicit */int) var_13))));
                            arr_49 [i_12 + 1] [i_12] = ((/* implicit */long long int) (~(((unsigned long long int) (unsigned char)12))));
                        }
                    } 
                } 
                arr_50 [i_0] [7ULL] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)6))));
                /* LoopSeq 2 */
                for (int i_15 = 0; i_15 < 13; i_15 += 1) 
                {
                    var_40 = (~(((/* implicit */int) var_7)));
                    var_41 -= ((/* implicit */short) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
                }
                for (unsigned long long int i_16 = 2; i_16 < 12; i_16 += 4) 
                {
                    var_42 ^= ((/* implicit */short) (-(var_0)));
                    var_43 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_31 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12] [i_12 - 1] [i_12])) ^ (((/* implicit */int) arr_44 [i_0] [i_12 - 1]))));
                    var_44 = arr_15 [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_16] [i_16 + 1] [i_16 + 1];
                    arr_58 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_36 [i_12 - 2]))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((var_10) <= (((/* implicit */long long int) ((/* implicit */int) var_17))))))));
                }
            }
            /* LoopSeq 1 */
            for (long long int i_17 = 0; i_17 < 13; i_17 += 2) 
            {
                var_45 = ((short) arr_52 [i_0] [i_0] [i_0] [i_0] [i_17]);
                /* LoopSeq 3 */
                for (short i_18 = 0; i_18 < 13; i_18 += 4) 
                {
                    var_46 = ((((/* implicit */_Bool) arr_11 [i_0] [i_1])) ? (arr_34 [i_0] [0LL] [i_0] [i_1] [i_17] [i_0] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) var_15))));
                    arr_63 [i_0] [i_1] [i_0] [i_18] = ((((/* implicit */_Bool) 6287389649414782629LL)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (unsigned char)244)));
                    arr_64 [i_0] [0LL] [i_0] [i_18] &= ((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) var_13)))));
                }
                for (unsigned char i_19 = 0; i_19 < 13; i_19 += 2) 
                {
                    arr_67 [i_0] [i_1] = ((/* implicit */short) arr_44 [i_0] [i_1]);
                    /* LoopSeq 1 */
                    for (long long int i_20 = 0; i_20 < 13; i_20 += 2) 
                    {
                        var_47 = ((/* implicit */int) arr_15 [i_0] [i_0] [i_17] [i_19] [i_19] [i_20]);
                        arr_71 [i_0] [i_0] [i_17] &= ((/* implicit */long long int) (+(((/* implicit */int) var_13))));
                        arr_72 [i_0] [i_0] = ((short) ((short) arr_69 [i_0] [i_0] [i_0] [i_0] [0]));
                        arr_73 [i_0] [i_1] [i_17] [i_19] [i_20] [i_1] = ((/* implicit */long long int) ((6586154540850048055ULL) != (((/* implicit */unsigned long long int) arr_30 [i_0] [(short)4] [i_17] [i_20]))));
                    }
                }
                for (unsigned long long int i_21 = 0; i_21 < 13; i_21 += 3) 
                {
                    var_48 = (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_44 [i_0] [i_0])))));
                    var_49 = (+(((/* implicit */int) var_17)));
                }
                arr_77 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) - (var_11)));
                arr_78 [i_17] = (-(arr_57 [(short)2] [i_1] [4] [i_0] [i_0]));
            }
        }
        var_50 = var_10;
        /* LoopSeq 3 */
        for (int i_22 = 0; i_22 < 13; i_22 += 1) 
        {
            arr_81 [i_0] [i_22] [i_22] = ((/* implicit */long long int) var_8);
            var_51 ^= (-(((unsigned long long int) (unsigned char)116)));
        }
        for (unsigned long long int i_23 = 2; i_23 < 12; i_23 += 3) 
        {
            var_52 = ((/* implicit */int) ((unsigned long long int) arr_31 [i_23 + 1] [i_23 + 1] [i_23 - 2] [i_23] [i_23 + 1] [i_23 + 1]));
            var_53 = ((/* implicit */unsigned char) 12303230271412174197ULL);
        }
        for (int i_24 = 0; i_24 < 13; i_24 += 3) 
        {
            var_54 = var_19;
            /* LoopNest 2 */
            for (unsigned long long int i_25 = 4; i_25 < 11; i_25 += 3) 
            {
                for (unsigned char i_26 = 0; i_26 < 13; i_26 += 1) 
                {
                    {
                        var_55 = ((/* implicit */int) arr_22 [i_0] [i_24] [i_25] [i_26] [i_26]);
                        var_56 ^= (+(arr_15 [i_26] [i_26] [i_0] [i_0] [i_0] [i_0]));
                        var_57 *= ((/* implicit */long long int) ((arr_40 [i_25 + 1]) >= (arr_40 [i_0])));
                        arr_93 [i_0] [i_24] [i_24] [i_26] [i_25] = ((/* implicit */short) (-(1011551135)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_27 = 0; i_27 < 13; i_27 += 1) 
            {
                for (short i_28 = 0; i_28 < 13; i_28 += 4) 
                {
                    {
                        arr_99 [i_24] [i_24] [i_27] [i_28] = ((/* implicit */unsigned long long int) ((((int) var_7)) != (((/* implicit */int) var_18))));
                        var_58 = ((((((/* implicit */int) arr_48 [i_0])) + (2147483647))) << (((((((/* implicit */_Bool) 18446744073709551611ULL)) ? (arr_0 [i_27]) : (arr_69 [i_0] [i_24] [i_0] [i_24] [i_28]))) - (396251768))));
                    }
                } 
            } 
        }
    }
}
