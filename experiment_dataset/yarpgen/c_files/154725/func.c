/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154725
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
    var_15 = ((/* implicit */unsigned short) (unsigned char)255);
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (arr_0 [i_0])));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                    arr_7 [(_Bool)1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_7))))))) ? (((((/* implicit */int) var_9)) % (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
                    var_18 = ((/* implicit */unsigned char) (((((_Bool)1) ? (var_13) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) max((arr_6 [i_2] [i_1] [i_0]), ((short)12))))))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 4 */
    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 4) /* same iter space */
    {
        var_20 &= ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            var_21 = ((/* implicit */short) (-(((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_1))))));
            var_22 = ((/* implicit */short) -61292361);
        }
        var_23 = ((/* implicit */unsigned int) (short)5495);
        arr_13 [(short)4] = ((/* implicit */unsigned int) arr_1 [i_3]);
    }
    for (unsigned int i_5 = 1; i_5 < 10; i_5 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_6 = 4; i_6 < 10; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_24 [i_5] [i_6] [i_6] [i_7] &= ((/* implicit */short) var_9);
                    arr_25 [i_7] [i_7] = ((/* implicit */short) min(((-((+(var_12))))), (8433612891533813993ULL)));
                    arr_26 [2U] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_16 [i_5] [i_5]), (((/* implicit */int) (short)8215))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_6] [i_6] [i_6 + 1]))) - (arr_8 [i_7])))))) ? ((~((+(var_14))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_7] [i_7] [i_7]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : ((((_Bool)1) ? (arr_16 [i_5] [i_6 - 4]) : (((/* implicit */int) arr_5 [1] [i_5] [i_5]))))))));
                    var_24 = ((/* implicit */short) (~(((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) var_6))))))));
                }
            } 
        } 
        var_25 += ((/* implicit */unsigned char) var_0);
        arr_27 [i_5] = ((/* implicit */short) arr_10 [i_5]);
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_26 = ((/* implicit */unsigned char) max(((~((+(var_13))))), (((/* implicit */int) arr_30 [i_8]))));
        var_27 = ((/* implicit */_Bool) max((var_7), ((unsigned short)5)));
    }
    for (int i_9 = 0; i_9 < 14; i_9 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_10 = 2; i_10 < 11; i_10 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_11 = 0; i_11 < 14; i_11 += 4) 
            {
                arr_39 [i_11] [i_10] [i_9] = ((/* implicit */signed char) min((((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_9] [i_9] [i_10]))))), ((-(min((5887696736110422591LL), (((/* implicit */long long int) (_Bool)1))))))));
                var_28 = ((/* implicit */int) min((arr_3 [i_11] [i_11]), (max((((((/* implicit */long long int) -1741195242)) % (var_0))), (((/* implicit */long long int) var_2))))));
            }
            arr_40 [i_10] [i_9] [i_9] = ((/* implicit */long long int) arr_5 [i_9] [i_9] [i_10]);
        }
        for (long long int i_12 = 2; i_12 < 11; i_12 += 4) 
        {
            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) arr_35 [i_9]))));
            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) min((((((((/* implicit */int) (short)-17)) * (((/* implicit */int) var_4)))) / ((-(((/* implicit */int) (_Bool)1)))))), (((arr_29 [i_12 + 3] [i_12 - 1]) / (arr_29 [i_12 + 3] [i_12 - 1]))))))));
            /* LoopSeq 2 */
            for (signed char i_13 = 2; i_13 < 10; i_13 += 4) 
            {
                var_31 = ((/* implicit */unsigned long long int) max((max((var_4), (arr_5 [i_13 + 3] [i_13 + 2] [i_13 + 3]))), (min((arr_5 [i_13 - 1] [i_13 + 1] [i_13 - 1]), (arr_5 [i_13 + 2] [i_13 + 4] [i_13])))));
                arr_45 [i_13] [i_13] [i_9] [i_13] = ((/* implicit */unsigned int) arr_41 [i_9]);
            }
            for (unsigned long long int i_14 = 1; i_14 < 12; i_14 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_15 = 3; i_15 < 13; i_15 += 3) 
                {
                    var_32 -= ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)));
                    var_33 &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_48 [i_15 - 3] [i_15 - 2] [i_15] [9LL]))) ? (((((/* implicit */_Bool) 5887696736110422588LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_15 - 2] [i_15 - 1] [(_Bool)1] [i_15]))) : (arr_48 [i_15 + 1] [i_15 + 1] [i_15] [i_15]))) : (((arr_48 [i_15 - 2] [i_15 + 1] [i_15] [i_15]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_15 - 1] [i_15 - 2] [i_15 - 2] [i_15])))))));
                    var_34 = ((/* implicit */unsigned short) max((((unsigned int) arr_33 [i_12 - 1] [i_14 + 1])), (((unsigned int) 1696307959))));
                    var_35 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_48 [i_12] [i_12 - 1] [i_15 - 1] [i_14 + 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) != ((-(var_11)))));
                }
                var_36 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_1 [15U])), (var_10)));
                var_37 = var_7;
                arr_50 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_48 [i_9] [i_9] [i_9] [i_9]))), (((/* implicit */unsigned long long int) (!((_Bool)1)))))))));
                /* LoopSeq 1 */
                for (short i_16 = 0; i_16 < 14; i_16 += 4) 
                {
                    var_38 *= ((/* implicit */unsigned int) arr_3 [(unsigned char)11] [(unsigned char)11]);
                    arr_53 [i_9] [i_9] [i_14] [i_16] = var_14;
                }
            }
        }
        for (short i_17 = 0; i_17 < 14; i_17 += 3) 
        {
            arr_57 [(unsigned short)12] [(unsigned short)12] [i_9] = ((/* implicit */int) arr_51 [i_9] [i_9]);
            var_39 |= ((/* implicit */int) ((((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (var_3)))))) >= (var_11)));
            var_40 &= ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_6 [i_9] [i_17] [i_9]), (((/* implicit */short) arr_4 [i_17]))))) - (((((/* implicit */_Bool) 9636083372132301404ULL)) ? (1696307959) : (((/* implicit */int) (unsigned short)61600))))));
            /* LoopSeq 3 */
            for (unsigned short i_18 = 3; i_18 < 12; i_18 += 4) 
            {
                var_41 = ((/* implicit */unsigned long long int) var_4);
                var_42 = ((/* implicit */short) ((unsigned long long int) max((var_10), (max((arr_41 [5ULL]), (((/* implicit */unsigned long long int) -842772242)))))));
            }
            for (unsigned int i_19 = 4; i_19 < 12; i_19 += 1) 
            {
                arr_64 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))));
                var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) var_10))));
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 14; i_20 += 3) 
                {
                    for (unsigned int i_21 = 1; i_21 < 12; i_21 += 2) 
                    {
                        {
                            var_44 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_28 [i_9])) == (((/* implicit */int) (_Bool)1)))))) | (((((/* implicit */_Bool) arr_59 [i_9] [i_17] [i_19] [i_20])) ? (4294967295U) : (((/* implicit */unsigned int) 1786246789)))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_55 [i_19 + 2] [4]))))))))));
                            var_45 = ((/* implicit */unsigned long long int) ((((((var_0) >= (((/* implicit */long long int) 0U)))) ? (((/* implicit */int) ((var_0) >= (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_9])))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))))) | (((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)52091)))))))));
                        }
                    } 
                } 
                var_46 = ((((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_9])) && (((/* implicit */_Bool) (unsigned short)61600))))) >= ((-((-(arr_67 [i_19 + 1] [i_19] [i_9] [i_17] [i_9] [i_9]))))));
            }
            for (int i_22 = 4; i_22 < 13; i_22 += 4) 
            {
                arr_71 [i_9] = ((/* implicit */short) (!(((((/* implicit */int) var_4)) > (((/* implicit */int) arr_56 [i_22 - 1] [i_22] [i_17]))))));
                /* LoopSeq 3 */
                for (unsigned short i_23 = 0; i_23 < 14; i_23 += 4) 
                {
                    var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) var_14))));
                    /* LoopSeq 2 */
                    for (short i_24 = 2; i_24 < 13; i_24 += 1) 
                    {
                        var_48 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_75 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                        var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_0 [i_24 + 1]))) >> ((((~(((int) -842772238)))) - (842772224)))));
                    }
                    for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
                    {
                        arr_79 [i_9] [i_9] [i_17] [i_22] [i_9] [i_25] [i_17] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_54 [i_22 - 3] [i_22 - 4]))))));
                        var_50 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) max((24ULL), (((/* implicit */unsigned long long int) (unsigned short)61591))))) && (((/* implicit */_Bool) (-(-1428185674)))))))));
                        var_51 = ((/* implicit */int) min((var_51), ((+(((/* implicit */int) arr_43 [i_17]))))));
                    }
                }
                for (unsigned long long int i_26 = 1; i_26 < 13; i_26 += 3) 
                {
                    var_52 = ((/* implicit */unsigned short) (-(((arr_37 [i_26] [i_26] [i_26 - 1] [i_26 - 1]) / (arr_37 [i_26] [i_26] [i_26 - 1] [i_26 - 1])))));
                    var_53 = ((/* implicit */short) min((var_53), (((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_13)))) ? (((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_6)) - (16788))))) : (((/* implicit */int) arr_66 [i_9]))))) == (4223359162U))))));
                    arr_82 [i_17] [8U] = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((arr_31 [i_9]), (arr_31 [i_9])))), (min((8093385358519643882ULL), (((/* implicit */unsigned long long int) arr_58 [i_9] [i_17]))))));
                }
                for (short i_27 = 1; i_27 < 12; i_27 += 3) 
                {
                    arr_86 [i_17] = ((/* implicit */unsigned long long int) ((long long int) (!((((_Bool)1) || (((/* implicit */_Bool) arr_63 [i_17] [(unsigned char)4])))))));
                    var_54 -= ((/* implicit */unsigned short) 4294967289U);
                    arr_87 [9U] [9U] = ((/* implicit */unsigned long long int) (~(arr_46 [i_22 + 1] [(_Bool)1] [i_22])));
                }
                /* LoopNest 2 */
                for (long long int i_28 = 1; i_28 < 13; i_28 += 2) 
                {
                    for (unsigned int i_29 = 1; i_29 < 13; i_29 += 2) 
                    {
                        {
                            var_55 = (!(((/* implicit */_Bool) ((long long int) arr_43 [i_9]))));
                            var_56 = ((/* implicit */unsigned int) max((var_56), (((/* implicit */unsigned int) arr_63 [i_9] [i_9]))));
                            arr_94 [i_9] [i_9] [i_9] [i_9] [i_29] [i_9] [6] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((min((4U), (((/* implicit */unsigned int) arr_32 [i_28])))), (((/* implicit */unsigned int) arr_42 [i_29 + 1] [i_22 - 1] [i_28 - 1]))))), ((-(max((8093385358519643882ULL), (arr_47 [i_22])))))));
                            var_57 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_84 [i_29 + 1] [i_17] [i_29 + 1] [i_28])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_84 [i_17] [i_17] [i_17] [i_17])))), ((~(((/* implicit */int) arr_84 [i_29 + 1] [i_28] [i_17] [i_9]))))));
                        }
                    } 
                } 
            }
        }
        /* LoopNest 2 */
        for (long long int i_30 = 0; i_30 < 14; i_30 += 2) 
        {
            for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
            {
                {
                    var_58 = ((/* implicit */_Bool) max((var_58), (((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)65535)), (((arr_5 [i_31] [2ULL] [i_9]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_99 [i_30] [i_31] [i_31])))))))));
                    arr_101 [i_9] [i_30] [i_31] = ((/* implicit */long long int) (-(((/* implicit */int) arr_49 [i_9] [i_9] [i_9] [i_9]))));
                }
            } 
        } 
    }
    var_59 = ((/* implicit */unsigned int) var_10);
}
