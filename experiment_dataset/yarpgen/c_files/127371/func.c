/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127371
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
    var_13 |= ((/* implicit */unsigned char) max((min((1788433787), (-1788433787))), ((-(((/* implicit */int) ((82639368U) != (((/* implicit */unsigned int) -1788433788)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)20711);
        var_14 = ((/* implicit */long long int) arr_0 [i_0]);
        var_15 ^= ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (short i_1 = 4; i_1 < 21; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (-((-(max((((/* implicit */unsigned long long int) (unsigned short)46725)), (11692065290570041822ULL))))))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        arr_12 [i_4] [i_2] [i_3] [i_4] [i_2] [i_3] = ((/* implicit */signed char) min((arr_5 [i_3] [0ULL] [i_1]), (arr_5 [i_1 - 1] [i_2] [i_4])));
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_4])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (short)0))))))) ? ((-((~(var_1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_9 [i_1 + 3] [i_2] [i_3] [i_3] [i_2])))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) % (var_7))))))));
                        /* LoopSeq 3 */
                        for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            arr_16 [15ULL] [i_4] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) var_1);
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_5))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) max(((-(arr_6 [i_1] [i_2] [i_3]))), (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_17 [i_1] [i_2])) >= (arr_3 [i_1 + 3])))))))));
                            arr_19 [i_4] [i_2] [i_4] [i_6] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_4] [i_4]))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_10 [i_4] [i_4] [i_3] [(_Bool)1] [6U] [i_1])))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (min((11692065290570041822ULL), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) arr_11 [22LL]))))));
                            var_20 ^= ((/* implicit */signed char) arr_15 [i_3] [(unsigned char)4] [i_3]);
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (-(((((/* implicit */int) max(((short)0), (arr_4 [i_2])))) | (((/* implicit */int) (_Bool)0)))))))));
                            arr_20 [i_4] = ((int) var_5);
                        }
                        for (int i_7 = 3; i_7 < 22; i_7 += 4) 
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) arr_15 [i_4] [i_2] [i_4])) : (((/* implicit */int) arr_15 [i_4] [i_2] [i_2]))))) / (max((6754678783139509793ULL), (((/* implicit */unsigned long long int) 1788433786))))));
                            var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 16859856783280499317ULL)) ? (8239102724538138654ULL) : (16859856783280499317ULL))) * (((/* implicit */unsigned long long int) (((-(var_1))) % (((/* implicit */long long int) ((var_8) ? (((/* implicit */int) var_0)) : (-1788433788)))))))));
                            arr_23 [i_4] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) (short)0)) > (((/* implicit */int) (short)(-32767 - 1))))))) != (((/* implicit */int) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) -1788433791))))))))));
                            var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 1788433787)) || ((_Bool)1)));
                        }
                    }
                    for (short i_8 = 1; i_8 < 22; i_8 += 2) 
                    {
                        var_25 = ((/* implicit */short) (((-((-(7518853820069147715LL))))) << (((var_10) - (1037804451U)))));
                        var_26 = ((/* implicit */int) arr_8 [i_1] [i_1] [i_3] [i_3]);
                    }
                    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */int) ((unsigned short) (short)0))) & (((/* implicit */int) (short)0)))))));
                        var_28 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((arr_9 [i_9] [i_9] [i_2] [i_2] [12U]) ? (((/* implicit */unsigned long long int) var_10)) : (arr_8 [(unsigned short)2] [(unsigned short)2] [i_1 + 1] [(unsigned short)2])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) % (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [(short)0] [i_1] [21ULL] [(_Bool)1]))) > (var_10))))))));
                        arr_32 [20LL] [i_1] [i_1] [i_3] [i_3] [i_9] |= max((max((((/* implicit */long long int) (signed char)-119)), ((-(var_1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_27 [i_9] [i_1] [i_9] [i_9] [(signed char)4] [i_1]))))) || (((/* implicit */_Bool) (unsigned short)17570))))));
                    }
                    for (long long int i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        var_29 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) -7518853820069147715LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_1] [7LL] [i_1])))))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) != (var_11))) ? (((int) arr_15 [i_3] [i_3] [i_10])) : (((/* implicit */int) arr_22 [i_1 - 2] [i_1] [i_1 - 1])))) : (((/* implicit */int) (short)0))));
                        var_30 ^= ((/* implicit */signed char) 1016177599);
                        arr_36 [i_10] [i_2] [i_2] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) << (((var_11) - (18294363173208110893ULL)))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        var_31 = 17532891592291356352ULL;
                        arr_39 [i_11] [i_3] = ((/* implicit */unsigned int) arr_8 [i_1] [i_1] [i_1] [i_1]);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_12 = 0; i_12 < 24; i_12 += 2) 
                        {
                            var_32 *= ((int) ((signed char) (_Bool)1));
                            arr_44 [i_1] [(signed char)1] [i_2] [i_2] [i_11] [(unsigned char)20] = ((/* implicit */signed char) 6754678783139509794ULL);
                            var_33 = ((/* implicit */unsigned char) max((var_33), (((unsigned char) -1788433787))));
                        }
                        for (int i_13 = 0; i_13 < 24; i_13 += 4) 
                        {
                            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((signed char) ((signed char) ((((/* implicit */_Bool) (signed char)-76)) || (((/* implicit */_Bool) arr_35 [(signed char)11] [i_3] [i_2])))))))));
                            var_35 |= ((/* implicit */unsigned char) min((((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 3]))))), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_28 [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_31 [i_2] [i_11] [0ULL] [i_2] [i_2] [0ULL])))))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_36 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1 - 2] [i_1 - 4] [i_1 - 2])) ? (((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 2] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 3] [i_1 - 2] [i_1 + 2]))))));
                            arr_51 [(signed char)2] [i_2] [(signed char)2] [i_2] [i_2] [(unsigned char)12] = ((/* implicit */unsigned long long int) (+((+(((unsigned int) var_1))))));
                            var_37 = ((/* implicit */short) (((-(((((/* implicit */_Bool) (short)0)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47966))))))) >= (arr_18 [i_1 - 4] [14LL])));
                        }
                    }
                    arr_52 [i_2] [i_2] [(short)19] [15U] = ((/* implicit */signed char) min(((-(-7385730495531656813LL))), (((/* implicit */long long int) var_2))));
                    var_38 = ((/* implicit */short) (-(((/* implicit */int) arr_33 [i_1] [i_2] [i_3] [i_3]))));
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 4; i_15 < 23; i_15 += 3) 
                    {
                        for (long long int i_16 = 0; i_16 < 24; i_16 += 3) 
                        {
                            {
                                var_39 *= ((/* implicit */_Bool) 6754678783139509794ULL);
                                var_40 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_1] [i_3] [i_1] [i_3] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-87))) | (arr_10 [i_3] [i_1] [i_1] [i_1] [6LL] [i_3])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_17 = 2; i_17 < 22; i_17 += 2) 
        {
            var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) ((unsigned int) var_4)))));
            arr_61 [i_17] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)208))) ^ ((~(((((/* implicit */_Bool) arr_54 [i_1 - 3] [i_17 + 1])) ? (((/* implicit */long long int) var_10)) : (arr_40 [10LL] [i_17] [10LL] [10LL] [i_17])))))));
            /* LoopSeq 3 */
            for (unsigned int i_18 = 0; i_18 < 24; i_18 += 3) 
            {
                var_42 = ((/* implicit */long long int) ((unsigned long long int) (-((-(((/* implicit */int) (short)6607)))))));
                var_43 = arr_21 [(short)2] [i_17 - 2] [(short)22] [(short)23] [i_17 - 2];
                arr_65 [i_1] [i_18] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_12), (((/* implicit */short) (signed char)75))))) / (((/* implicit */int) arr_15 [i_18] [i_17] [i_18]))))) ? (max((((((/* implicit */_Bool) arr_15 [i_18] [(signed char)20] [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_18] [(short)22] [i_18] [i_18] [i_18] [i_17 + 1]))) : (arr_54 [4U] [i_18]))), (((unsigned int) (unsigned short)1)))) : (var_10)));
            }
            for (signed char i_19 = 2; i_19 < 21; i_19 += 2) 
            {
                arr_70 [i_1] [(unsigned char)2] = ((/* implicit */unsigned int) ((arr_40 [i_17] [i_17] [i_1] [i_1] [i_17]) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) -1)) : (14200870560701299404ULL))))))))));
                var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_10)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((/* implicit */int) arr_57 [i_19] [i_19] [i_19] [i_19] [i_19]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-75))) : (4243256359U)))) : ((~(-5041254009306926687LL))))) : (((/* implicit */long long int) (~(arr_17 [i_19] [i_1]))))));
                arr_71 [i_1] [i_1] = ((/* implicit */int) var_11);
            }
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                arr_76 [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_10 [i_17] [12] [i_1] [i_1 - 3] [i_1] [i_1 - 4])) && (((/* implicit */_Bool) 6754678783139509794ULL)))) ? (arr_10 [i_17] [(short)6] [i_1] [i_1 + 2] [22] [i_1 + 2]) : (min((arr_10 [i_17] [(signed char)14] [i_1] [i_1 + 2] [i_1] [10U]), (((/* implicit */unsigned int) 1790911605))))));
                /* LoopNest 2 */
                for (short i_21 = 2; i_21 < 22; i_21 += 3) 
                {
                    for (unsigned char i_22 = 0; i_22 < 24; i_22 += 1) 
                    {
                        {
                            var_45 = ((/* implicit */_Bool) max((((/* implicit */int) (short)-27846)), (((int) 1788433787))));
                            var_46 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((~(var_6))), (((((/* implicit */_Bool) 7710529381076481587ULL)) ? (-7518853820069147716LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)232)))))))) ? ((-(((arr_11 [i_17]) >> (((((/* implicit */int) var_5)) - (161))))))) : (((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned char)48)))))))));
                        }
                    } 
                } 
                arr_83 [i_1] [i_1] [i_1] [(short)3] = ((/* implicit */long long int) (-(-1)));
            }
        }
        /* vectorizable */
        for (unsigned long long int i_23 = 1; i_23 < 23; i_23 += 1) 
        {
            var_47 = ((/* implicit */signed char) (-(((/* implicit */int) (short)32767))));
            /* LoopSeq 1 */
            for (signed char i_24 = 0; i_24 < 24; i_24 += 2) 
            {
                arr_90 [i_1] [i_23] [i_24] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) ^ (((unsigned long long int) var_11))));
                var_48 *= ((/* implicit */unsigned int) (unsigned char)199);
                arr_91 [i_23] [i_23] = ((long long int) 7710529381076481587ULL);
                var_49 = ((/* implicit */int) ((short) arr_46 [i_1 - 3] [i_1 - 2] [i_23 - 1]));
            }
        }
        var_50 *= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((arr_48 [i_1 - 3] [i_1] [i_1 + 3] [i_1] [i_1]) ? (-7518853820069147726LL) : (((/* implicit */long long int) 1790911605))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_1] [i_1 + 3] [i_1 + 2] [i_1]))) : (var_7))));
    }
}
