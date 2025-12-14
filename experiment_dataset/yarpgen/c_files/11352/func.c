/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11352
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
    var_18 = ((/* implicit */signed char) var_6);
    var_19 = ((/* implicit */long long int) var_0);
    var_20 = ((/* implicit */signed char) (((+(((/* implicit */int) var_14)))) + (((((int) var_3)) & (var_15)))));
    var_21 = var_2;
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 3; i_1 < 7; i_1 += 3) 
        {
            arr_5 [i_0 - 1] [i_1] = ((/* implicit */unsigned short) (+(var_16)));
            arr_6 [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) var_5)))));
            var_22 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_2 [i_1] [i_1]))));
        }
        for (int i_2 = 1; i_2 < 6; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 3; i_3 < 8; i_3 += 1) 
            {
                for (unsigned short i_4 = 3; i_4 < 9; i_4 += 4) 
                {
                    for (unsigned char i_5 = 1; i_5 < 9; i_5 += 3) 
                    {
                        {
                            var_23 = arr_13 [i_4];
                            var_24 ^= ((/* implicit */_Bool) var_16);
                            arr_19 [i_0] [i_2 + 3] [i_3] [i_2 + 3] [i_5 - 1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_15 [i_5 + 1] [i_2] [i_3] [i_4] [i_5] [i_2] [i_5])) : (var_9))) : (((/* implicit */int) arr_9 [(unsigned short)0] [i_3] [i_2]))));
                        }
                    } 
                } 
            } 
            arr_20 [i_2] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) arr_12 [i_0 - 1] [i_0 + 2]);
            var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_12 [i_0] [i_2])) : (var_6))) & (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_0]))))));
        }
        arr_21 [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) var_10)) > (var_6))));
        arr_22 [i_0] [i_0] = ((unsigned short) ((((/* implicit */int) var_17)) ^ (((/* implicit */int) var_13))));
    }
    for (long long int i_6 = 4; i_6 < 14; i_6 += 4) 
    {
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) arr_24 [(unsigned char)8]))))))));
        var_27 = ((/* implicit */long long int) min((min((((/* implicit */unsigned short) var_7)), (min(((unsigned short)41511), (((/* implicit */unsigned short) arr_24 [i_6])))))), (((/* implicit */unsigned short) arr_25 [i_6]))));
    }
    for (unsigned char i_7 = 3; i_7 < 20; i_7 += 1) 
    {
        arr_28 [i_7] [i_7] = ((/* implicit */unsigned short) ((unsigned int) var_3));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_8 = 1; i_8 < 19; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_9 = 0; i_9 < 21; i_9 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    for (int i_11 = 3; i_11 < 20; i_11 += 1) 
                    {
                        {
                            var_28 = ((((/* implicit */_Bool) (-(arr_35 [i_7] [(unsigned char)9] [i_9] [i_10] [(unsigned short)10] [i_11])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_7]))))) : (((/* implicit */int) ((unsigned short) arr_36 [i_11 + 1] [i_8] [i_8] [i_10] [(_Bool)1] [i_7]))));
                            var_29 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_41 [i_11] [(unsigned char)8] [(unsigned char)8] [i_10] [i_11])) : (arr_32 [i_11]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) <= (var_9)))))));
                            var_30 = ((/* implicit */_Bool) (~((~(var_6)))));
                            var_31 = ((/* implicit */long long int) var_14);
                            var_32 ^= ((_Bool) ((_Bool) var_8));
                        }
                    } 
                } 
                arr_42 [i_7] [i_7] = ((/* implicit */signed char) ((long long int) (~(((/* implicit */int) var_4)))));
                /* LoopSeq 3 */
                for (unsigned long long int i_12 = 1; i_12 < 18; i_12 += 4) 
                {
                    var_33 = ((((arr_41 [i_12] [i_9] [i_9] [i_8] [i_7]) + (2147483647))) << (((((/* implicit */int) var_1)) - (154))));
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 3; i_13 < 20; i_13 += 4) 
                    {
                        var_34 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) var_8)))));
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_44 [i_7] [(short)14] [i_12 + 2] [i_13])))) || (((/* implicit */_Bool) var_9))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_14 = 2; i_14 < 19; i_14 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) var_4))));
                        arr_51 [i_7] [i_8 + 2] [(short)9] [i_8 + 2] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)64)) / (((/* implicit */int) (signed char)81))));
                        var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) var_12))));
                        var_38 = ((/* implicit */unsigned long long int) arr_38 [i_12] [i_12] [i_12 + 2]);
                    }
                    for (long long int i_15 = 2; i_15 < 18; i_15 += 2) 
                    {
                        var_39 ^= ((/* implicit */long long int) (~(((/* implicit */int) arr_29 [i_7]))));
                        var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) & (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_43 [i_7] [i_8] [(_Bool)1] [i_9] [i_12] [i_15 - 1])))));
                        var_41 = ((/* implicit */unsigned short) ((unsigned char) ((_Bool) var_1)));
                    }
                    arr_54 [i_7] [(short)4] [i_9] [i_12] [(short)17] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_13))))));
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                {
                    var_42 ^= ((/* implicit */unsigned short) var_10);
                    arr_57 [i_7] [i_8] [i_7] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_43 [(unsigned char)11] [i_8] [1] [i_8] [i_9] [i_16])));
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                {
                    arr_61 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) (((-(var_9))) * (((((/* implicit */int) var_14)) / (((/* implicit */int) arr_55 [i_17] [i_17] [i_17] [(unsigned short)5] [i_17] [i_17]))))));
                    var_43 ^= ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
                    arr_62 [i_7] [i_8] [i_9] [i_17] [i_17] [i_17] = ((/* implicit */long long int) arr_52 [i_7 + 1] [i_8] [i_9] [i_17]);
                }
            }
            /* LoopSeq 1 */
            for (unsigned int i_18 = 2; i_18 < 19; i_18 += 1) 
            {
                var_44 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) var_3)))));
                /* LoopSeq 3 */
                for (long long int i_19 = 1; i_19 < 20; i_19 += 4) 
                {
                    arr_67 [i_7] [i_19] [7ULL] [i_19] = ((/* implicit */short) var_1);
                    arr_68 [i_7] [i_19] = var_3;
                }
                for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_21 = 3; i_21 < 20; i_21 += 1) /* same iter space */
                    {
                        var_45 = ((/* implicit */short) arr_26 [i_18] [i_8]);
                        arr_73 [i_7] [i_7] [i_18 + 1] [i_21] [i_21] = ((/* implicit */_Bool) ((short) (unsigned short)50243));
                        var_46 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_6))) & ((-(((/* implicit */int) var_1))))));
                    }
                    for (unsigned short i_22 = 3; i_22 < 20; i_22 += 1) /* same iter space */
                    {
                        var_47 = ((/* implicit */_Bool) var_5);
                        var_48 *= ((/* implicit */short) (-(var_9)));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_23 = 1; i_23 < 18; i_23 += 4) 
                    {
                        var_49 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) var_17)))));
                        arr_79 [i_23] [i_20 + 1] [i_18] [i_7] [i_23] = ((/* implicit */int) var_7);
                        var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_30 [i_7] [4ULL]))))) ? (var_5) : ((-(((/* implicit */int) var_14))))));
                    }
                    for (short i_24 = 1; i_24 < 19; i_24 += 3) 
                    {
                        arr_83 [i_7] [i_7] [i_18] [i_20] [i_18] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)-55)))) || (((/* implicit */_Bool) var_17))));
                        var_51 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_46 [i_7] [i_7] [i_7] [i_7] [i_7])) ^ (((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (unsigned char)124)) : (var_6)))));
                    }
                    for (signed char i_25 = 1; i_25 < 19; i_25 += 3) 
                    {
                        var_52 = ((/* implicit */unsigned short) min((var_52), (((/* implicit */unsigned short) var_12))));
                        var_53 = ((/* implicit */unsigned long long int) max((var_53), (((/* implicit */unsigned long long int) var_8))));
                        arr_87 [i_7] [i_7] [(_Bool)1] [i_7] [i_7 - 3] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_4)))))));
                        var_54 = ((/* implicit */signed char) (~(((long long int) arr_84 [i_7 + 1] [i_8] [i_18] [i_20]))));
                    }
                    var_55 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_2)))));
                }
                for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) /* same iter space */
                {
                    var_56 = ((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) var_13)))));
                    var_57 = arr_33 [i_7 - 3] [i_8] [i_18] [i_26];
                    var_58 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_49 [i_26 + 1] [8LL] [i_8])))) : (((unsigned long long int) arr_65 [i_26] [i_26] [i_8 + 2] [i_26] [i_7]))));
                    var_59 = ((/* implicit */unsigned char) ((((/* implicit */int) var_17)) << (((((/* implicit */int) var_14)) - (156)))));
                }
            }
            var_60 = ((/* implicit */unsigned char) var_6);
            /* LoopNest 2 */
            for (_Bool i_27 = 0; i_27 < 0; i_27 += 1) 
            {
                for (unsigned char i_28 = 2; i_28 < 19; i_28 += 3) 
                {
                    {
                        var_61 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((((/* implicit */int) var_4)) * (((/* implicit */int) arr_52 [i_7] [i_8] [i_27] [i_28 - 1])))) : (((/* implicit */int) var_11))));
                        arr_96 [i_28] = ((/* implicit */unsigned short) var_14);
                        arr_97 [i_28] [i_8] = ((/* implicit */_Bool) ((((((/* implicit */int) var_3)) <= (((/* implicit */int) arr_37 [i_7] [i_27] [i_7])))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))));
                        var_62 *= ((/* implicit */unsigned long long int) ((_Bool) var_1));
                        arr_98 [i_7] [i_7] [i_27] [i_7] [i_27] [i_28] = ((/* implicit */_Bool) ((unsigned short) (~(var_5))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_29 = 1; i_29 < 17; i_29 += 2) 
        {
            var_63 = (!(((((/* implicit */long long int) min((((/* implicit */int) arr_94 [i_7 - 1] [i_29] [i_7])), (var_6)))) < (((((/* implicit */long long int) ((/* implicit */int) var_17))) | (arr_34 [i_29]))))));
            /* LoopNest 2 */
            for (_Bool i_30 = 1; i_30 < 1; i_30 += 1) 
            {
                for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                {
                    {
                        var_64 *= ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_60 [i_7] [i_29] [i_30] [i_31]))) > (arr_43 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))), ((+(((var_12) ? (((/* implicit */int) arr_50 [i_7] [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) var_17))))))));
                        /* LoopSeq 2 */
                        for (long long int i_32 = 0; i_32 < 21; i_32 += 2) 
                        {
                            var_65 = ((/* implicit */unsigned char) max((var_9), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_64 [i_30]))))))))));
                            var_66 ^= ((/* implicit */unsigned char) arr_63 [i_30] [9ULL] [i_30 - 1] [i_30 - 1]);
                        }
                        for (unsigned long long int i_33 = 1; i_33 < 19; i_33 += 2) 
                        {
                            var_67 = ((/* implicit */short) ((unsigned char) var_13));
                            arr_112 [i_7 - 2] [i_29] [i_7 - 2] [i_29] = ((/* implicit */unsigned long long int) (-(max(((-(((/* implicit */int) var_17)))), (((var_9) / (((/* implicit */int) var_17))))))));
                        }
                        var_68 ^= ((/* implicit */long long int) ((unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_14))))), (arr_35 [i_7] [19LL] [i_30] [i_31] [i_31] [i_29]))));
                        arr_113 [i_7] [i_29] [i_7] [i_7] = ((/* implicit */unsigned char) arr_101 [i_29] [i_29]);
                    }
                } 
            } 
            var_69 ^= ((/* implicit */short) var_5);
        }
        for (unsigned short i_34 = 4; i_34 < 20; i_34 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
            {
                for (unsigned char i_36 = 2; i_36 < 20; i_36 += 1) 
                {
                    for (unsigned short i_37 = 2; i_37 < 20; i_37 += 2) 
                    {
                        {
                            arr_124 [i_7] [i_34] [i_34] [i_7] [i_36] [(unsigned short)16] [i_36] = ((/* implicit */long long int) var_6);
                            var_70 = ((/* implicit */unsigned char) var_16);
                            arr_125 [i_7] [i_34] [i_35] [i_36] [i_37] = ((/* implicit */unsigned short) min((((int) arr_27 [(_Bool)1])), ((~(var_15)))));
                        }
                    } 
                } 
            } 
            var_71 = ((/* implicit */_Bool) var_14);
            var_72 = ((/* implicit */_Bool) min((var_72), (((/* implicit */_Bool) (+((+(((/* implicit */int) var_11)))))))));
        }
    }
}
