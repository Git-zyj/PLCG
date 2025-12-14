/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134515
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_20 ^= ((/* implicit */int) var_12);
        var_21 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_12)) ? (var_2) : (arr_0 [i_0] [i_0]))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_22 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_19)))), (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_1])))) : (max((((/* implicit */int) ((short) var_8))), ((-(((/* implicit */int) var_1))))))));
            var_23 &= var_13;
            arr_6 [i_0] [i_0] = ((short) max((((/* implicit */short) arr_4 [i_0] [i_0] [i_0])), (arr_2 [i_0] [i_1])));
        }
        for (short i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            arr_9 [i_2] [i_0] = ((/* implicit */int) max((((((/* implicit */int) ((short) var_13))) != (((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) arr_8 [i_0] [i_2] [i_2]))))))), (arr_8 [i_0] [i_0] [i_2])));
            var_24 = ((/* implicit */unsigned int) ((min((((/* implicit */int) var_11)), (arr_1 [i_0]))) | (min((arr_1 [i_2]), (arr_1 [i_0])))));
        }
        for (int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            var_25 = ((unsigned int) (+(((((/* implicit */int) var_10)) - (arr_0 [i_0] [i_0])))));
            arr_12 [i_0] [i_0] = ((int) arr_0 [i_0] [i_0]);
            var_26 = ((/* implicit */short) min((min((((/* implicit */int) arr_8 [i_0] [i_3] [i_3])), (((((/* implicit */int) var_15)) + (((/* implicit */int) arr_7 [i_0])))))), (((((/* implicit */_Bool) min((arr_11 [i_0] [i_0]), (((/* implicit */unsigned int) (short)12854))))) ? ((~(((/* implicit */int) var_13)))) : ((~(arr_1 [i_3])))))));
        }
        var_27 = ((/* implicit */unsigned int) (+(((arr_3 [i_0] [i_0]) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))));
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (max((var_12), (var_12))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_10 [i_0])))))))) ? (max(((-(((/* implicit */int) var_10)))), (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)(-32767 - 1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0])))))) ? (((/* implicit */int) max((((/* implicit */short) arr_8 [i_0] [i_0] [i_0])), (var_15)))) : (((/* implicit */int) arr_3 [i_0] [i_0]))))));
    }
    for (int i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        arr_17 [i_4] [i_4] = ((/* implicit */short) (((((+(((/* implicit */int) arr_14 [i_4] [i_4])))) < (((/* implicit */int) arr_15 [i_4])))) ? (((arr_16 [i_4] [i_4]) << (((arr_16 [i_4] [i_4]) - (3401356878U))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((((/* implicit */_Bool) arr_13 [i_4])) || (((/* implicit */_Bool) var_14)))), ((_Bool)1)))))));
        arr_18 [i_4] = ((/* implicit */unsigned int) ((short) arr_15 [i_4]));
        arr_19 [i_4] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_15 [i_4]))))));
        arr_20 [i_4] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (short)32767)))) & (((/* implicit */int) ((_Bool) arr_14 [i_4] [i_4])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            var_29 = ((/* implicit */short) (~(-1406786659)));
            /* LoopSeq 2 */
            for (short i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                arr_26 [i_6] = ((/* implicit */short) (+(((((/* implicit */int) var_19)) - (((/* implicit */int) var_7))))));
                var_30 = ((/* implicit */unsigned int) (~((((_Bool)1) ? (arr_22 [i_4]) : (-15)))));
            }
            for (short i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) var_13)))));
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_32 = ((/* implicit */_Bool) ((((/* implicit */int) ((short) (short)17343))) << (((((((/* implicit */int) var_13)) + (19209))) - (23)))));
                    var_33 = ((/* implicit */short) (-(((/* implicit */int) arr_23 [i_4] [i_5] [i_7]))));
                    arr_34 [i_4] [i_4] [i_8] [i_4] = ((short) (short)-27879);
                    arr_35 [i_4] [i_4] [i_8] [i_4] [i_4] = ((/* implicit */_Bool) ((unsigned int) arr_29 [i_4] [i_4] [i_4] [i_4]));
                }
                /* LoopSeq 1 */
                for (short i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((var_0) / (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                    var_35 = ((/* implicit */short) ((_Bool) var_15));
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_4] [i_7])) ? ((-(var_14))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_38 [i_4] [i_4] [11] [i_4])))))));
                        var_37 = ((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) arr_37 [i_4] [i_5] [i_7] [i_4])) : (((/* implicit */int) var_5))))));
                    }
                }
                var_38 = ((/* implicit */int) arr_30 [i_5] [(_Bool)1] [i_4]);
            }
        }
        for (int i_11 = 0; i_11 < 20; i_11 += 2) 
        {
            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_32 [i_4] [i_4] [i_4])) : (arr_28 [i_11])))) ? (max((arr_24 [i_4] [i_4]), (((/* implicit */unsigned int) var_18)))) : (((((/* implicit */_Bool) arr_15 [i_4])) ? (arr_24 [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
            arr_44 [i_4] [i_11] = (+(((((/* implicit */_Bool) arr_13 [i_11])) ? (arr_27 [i_11] [i_11] [i_11] [i_4]) : (((/* implicit */int) arr_14 [i_11] [i_4])))));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 20; i_12 += 4) 
        {
            var_40 = ((arr_43 [i_4] [i_4]) < (((/* implicit */int) arr_21 [i_12])));
            var_41 ^= ((/* implicit */_Bool) (((_Bool)1) ? (arr_22 [i_4]) : (((/* implicit */int) var_15))));
            var_42 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_4])) - (((/* implicit */int) arr_21 [i_4]))));
            var_43 = (short)3976;
        }
    }
    var_44 = ((var_4) % (min((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_13))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_8))))));
    /* LoopSeq 2 */
    for (short i_13 = 0; i_13 < 14; i_13 += 2) 
    {
        arr_52 [i_13] [i_13] = ((_Bool) ((((/* implicit */int) arr_15 [i_13])) == (((/* implicit */int) var_19))));
        var_45 = ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_16)))), (((/* implicit */int) arr_49 [i_13] [i_13]))))) ? (((unsigned int) var_11)) : (((/* implicit */unsigned int) max((((/* implicit */int) (short)5501)), (var_2)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_14 = 0; i_14 < 14; i_14 += 1) 
        {
            var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_5))))))));
            /* LoopSeq 2 */
            for (short i_15 = 0; i_15 < 14; i_15 += 1) /* same iter space */
            {
                var_47 = ((/* implicit */short) (-(((/* implicit */int) arr_50 [i_14] [i_14]))));
                arr_58 [i_15] [i_15] [i_15] = ((/* implicit */_Bool) ((((unsigned int) var_14)) | (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_13] [i_14])))));
                arr_59 [i_15] = ((((/* implicit */int) arr_57 [i_15] [i_14] [i_13] [(short)5])) + (((/* implicit */int) var_1)));
                arr_60 [i_13] [i_14] [i_15] [9U] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_15] [i_14] [i_15]))) < (var_12)));
            }
            for (short i_16 = 0; i_16 < 14; i_16 += 1) /* same iter space */
            {
                arr_63 [i_13] = ((/* implicit */short) ((((/* implicit */int) arr_32 [i_16] [i_14] [i_13])) | (((/* implicit */int) var_10))));
                /* LoopSeq 1 */
                for (short i_17 = 0; i_17 < 14; i_17 += 2) 
                {
                    var_48 ^= ((/* implicit */short) (-(arr_27 [i_13] [i_14] [i_14] [i_17])));
                    var_49 = var_18;
                    /* LoopSeq 3 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        arr_68 [i_13] [i_14] [i_16] [i_17] [i_14] = ((/* implicit */short) var_4);
                        arr_69 [i_13] = ((/* implicit */short) arr_49 [i_17] [(short)12]);
                    }
                    for (int i_19 = 0; i_19 < 14; i_19 += 4) 
                    {
                        var_50 = var_15;
                        arr_72 [i_16] [i_17] [i_19] = ((int) arr_49 [i_16] [i_19]);
                        var_51 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_13] [i_14] [i_16] [i_16]))) : (arr_25 [i_13] [i_13] [i_14] [i_13])));
                        var_52 += ((/* implicit */_Bool) (-(((/* implicit */int) var_11))));
                    }
                    for (short i_20 = 0; i_20 < 14; i_20 += 2) 
                    {
                        var_53 = ((/* implicit */int) ((arr_61 [i_16] [i_14] [i_13]) % (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) << (((((/* implicit */int) arr_21 [i_13])) - (23945))))))));
                        var_54 += ((/* implicit */short) ((int) var_12));
                        arr_75 [i_13] [i_14] [i_16] [i_17] [i_20] [i_14] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) arr_71 [i_13])) || (((/* implicit */_Bool) arr_62 [i_13] [i_16] [i_17] [i_20]))));
                        var_55 = ((/* implicit */short) ((int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_16)))));
                        var_56 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) != (arr_24 [i_14] [i_20])));
                    }
                    var_57 = ((/* implicit */unsigned int) max((var_57), (((((/* implicit */_Bool) arr_67 [i_13] [i_17])) ? ((-(var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)6756)))))));
                }
                arr_76 [i_13] [i_13] [i_13] [i_13] &= ((arr_42 [i_13] [i_13] [i_16]) ? (((/* implicit */int) ((((/* implicit */int) arr_57 [i_13] [i_13] [i_16] [i_13])) <= (((/* implicit */int) arr_51 [i_16]))))) : (((/* implicit */int) ((((/* implicit */int) arr_41 [i_14])) > (arr_28 [i_16])))));
                arr_77 [i_16] [i_14] [i_14] [i_13] = ((((/* implicit */_Bool) arr_16 [i_13] [i_14])) ? (((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_13] [i_13] [(short)12] [i_13]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)2996)) ? (((/* implicit */int) (short)6673)) : (((/* implicit */int) var_11))))));
            }
        }
        /* vectorizable */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            arr_80 [i_21] [i_21] = ((/* implicit */int) var_12);
            var_58 += ((/* implicit */unsigned int) (+(((/* implicit */int) arr_42 [i_13] [i_21] [i_21]))));
            /* LoopSeq 1 */
            for (int i_22 = 0; i_22 < 14; i_22 += 2) 
            {
                var_59 = ((/* implicit */int) ((unsigned int) arr_22 [i_13]));
                /* LoopSeq 1 */
                for (short i_23 = 0; i_23 < 14; i_23 += 3) 
                {
                    var_60 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7782)) ? (((/* implicit */int) var_18)) : (var_17)));
                    var_61 = ((/* implicit */int) arr_24 [i_23] [i_13]);
                    arr_85 [i_13] [i_21] [i_22] = ((/* implicit */_Bool) (-((+(arr_40 [i_23] [i_23] [i_22] [i_21] [i_21] [i_21] [i_13])))));
                }
                var_62 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))));
            }
        }
        var_63 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_64 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])) ? ((((-(1826905153U))) % (var_12))) : (((unsigned int) ((_Bool) var_12)))));
    }
    for (unsigned int i_24 = 0; i_24 < 14; i_24 += 2) 
    {
        var_64 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) * (((/* implicit */int) max((arr_54 [i_24]), (((/* implicit */short) var_6)))))));
        var_65 += var_18;
    }
    var_66 = ((/* implicit */int) var_10);
    /* LoopSeq 1 */
    for (short i_25 = 0; i_25 < 17; i_25 += 4) 
    {
        arr_92 [i_25] = ((((/* implicit */int) ((_Bool) ((_Bool) arr_39 [i_25] [i_25] [i_25] [i_25] [i_25])))) ^ (min(((-(((/* implicit */int) var_9)))), (((/* implicit */int) ((short) arr_91 [i_25] [i_25]))))));
        var_67 = ((/* implicit */int) var_11);
    }
}
