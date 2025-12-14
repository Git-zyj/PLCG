/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119393
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
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (!((!((!(((/* implicit */_Bool) arr_3 [(short)0] [i_1 - 2] [i_0]))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_14 [i_2] [i_3] [i_1 + 3] [i_2] = ((/* implicit */short) (!((!((!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [6]))))))));
                                var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_2] [i_2] [3ULL])), (min((1587508639), (-1587508640))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_5 = 1; i_5 < 19; i_5 += 2) 
    {
        arr_18 [i_5] = -1587508639;
        arr_19 [i_5] = ((/* implicit */unsigned char) ((int) arr_16 [i_5 + 1]));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (unsigned short)56044))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (!(((/* implicit */_Bool) 10068492764249453152ULL)))))));
    }
    for (unsigned char i_6 = 3; i_6 < 22; i_6 += 3) 
    {
        arr_22 [(unsigned short)15] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
        var_21 = ((/* implicit */int) arr_20 [i_6]);
        /* LoopSeq 4 */
        for (unsigned short i_7 = 3; i_7 < 21; i_7 += 2) 
        {
            arr_26 [i_7] = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)1372)) ^ (((/* implicit */int) arr_23 [i_7] [i_7]))))), (((((/* implicit */_Bool) 227830966)) ? (((/* implicit */long long int) -1587508639)) : (arr_24 [i_6] [(unsigned char)8] [i_7]))))) * (((/* implicit */long long int) -1587508640))));
            arr_27 [(short)4] [i_7] = ((/* implicit */_Bool) (unsigned char)245);
        }
        /* vectorizable */
        for (short i_8 = 2; i_8 < 20; i_8 += 3) 
        {
            arr_30 [i_6] [i_6] [i_6 - 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1LL))));
            arr_31 [i_8] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)31))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1)))))));
            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)465)))))));
            /* LoopSeq 2 */
            for (short i_9 = 1; i_9 < 21; i_9 += 4) 
            {
                arr_36 [14] [10U] [i_9] &= ((/* implicit */unsigned short) ((short) arr_35 [i_6 + 1] [i_8 + 2] [i_9 + 2]));
                /* LoopSeq 1 */
                for (unsigned char i_10 = 0; i_10 < 23; i_10 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_11 = 1; i_11 < 22; i_11 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))));
                        arr_42 [19ULL] [i_11 + 1] [i_9] [i_9] [i_11] = ((/* implicit */signed char) var_0);
                        var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1372))) | (322850092233831848ULL)))) ? (((/* implicit */unsigned int) var_15)) : (4273248905U)));
                        var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 23; i_12 += 2) 
                    {
                        arr_46 [i_6] [i_9] [i_8 - 2] [i_9 + 1] [i_10] [(short)18] [i_10] = ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) arr_29 [i_6] [(short)7])))) * (((/* implicit */int) ((short) -852221078)))));
                        arr_47 [i_12] [i_9] [i_9] [i_9] [13ULL] = ((/* implicit */short) (-(18446744073709551591ULL)));
                    }
                    arr_48 [(unsigned short)16] [(short)6] [i_9] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_28 [i_9])))) ? (5763962853851576897ULL) : (((/* implicit */unsigned long long int) -227830959))));
                    var_26 += ((/* implicit */unsigned long long int) ((((986297346U) * (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) * (((/* implicit */unsigned int) var_0))));
                }
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 23; i_13 += 3) 
                {
                    for (signed char i_14 = 2; i_14 < 21; i_14 += 2) 
                    {
                        {
                            arr_55 [i_6] [i_14] &= ((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)-13)))) ? (8378251309460098478ULL) : (((arr_21 [i_13]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1741)))))));
                            var_27 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_43 [i_9 + 2] [(_Bool)1] [12U] [i_9 + 2] [i_9 + 2] [i_9 + 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_6] [i_9] [i_14 - 1]))))) : (((((/* implicit */int) (short)-9323)) - (((/* implicit */int) arr_25 [(_Bool)1] [(_Bool)1] [i_14 - 1]))))));
                            var_28 = ((/* implicit */long long int) ((unsigned char) -101551950));
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (!((_Bool)0))))));
                            arr_56 [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_54 [i_6 - 2]))));
                        }
                    } 
                } 
            }
            for (int i_15 = 0; i_15 < 23; i_15 += 3) 
            {
                var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)26286))));
                var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) 10))));
                /* LoopSeq 3 */
                for (signed char i_16 = 1; i_16 < 20; i_16 += 4) /* same iter space */
                {
                    arr_63 [i_6] [i_16] [i_16] [22LL] [i_6 - 1] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) <= (((/* implicit */int) arr_33 [i_6 + 1]))));
                    arr_64 [(_Bool)1] [i_8] [i_16] [i_16 + 1] = ((((/* implicit */int) (!(((/* implicit */_Bool) (short)21425))))) | (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)1397)) : (((/* implicit */int) var_2)))));
                    var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)19806))));
                }
                for (signed char i_17 = 1; i_17 < 20; i_17 += 4) /* same iter space */
                {
                    var_33 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_6] [i_6] [(unsigned short)0]))) * (4153526672U)))));
                    var_34 += ((/* implicit */signed char) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) | (var_10))));
                }
                for (signed char i_18 = 1; i_18 < 20; i_18 += 4) /* same iter space */
                {
                    arr_70 [(_Bool)1] [i_6 - 3] [i_18] [i_6] = ((1587508639) | (((/* implicit */int) (unsigned short)0)));
                    var_35 += ((/* implicit */short) ((((/* implicit */_Bool) arr_60 [i_6] [i_6] [i_6 - 2] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (4153526672U)));
                }
                arr_71 [i_6] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_20 [i_6]))))));
                arr_72 [(short)20] = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)47)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [(short)11] [i_8 - 1]))) : (arr_69 [i_6] [i_6] [20] [i_6]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
            }
        }
        /* vectorizable */
        for (short i_19 = 0; i_19 < 23; i_19 += 3) 
        {
            arr_76 [(short)2] &= ((/* implicit */unsigned short) ((int) -1587508639));
            var_36 ^= ((/* implicit */unsigned char) arr_69 [i_6 - 2] [i_6] [12ULL] [i_19]);
            var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)-10511)) : (((/* implicit */int) (unsigned char)69))))) ? (((/* implicit */int) arr_29 [22LL] [22LL])) : (((((/* implicit */int) (_Bool)1)) >> (((var_7) - (7652836778713634993ULL)))))));
            arr_77 [i_19] [i_19] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)10511))));
        }
        for (unsigned short i_20 = 0; i_20 < 23; i_20 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_21 = 0; i_21 < 23; i_21 += 2) 
            {
                for (long long int i_22 = 0; i_22 < 23; i_22 += 4) 
                {
                    {
                        var_38 = ((/* implicit */unsigned short) (signed char)24);
                        var_39 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) var_8))))))));
                        arr_87 [(unsigned char)10] [i_22] [i_22] [i_22] [(unsigned char)20] [i_22] &= ((/* implicit */long long int) var_6);
                        var_40 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_9)) | (((((/* implicit */_Bool) arr_75 [i_22] [2U] [i_21])) ? (arr_75 [i_22] [i_20] [i_22]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                    }
                } 
            } 
            var_41 *= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (!(arr_65 [i_6 - 2] [i_6 - 2] [i_6 - 2])))) | (((/* implicit */int) (unsigned short)65535))))) | (((arr_43 [i_6] [i_6] [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 + 1]) + (((/* implicit */long long int) ((int) var_6)))))));
            arr_88 [i_20] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((((/* implicit */int) (short)4659)) / (arr_62 [i_6] [22LL] [(short)4] [i_20]))))))));
        }
    }
}
