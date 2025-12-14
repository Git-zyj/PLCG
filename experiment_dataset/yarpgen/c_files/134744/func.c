/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134744
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
    var_19 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37781))) : (arr_3 [i_0] [i_0] [(short)3]))))));
            var_21 &= var_16;
        }
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            var_22 = ((/* implicit */unsigned short) (!((_Bool)0)));
            var_23 = ((/* implicit */unsigned int) ((var_9) ? (((/* implicit */unsigned long long int) var_3)) : (arr_3 [i_0] [i_2] [i_0])));
        }
        for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 4) 
        {
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) arr_2 [(signed char)8]))) == (((long long int) arr_5 [i_0] [i_3]))));
            /* LoopSeq 3 */
            for (short i_4 = 1; i_4 < 10; i_4 += 3) 
            {
                var_25 = ((((/* implicit */int) (!((_Bool)1)))) << (((arr_1 [(unsigned char)6]) - (7757325492126748773ULL))));
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) var_16))));
            }
            for (unsigned short i_5 = 3; i_5 < 10; i_5 += 2) 
            {
                /* LoopSeq 3 */
                for (int i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        var_27 = arr_4 [i_3 - 1];
                        var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -1505848056))));
                        var_29 = ((/* implicit */long long int) var_9);
                        var_30 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) (_Bool)1)) - (8387584))));
                    }
                    var_31 &= ((/* implicit */unsigned int) (signed char)33);
                    var_32 = ((/* implicit */unsigned char) 8387568);
                }
                for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    var_33 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_5 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_12 [i_8] [i_5 - 2] [3] [i_0])));
                    var_34 = ((/* implicit */unsigned long long int) ((short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_20 [i_0] [i_3 + 1] [0] [(unsigned char)2] [(unsigned short)4]))));
                }
                for (unsigned short i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    var_35 = ((/* implicit */short) (unsigned short)9098);
                    var_36 = ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_23 [i_3 - 1] [i_5] [i_5 - 3] [(unsigned char)9])));
                }
                var_37 ^= ((/* implicit */_Bool) arr_14 [i_0] [(unsigned char)10] [i_3] [(unsigned short)6]);
                /* LoopSeq 1 */
                for (int i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        var_38 = ((/* implicit */unsigned short) arr_34 [i_0] [i_3 + 2] [i_5 + 1] [1ULL] [i_5 + 1] [i_5]);
                        var_39 = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)28003));
                        var_40 = ((/* implicit */long long int) ((unsigned int) arr_8 [i_3 + 1]));
                    }
                    var_41 -= ((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_5] [i_0] [i_5] [i_3 + 3])) - (((/* implicit */int) arr_29 [(signed char)5] [i_3 + 3] [i_5 + 2] [i_3 + 2]))));
                }
            }
            for (unsigned long long int i_12 = 1; i_12 < 8; i_12 += 2) 
            {
                var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_0])) ? (((/* implicit */int) arr_18 [i_0] [i_3] [i_12 + 2] [i_12 + 3])) : (((/* implicit */int) (signed char)-115))));
                var_43 *= ((/* implicit */unsigned long long int) arr_31 [i_0]);
            }
            var_44 = ((/* implicit */unsigned int) var_13);
            /* LoopSeq 2 */
            for (long long int i_13 = 0; i_13 < 12; i_13 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 12; i_14 += 3) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 1) 
                    {
                        {
                            var_45 = ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) var_6)))));
                            var_46 = ((/* implicit */unsigned short) arr_21 [i_3]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_16 = 1; i_16 < 10; i_16 += 3) 
                {
                    var_47 = ((/* implicit */long long int) min((var_47), (((arr_14 [i_3 - 1] [i_3 - 1] [i_16 + 1] [i_16 - 1]) & (((/* implicit */long long int) ((/* implicit */int) var_16)))))));
                    /* LoopSeq 2 */
                    for (signed char i_17 = 0; i_17 < 12; i_17 += 2) 
                    {
                        var_48 = ((/* implicit */signed char) var_10);
                        var_49 = ((/* implicit */short) min((var_49), (((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) | (var_3))) < (((/* implicit */unsigned int) (~(((/* implicit */int) arr_43 [i_0] [i_3 + 3] [i_13] [i_17]))))))))));
                        var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (8794149404642937310ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) (unsigned char)5)))))));
                        var_51 = ((/* implicit */signed char) max((var_51), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) arr_19 [i_0] [i_0] [i_13] [i_16 + 1] [(short)11] [i_17])) < (((/* implicit */int) var_5))))))))));
                        var_52 = ((/* implicit */_Bool) var_11);
                    }
                    for (int i_18 = 0; i_18 < 12; i_18 += 2) 
                    {
                        var_53 = var_13;
                        var_54 = ((/* implicit */signed char) ((_Bool) var_8));
                        var_55 = ((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) (_Bool)1))));
                    }
                }
                for (unsigned int i_19 = 0; i_19 < 12; i_19 += 2) 
                {
                    var_56 = ((/* implicit */short) max((var_56), (((/* implicit */short) var_3))));
                    var_57 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (arr_47 [i_3 - 1] [i_3] [6ULL] [(short)2] [i_3 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
                var_58 ^= ((/* implicit */unsigned int) arr_47 [i_0] [i_3 + 1] [i_3 + 2] [i_13] [i_13]);
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 12; i_20 += 4) 
                {
                    for (int i_21 = 0; i_21 < 12; i_21 += 3) 
                    {
                        {
                            var_59 = ((/* implicit */unsigned char) max((var_59), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-11)) || (((_Bool) var_18)))))));
                            var_60 = ((/* implicit */_Bool) ((int) var_1));
                            var_61 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)31)) | (((((/* implicit */_Bool) arr_23 [i_0] [i_3 + 3] [i_13] [6ULL])) ? (-1103038140) : (((/* implicit */int) arr_52 [i_21] [i_20] [10LL] [i_3] [i_0]))))));
                        }
                    } 
                } 
            }
            for (long long int i_22 = 0; i_22 < 12; i_22 += 3) /* same iter space */
            {
                var_62 *= ((/* implicit */unsigned int) arr_25 [(unsigned char)0] [i_22]);
                /* LoopSeq 1 */
                for (unsigned int i_23 = 0; i_23 < 12; i_23 += 3) 
                {
                    var_63 = (-(((/* implicit */int) var_16)));
                    var_64 = ((/* implicit */long long int) arr_36 [8LL]);
                    var_65 = ((/* implicit */int) var_0);
                    /* LoopSeq 3 */
                    for (signed char i_24 = 0; i_24 < 12; i_24 += 3) 
                    {
                        var_66 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) 3782538315764302860LL)) || (((/* implicit */_Bool) var_17)))));
                        var_67 = (!(((/* implicit */_Bool) 14159565918803149306ULL)));
                    }
                    for (int i_25 = 0; i_25 < 12; i_25 += 3) 
                    {
                        var_68 = ((/* implicit */unsigned char) min((var_68), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_39 [i_25])) ? (((-3361023106150493677LL) - (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_0] [i_3] [4ULL] [2ULL]))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                        var_69 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-13))));
                    }
                    for (unsigned long long int i_26 = 2; i_26 < 8; i_26 += 3) 
                    {
                        var_70 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)31)) != ((+(((/* implicit */int) var_13))))));
                        var_71 = ((/* implicit */unsigned char) var_12);
                        var_72 = ((/* implicit */short) (-(var_7)));
                        var_73 = ((/* implicit */_Bool) max((var_73), (((/* implicit */_Bool) 6141326468498678132LL))));
                    }
                }
                var_74 = ((((((/* implicit */int) var_2)) <= (((/* implicit */int) arr_33 [(signed char)3] [i_0] [i_0] [i_0] [i_3 + 1] [i_0] [6U])))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)));
                var_75 = ((/* implicit */short) max((var_75), (((/* implicit */short) ((((long long int) 2624178951U)) != (((/* implicit */long long int) var_15)))))));
            }
        }
        for (int i_27 = 1; i_27 < 9; i_27 += 2) 
        {
            var_76 = ((/* implicit */int) (unsigned short)42842);
            /* LoopNest 3 */
            for (int i_28 = 0; i_28 < 12; i_28 += 1) 
            {
                for (signed char i_29 = 0; i_29 < 12; i_29 += 4) 
                {
                    for (int i_30 = 4; i_30 < 11; i_30 += 3) 
                    {
                        {
                            var_77 &= ((/* implicit */long long int) ((unsigned long long int) ((var_7) ^ (((/* implicit */int) arr_22 [i_30] [i_30 - 3] [(unsigned short)8] [i_28] [i_27 + 3] [i_0])))));
                            var_78 &= ((/* implicit */short) var_8);
                        }
                    } 
                } 
            } 
            var_79 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (_Bool)1)))) - ((-(((/* implicit */int) var_5))))));
        }
        var_80 = ((/* implicit */int) (!(((/* implicit */_Bool) 397892558099496472ULL))));
    }
    var_81 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) : (((var_14) + (((/* implicit */unsigned int) ((/* implicit */int) var_18))))))))));
}
