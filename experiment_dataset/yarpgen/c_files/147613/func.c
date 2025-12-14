/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147613
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
    var_14 = ((/* implicit */long long int) ((unsigned char) var_5));
    var_15 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) ((short) ((unsigned char) arr_1 [i_0])));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 |= ((/* implicit */unsigned int) arr_2 [i_1] [i_1] [i_0]);
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) ((signed char) arr_6 [i_0] [i_0 - 1] [i_0 - 1]));
                            var_19 = ((/* implicit */_Bool) var_0);
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -3363365826809631207LL)) ? (4194048) : (((/* implicit */int) (unsigned short)61661))));
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_21 -= ((/* implicit */unsigned long long int) arr_9 [3] [i_0 - 1] [i_0 - 1] [i_0] [i_0]);
                    var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_2])) ? (var_4) : (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_2] [i_5] [i_0]))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_5] [i_2] [i_1] [i_1] [i_0]))) : (var_6))) : (((/* implicit */unsigned long long int) ((int) var_3))));
                    /* LoopSeq 3 */
                    for (short i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [(signed char)5] [i_0])) ? (arr_3 [i_0] [i_0 + 2] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 2] [i_0])))));
                        arr_18 [i_0] [i_1] [i_2] [i_0] [i_0] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0 + 2])) ? (arr_3 [i_0] [i_1] [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                        var_24 = arr_1 [i_0];
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_25 |= ((/* implicit */long long int) ((unsigned char) arr_12 [i_0 + 2]));
                        var_26 -= ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_0] [i_2])) : (((/* implicit */int) arr_5 [(unsigned char)0] [i_2])));
                        var_27 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9485333175609516390ULL)) ? (((/* implicit */int) (_Bool)1)) : (1567367237)));
                    }
                    for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned char) ((int) var_5));
                        var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [8ULL]))));
                        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (-(var_6))))));
                        var_31 = ((/* implicit */int) max((var_31), (((int) var_7))));
                    }
                }
                var_32 ^= ((/* implicit */unsigned long long int) ((unsigned char) arr_17 [i_0] [i_2] [i_0 - 1]));
                arr_24 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */int) (-((~(var_4)))));
            }
            /* vectorizable */
            for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((arr_29 [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_10]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_16 [i_0] [i_0 - 1] [i_0 + 2] [i_0] [i_0 + 1]))))));
                        var_34 = ((/* implicit */unsigned char) var_1);
                        var_35 -= var_5;
                        arr_31 [i_0] = ((/* implicit */unsigned short) var_7);
                        var_36 = ((/* implicit */_Bool) arr_30 [i_10] [i_10] [4ULL] [(unsigned char)2] [i_0]);
                    }
                    var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_10])))))));
                }
                var_38 = (-(arr_6 [(unsigned char)7] [i_0] [i_0]));
            }
        }
        for (signed char i_12 = 1; i_12 < 11; i_12 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 12; i_13 += 4) 
            {
                for (unsigned char i_14 = 0; i_14 < 12; i_14 += 3) 
                {
                    {
                        arr_40 [i_0 + 1] [i_0 + 1] [i_0] [i_0] = ((/* implicit */int) ((var_8) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0])))));
                        /* LoopSeq 1 */
                        for (short i_15 = 0; i_15 < 12; i_15 += 4) 
                        {
                            arr_45 [6LL] [i_0] [(unsigned char)11] [i_14] [i_15] = ((/* implicit */long long int) var_8);
                            var_39 = ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
                            var_40 = ((/* implicit */int) min((var_40), (min((((int) arr_44 [i_12 - 1] [i_12 + 1] [i_12] [i_12] [i_12 + 1] [i_12 + 1] [i_12])), (((/* implicit */int) var_1))))));
                            arr_46 [i_0] [i_12] [i_12 + 1] = ((/* implicit */int) arr_43 [i_15] [i_14] [i_13] [i_12] [i_0]);
                        }
                        var_41 = ((/* implicit */unsigned char) ((-1567367222) ^ (((/* implicit */int) (unsigned short)3872))));
                        var_42 = ((/* implicit */unsigned int) arr_11 [i_0] [i_12 + 1] [i_0] [i_0] [i_0]);
                    }
                } 
            } 
            arr_47 [i_0 + 2] [i_0] = ((/* implicit */signed char) var_8);
            var_43 = (((!(((/* implicit */_Bool) var_3)))) ? (arr_21 [i_0] [i_12 - 1] [i_12] [i_12] [i_0 + 2] [i_0 - 1]) : (((/* implicit */int) arr_25 [(_Bool)1] [i_0 + 2])));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_17 = 0; i_17 < 12; i_17 += 4) 
            {
                for (unsigned short i_18 = 0; i_18 < 12; i_18 += 4) 
                {
                    for (int i_19 = 0; i_19 < 12; i_19 += 3) 
                    {
                        {
                            var_44 = ((/* implicit */unsigned short) var_12);
                            var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_0 + 1]))))) ? (((unsigned int) arr_15 [i_0 + 1])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_16]))))) : (((/* implicit */int) var_7)))))));
                        }
                    } 
                } 
            } 
            var_46 = ((/* implicit */_Bool) arr_50 [i_0] [i_16] [i_0 - 1] [i_16]);
        }
        for (unsigned char i_20 = 2; i_20 < 8; i_20 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_21 = 4; i_21 < 10; i_21 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_22 = 1; i_22 < 10; i_22 += 3) 
                {
                    for (short i_23 = 0; i_23 < 12; i_23 += 3) 
                    {
                        {
                            arr_69 [i_0] [i_0] = (-(((/* implicit */int) min((arr_7 [i_22 + 1] [i_21 - 2] [i_20 - 1] [i_0]), (var_10)))));
                            var_47 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
                            var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_0])) ? ((~(((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) arr_14 [(short)7] [(unsigned char)5] [i_21 - 4] [i_22 + 1] [i_23]))))))));
                            var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) max((var_2), (var_2))))))) ? (((/* implicit */unsigned long long int) ((long long int) arr_38 [(_Bool)1]))) : (var_8)));
                        }
                    } 
                } 
                var_50 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_26 [i_0] [i_21 - 2] [i_0] [i_21 - 2]))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))) : ((+(((/* implicit */int) arr_62 [i_0] [i_0]))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (var_8))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_62 [i_0] [i_0]))))));
                var_51 = ((/* implicit */unsigned short) var_13);
            }
            for (unsigned long long int i_24 = 4; i_24 < 10; i_24 += 1) /* same iter space */
            {
                var_52 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13))));
                /* LoopNest 2 */
                for (unsigned char i_25 = 1; i_25 < 9; i_25 += 3) 
                {
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        {
                            var_53 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_7 [(unsigned char)5] [i_26] [i_0 - 1] [i_0])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [2LL] [i_0 + 2] [i_0 + 1] [i_0])))))));
                            var_54 = ((/* implicit */long long int) min((var_54), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_51 [i_20 + 3] [i_24 - 2]))) ? (arr_51 [i_20 + 3] [i_24 - 4]) : (((((/* implicit */_Bool) arr_51 [i_20 - 1] [i_24 + 2])) ? (arr_51 [i_20 + 4] [i_24 + 1]) : (arr_51 [i_20 - 2] [i_24 - 3]))))))));
                        }
                    } 
                } 
                var_55 = ((/* implicit */int) min((var_55), (((/* implicit */int) max((var_5), (((((/* implicit */_Bool) arr_54 [i_0 + 1] [i_24 + 1])) && (((/* implicit */_Bool) arr_10 [i_0] [i_24 + 1] [i_24 - 3] [i_24] [i_24 - 3] [i_20 - 2] [i_24 - 3])))))))));
            }
            var_56 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_0 + 2])) ? (((/* implicit */int) arr_56 [i_0 - 1])) : (((/* implicit */int) var_3))))) ? ((-(((/* implicit */int) arr_56 [(signed char)2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_20])))))));
        }
        var_57 = ((/* implicit */long long int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]);
        /* LoopSeq 3 */
        for (long long int i_27 = 0; i_27 < 12; i_27 += 3) 
        {
            arr_79 [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) max((arr_13 [i_0] [1U]), (((/* implicit */unsigned char) var_5))))) ? (((var_0) | (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_59 [i_0] [i_0])))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)61664)) && (((/* implicit */_Bool) (signed char)-32)))))));
            /* LoopNest 3 */
            for (unsigned int i_28 = 0; i_28 < 12; i_28 += 3) 
            {
                for (long long int i_29 = 0; i_29 < 12; i_29 += 3) 
                {
                    for (unsigned short i_30 = 0; i_30 < 12; i_30 += 4) 
                    {
                        {
                            var_58 -= ((/* implicit */_Bool) ((unsigned long long int) var_9));
                            var_59 = ((/* implicit */long long int) var_4);
                            var_60 = ((/* implicit */short) ((unsigned char) ((unsigned char) arr_71 [i_0 + 2] [i_27] [(signed char)0])));
                        }
                    } 
                } 
            } 
            var_61 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)165)) || (((/* implicit */_Bool) arr_54 [i_0 + 2] [i_0 - 1]))));
        }
        for (unsigned long long int i_31 = 0; i_31 < 12; i_31 += 4) 
        {
            arr_90 [i_31] [i_31] &= (~(((unsigned int) arr_21 [i_31] [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 - 1])));
            var_62 = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) && (var_12)))), (arr_34 [i_0])));
            var_63 = arr_16 [i_31] [3LL] [i_31] [i_0 + 2] [i_0];
            /* LoopSeq 2 */
            for (short i_32 = 0; i_32 < 12; i_32 += 4) /* same iter space */
            {
                var_64 = ((/* implicit */unsigned int) max((var_64), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_86 [i_0] [i_0] [i_0 + 2] [8ULL] [i_31] [i_31] [2U])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_82 [i_0 + 2] [i_32] [i_32] [i_32])))))) ? (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_78 [i_32] [i_0] [i_32])))))) : (((/* implicit */int) arr_53 [i_31] [i_31])))))));
                arr_93 [i_0] = var_12;
            }
            for (short i_33 = 0; i_33 < 12; i_33 += 4) /* same iter space */
            {
                arr_96 [i_0] [i_31] = ((/* implicit */_Bool) ((long long int) arr_12 [i_0]));
                var_65 = ((/* implicit */long long int) min((var_65), (((/* implicit */long long int) ((((((/* implicit */int) arr_72 [i_33] [i_0 - 1] [i_33] [i_31] [i_0 - 1])) != (((/* implicit */int) arr_72 [i_31] [i_31] [i_0 - 1] [i_0 + 2] [i_0 + 2])))) ? (((int) var_13)) : (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (arr_88 [i_0 - 1] [i_0 - 1] [i_0 + 2])))))))));
                var_66 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : ((((!(arr_49 [i_0] [i_31]))) ? (max((((/* implicit */long long int) var_7)), (arr_2 [i_0] [i_31] [i_33]))) : (((((/* implicit */_Bool) var_7)) ? (arr_2 [i_0 + 1] [i_31] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
                var_67 = ((/* implicit */unsigned long long int) max((var_67), (((unsigned long long int) ((_Bool) var_8)))));
                var_68 = ((/* implicit */unsigned long long int) var_13);
            }
            var_69 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_78 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) var_4)) ? (arr_68 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3))))))) ? (arr_43 [i_0 + 1] [i_0 + 2] [i_31] [i_31] [i_31]) : (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) var_8))))))));
        }
        for (unsigned int i_34 = 2; i_34 < 10; i_34 += 4) 
        {
            var_70 = ((/* implicit */short) min((var_70), (((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0 + 2] [i_0] [i_0] [i_0] [i_0 + 2] [i_0 - 1]))))))));
            var_71 = ((/* implicit */signed char) min((var_71), (((/* implicit */signed char) arr_29 [i_34] [i_34 + 2] [i_0 - 1] [i_34 + 1] [i_0 - 1] [i_34]))));
            var_72 ^= ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)3872))))))));
            var_73 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_92 [i_0] [i_0 + 1] [i_0]))))) ? (((/* implicit */int) ((unsigned char) arr_22 [i_0] [i_0 - 1] [i_34 - 1] [i_34 + 1] [i_34 + 1] [(_Bool)1] [i_0]))) : (((((/* implicit */_Bool) arr_92 [i_0] [i_34 + 1] [i_0])) ? (((/* implicit */int) arr_92 [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_92 [i_0] [i_0 + 1] [i_0]))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_35 = 0; i_35 < 16; i_35 += 4) 
    {
        var_74 = ((/* implicit */short) max((var_74), (((/* implicit */short) ((long long int) arr_101 [i_35])))));
        var_75 -= ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
    }
    var_76 *= ((/* implicit */unsigned long long int) var_2);
}
