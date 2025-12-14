/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164013
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) min((var_12), (((((/* implicit */int) var_3)) <= (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        var_13 -= ((/* implicit */signed char) (_Bool)1);
        var_14 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (var_11))))));
        var_16 = ((/* implicit */unsigned long long int) ((signed char) (+(((/* implicit */int) ((_Bool) var_3))))));
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((((/* implicit */_Bool) var_10)) ? ((+(((/* implicit */int) var_2)))) : (((((/* implicit */int) var_0)) << (((arr_5 [i_1]) - (16930909162061530901ULL))))))))))));
        var_18 = ((/* implicit */unsigned int) (!((_Bool)1)));
        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_1] [i_1])))), (((/* implicit */int) max((var_6), (((/* implicit */signed char) arr_1 [i_1] [i_1])))))))) ? (((((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (var_11) : (var_7)))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1])))));
    }
    for (int i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
    {
        var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_2] [i_2])) : (max((var_11), (((/* implicit */int) var_8))))))) ? ((+(((/* implicit */int) max((var_9), (((/* implicit */unsigned char) var_5))))))) : (((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))))));
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (short i_4 = 2; i_4 < 17; i_4 += 1) 
            {
                var_22 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (13495213731439767ULL))))));
                var_23 += ((/* implicit */signed char) arr_14 [i_3] [i_4 + 1] [i_4 + 1]);
            }
            /* vectorizable */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5] [i_5]))) : (((unsigned int) arr_11 [i_3] [i_3]))));
                var_25 = ((/* implicit */_Bool) ((var_11) ^ (((/* implicit */int) var_9))));
                var_26 = ((/* implicit */signed char) (((_Bool)1) ? (var_11) : (((/* implicit */int) arr_9 [i_2] [i_3]))));
                var_27 = ((unsigned char) (~(((/* implicit */int) var_4))));
            }
            for (int i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) (unsigned char)107);
                        var_29 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_8] [i_7] [i_3] [i_2])) ? (arr_8 [i_7] [i_8]) : (((/* implicit */int) arr_7 [i_2]))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 1; i_9 < 19; i_9 += 3) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_24 [i_9] [i_9 + 1] [i_9 - 1] [i_9] [i_9] [i_9 - 1] [i_9 + 1])) < (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))));
                        var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_9 + 1] [i_3])))))));
                    }
                    for (unsigned char i_10 = 1; i_10 < 19; i_10 += 3) /* same iter space */
                    {
                        var_32 += ((/* implicit */unsigned int) (!(((((/* implicit */int) var_0)) != (var_11)))));
                        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2] [i_2])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                        var_34 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_10 - 1] [i_10 - 1] [i_10 - 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_25 [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10] [i_10 - 1]))));
                    }
                    var_35 = ((/* implicit */_Bool) ((signed char) var_7));
                    var_36 = var_3;
                }
                var_37 = ((/* implicit */unsigned char) var_5);
                var_38 |= ((/* implicit */unsigned long long int) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_17 [i_2] [i_2] [i_3] [i_3]))))));
                var_39 = ((/* implicit */unsigned char) arr_11 [i_2] [i_2]);
            }
            var_40 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)72)) | (((var_5) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max((var_3), (var_4))))))));
            var_41 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (arr_8 [i_2] [i_3]))) + (arr_8 [i_2] [i_3])));
            var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_9), (var_3)))))))));
        }
        /* vectorizable */
        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) /* same iter space */
        {
            var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_30 [i_2] [i_2] [i_2])) : (((((/* implicit */int) var_3)) & (var_7)))));
            var_44 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
            var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_28 [i_2] [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_28 [i_11] [i_11] [i_2] [i_2] [i_2]))));
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (int i_13 = 1; i_13 < 19; i_13 += 4) 
                {
                    {
                        var_46 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) % (var_10)));
                        var_47 = ((/* implicit */unsigned short) var_8);
                        var_48 = ((/* implicit */int) var_10);
                        var_49 = ((/* implicit */unsigned char) max((var_49), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */int) var_9)))))))));
                        var_50 = ((/* implicit */long long int) max((var_50), (((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_2] [i_2] [i_2] [i_2] [i_12] [i_13 + 1] [i_2])) >= (((/* implicit */int) arr_27 [i_2] [i_11] [i_12] [i_11] [i_13] [i_13 + 1] [i_12])))))));
                    }
                } 
            } 
            var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (var_1)));
        }
    }
    /* LoopSeq 2 */
    for (unsigned char i_14 = 2; i_14 < 22; i_14 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_16 = 2; i_16 < 23; i_16 += 3) 
            {
                /* LoopSeq 2 */
                for (signed char i_17 = 0; i_17 < 25; i_17 += 4) 
                {
                    var_52 = ((/* implicit */unsigned char) max((var_52), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (arr_49 [i_14] [i_14 - 2] [i_16 - 2] [i_16 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
                    var_53 = ((/* implicit */unsigned int) max((var_53), (((/* implicit */unsigned int) (_Bool)1))));
                }
                for (signed char i_18 = 1; i_18 < 23; i_18 += 2) 
                {
                    var_54 = ((((/* implicit */_Bool) arr_49 [i_18 + 1] [i_15] [i_16 + 1] [i_16 + 1])) ? (((/* implicit */int) arr_47 [i_18 + 2] [i_18] [i_18 + 2] [i_18 - 1])) : (((/* implicit */int) var_3)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_19 = 1; i_19 < 24; i_19 += 3) 
                    {
                        var_55 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))));
                        var_56 = ((/* implicit */int) var_0);
                        var_57 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-59))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_20 = 2; i_20 < 23; i_20 += 3) 
                    {
                        var_58 = ((signed char) arr_45 [i_15] [i_20 - 2] [i_20]);
                        var_59 = ((/* implicit */unsigned int) ((arr_55 [i_20 - 2] [i_15] [i_20 - 1] [i_20] [i_20 - 1] [i_20] [i_20]) ? (((/* implicit */int) arr_55 [i_20 - 1] [i_15] [i_20] [i_20 + 1] [i_20 + 1] [i_20 - 1] [i_20])) : (((/* implicit */int) arr_55 [i_20 + 1] [i_15] [i_20 + 1] [i_20 + 1] [i_20] [i_20] [i_20]))));
                        var_60 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) > (var_10))))));
                    }
                    for (unsigned short i_21 = 4; i_21 < 21; i_21 += 4) 
                    {
                        var_61 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) (unsigned short)65524)))));
                        var_62 -= ((/* implicit */unsigned int) 1768480067);
                        var_63 = ((/* implicit */unsigned char) ((arr_50 [i_15]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_50 [i_15]))));
                        var_64 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (arr_49 [i_18 - 1] [i_18 - 1] [i_21] [i_21 + 1]) : (arr_49 [i_18 + 2] [i_18 - 1] [i_18] [i_21 + 2])));
                        var_65 = ((/* implicit */unsigned int) ((signed char) var_1));
                    }
                }
                var_66 = ((/* implicit */signed char) (_Bool)1);
                var_67 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))));
                var_68 = ((/* implicit */int) ((((/* implicit */_Bool) arr_56 [i_14 - 1] [i_14] [i_15] [i_14] [i_14 - 1] [i_16 + 2] [i_16])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) + (((/* implicit */int) arr_47 [i_14] [i_14 - 2] [i_15] [i_16]))))) : (var_10)));
            }
            var_69 += ((/* implicit */unsigned long long int) arr_59 [i_14] [i_14] [i_14] [i_14] [i_14 + 1]);
            var_70 = var_3;
            var_71 = ((/* implicit */int) var_6);
            var_72 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) -516927827))) ? (((/* implicit */int) arr_59 [i_14] [i_14 + 3] [i_15] [i_14] [i_15])) : (((/* implicit */int) var_3))));
        }
        var_73 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_50 [i_14])), (arr_58 [i_14 - 1] [i_14 + 1] [i_14] [i_14 + 1])));
        var_74 = ((/* implicit */int) var_9);
    }
    for (unsigned char i_22 = 3; i_22 < 17; i_22 += 4) 
    {
        var_75 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((2026227426U), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_8), (var_3))))) : (max((((/* implicit */unsigned int) arr_55 [i_22 - 2] [16LL] [i_22] [i_22 - 3] [i_22 - 1] [i_22 - 3] [i_22])), (arr_56 [i_22 + 1] [i_22] [(_Bool)1] [i_22 + 1] [i_22 + 1] [i_22] [i_22 - 2])))));
        var_76 = var_0;
        var_77 = ((/* implicit */signed char) (-(max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [10ULL]))) - (arr_49 [i_22] [i_22 + 1] [i_22 - 1] [i_22 - 3]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9)))))))));
        var_78 = (~(var_7));
        var_79 = ((/* implicit */unsigned short) max((var_79), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) 3690396616972340417ULL)) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) (unsigned char)128)))), ((+(var_7))))))));
    }
}
