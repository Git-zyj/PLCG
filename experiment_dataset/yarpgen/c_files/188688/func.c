/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188688
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
    var_17 = ((/* implicit */signed char) ((long long int) var_12));
    var_18 = ((/* implicit */_Bool) (~((-((+(((/* implicit */int) var_6))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    arr_9 [i_0] [i_0] = min(((+(((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) var_13))))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)177))) <= (4742310393940341391LL)))));
                    arr_10 [i_0] [i_0] = ((/* implicit */int) ((unsigned int) (+(((/* implicit */int) (_Bool)1)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [(signed char)10] [i_2] [i_1] [i_0])) == (((/* implicit */int) (unsigned char)177))));
                        arr_13 [i_0] [i_1] [i_1] [(signed char)3] [i_1] [i_3] = ((/* implicit */signed char) ((_Bool) (+(((/* implicit */int) var_14)))));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 2; i_4 < 10; i_4 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(arr_17 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 - 2])));
                            arr_19 [i_0] [(signed char)6] [(short)4] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_14 [7ULL] [i_2] [(unsigned char)10])) ? (arr_3 [i_2]) : (arr_8 [i_0] [i_0] [i_0]))) * (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (unsigned char)79)))))));
                        }
                        for (long long int i_5 = 2; i_5 < 10; i_5 += 1) /* same iter space */
                        {
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_11);
                            var_21 += ((/* implicit */long long int) (+((-(((/* implicit */int) arr_14 [i_0] [i_1] [(unsigned char)4]))))));
                        }
                        for (long long int i_6 = 2; i_6 < 10; i_6 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)159)) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)52512))))));
                            var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) 455216993))));
                            arr_27 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_6 - 2]);
                            arr_28 [i_1] [i_3] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (-455216993) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))));
                        }
                    }
                    arr_29 [i_0] [i_1] [i_1] [i_2] = min((((((/* implicit */_Bool) min((arr_11 [(short)2] [i_1]), (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((_Bool) var_2))) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_1])))), (((/* implicit */int) ((signed char) 455216993))));
                    arr_30 [i_1] [i_2] = (((+(((/* implicit */int) arr_21 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2] [i_1])))) >= (((((/* implicit */int) var_12)) - (((/* implicit */int) var_13)))));
                }
                for (signed char i_7 = 2; i_7 < 8; i_7 += 4) /* same iter space */
                {
                    arr_34 [i_7] = ((/* implicit */unsigned short) arr_14 [(signed char)5] [i_1] [i_0]);
                    /* LoopSeq 2 */
                    for (signed char i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        arr_37 [i_0] [(short)4] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_7 + 3])))), (min((((/* implicit */int) arr_31 [i_7 - 1] [i_7] [i_7 - 1])), ((+(((/* implicit */int) (unsigned char)180))))))));
                        arr_38 [i_7] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)70)) / (var_11)))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_7 [i_8] [i_1] [i_7])))) : (((/* implicit */int) var_0)))) % (((/* implicit */int) min((arr_6 [7U] [i_7 - 1] [(_Bool)1] [i_7 + 2]), (arr_6 [i_8] [i_7 - 2] [i_0] [i_8]))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 1; i_9 < 8; i_9 += 4) 
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)185)) && (((/* implicit */_Bool) 1477673461))))) - (((/* implicit */int) min(((unsigned char)97), (((/* implicit */unsigned char) (signed char)-77)))))));
                            arr_42 [i_0] [i_1] [i_0] [(signed char)8] [i_9 + 2] = ((/* implicit */_Bool) ((max((arr_35 [i_7 + 2] [0ULL] [i_0] [i_0] [i_9 + 3]), (arr_35 [i_7 + 2] [i_1] [i_7] [3] [i_9 + 3]))) / (((((/* implicit */_Bool) arr_35 [i_7 + 2] [i_1] [i_7] [i_8] [i_9 + 3])) ? (arr_35 [i_7 + 2] [i_1] [1LL] [(short)1] [i_9 + 3]) : (arr_35 [i_7 + 2] [i_1] [i_1] [i_7] [i_9 + 3])))));
                        }
                        for (unsigned short i_10 = 1; i_10 < 8; i_10 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned int) min((var_11), (arr_24 [i_0])));
                            arr_45 [i_10] [i_1] [i_7] [i_8] [(signed char)6] = ((/* implicit */unsigned char) ((arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]) == (((/* implicit */long long int) (~(((/* implicit */int) (!((_Bool)1)))))))));
                        }
                        arr_46 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = var_4;
                    }
                    for (long long int i_11 = 2; i_11 < 8; i_11 += 1) 
                    {
                        arr_51 [i_11] [i_11] [i_11] [i_11 + 1] [i_11] [i_11] = min(((!(((/* implicit */_Bool) arr_33 [i_7 + 1] [i_7 + 1])))), (((((/* implicit */_Bool) max((8583241932898826159LL), (((/* implicit */long long int) var_6))))) && (((/* implicit */_Bool) arr_43 [i_11] [i_11] [i_11 + 2] [i_1] [(short)7] [i_11])))));
                        arr_52 [i_0] [i_1] [i_11] = ((/* implicit */unsigned short) max((((/* implicit */int) (short)17581)), (((((/* implicit */_Bool) -378451676)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)25728))))) : (545408373)))));
                        arr_53 [i_0] [i_0] [i_0] [8U] [i_7] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) 16564498973719132269ULL))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)70))))) : (((((/* implicit */_Bool) 3841522576U)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 10)))) : (max((var_7), (((/* implicit */long long int) var_12))))))));
                    }
                    arr_54 [i_1] [9ULL] [(short)1] [i_1] = ((/* implicit */int) (~(((((((/* implicit */int) (_Bool)1)) != (-1))) ? (((/* implicit */unsigned long long int) ((var_9) % (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_0] [i_0] [i_7 - 1] [i_7])))))) : (8515536707828476998ULL)))));
                }
                for (signed char i_12 = 2; i_12 < 8; i_12 += 4) /* same iter space */
                {
                    arr_57 [i_0] [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))));
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_26 = (~(((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) (unsigned short)2538))))));
                        arr_62 [i_13] [i_12] [i_1] [i_0] [i_0] = ((/* implicit */long long int) arr_17 [i_0] [(unsigned short)6] [(short)9] [(short)9] [i_13]);
                        arr_63 [(_Bool)1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) arr_25 [i_0] [i_1] [i_0] [i_13] [i_13])), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)7247))))) ? (max((var_8), (((/* implicit */long long int) arr_48 [i_0] [i_1] [i_12] [i_12])))) : (var_8)))));
                        /* LoopSeq 2 */
                        for (signed char i_14 = 0; i_14 < 11; i_14 += 4) 
                        {
                            arr_67 [i_14] [i_13] [i_12] [i_1] [i_0] = ((/* implicit */_Bool) (signed char)96);
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? ((+(arr_56 [i_12 + 1] [i_12 + 1]))) : ((-(((/* implicit */int) var_6))))));
                            arr_68 [i_0] [i_1] [i_12] [(unsigned short)8] [(unsigned short)8] = min((max((((((/* implicit */_Bool) (short)17581)) ? (((/* implicit */unsigned long long int) arr_65 [i_12] [i_1] [i_12] [i_13] [i_12] [i_12])) : (15848434272988868102ULL))), (((/* implicit */unsigned long long int) arr_44 [i_0] [8] [i_0] [8] [i_0] [0U])))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_32 [i_12] [i_12] [i_12 - 2])), (var_8)))));
                        }
                        for (unsigned char i_15 = 0; i_15 < 11; i_15 += 4) 
                        {
                            arr_73 [i_0] [i_0] [i_12] = ((/* implicit */short) min(((!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((((/* implicit */int) (unsigned short)127)) - (101)))))))), (((_Bool) ((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_9))))));
                            arr_74 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-((~(arr_39 [i_12 + 2] [i_12 - 2] [i_12 - 1])))));
                            var_28 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (_Bool)1)), (11266420378202769330ULL)));
                        }
                    }
                    var_29 = ((/* implicit */_Bool) (-(79302009)));
                }
                for (signed char i_16 = 2; i_16 < 8; i_16 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_17 = 2; i_17 < 9; i_17 += 4) 
                    {
                        for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                        {
                            {
                                arr_85 [i_18] [i_18] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) max((var_4), (((/* implicit */signed char) (_Bool)1)))))))));
                                arr_86 [i_0] [i_0] [3] [i_18] [i_0] [(unsigned short)0] [i_0] = ((/* implicit */signed char) (_Bool)0);
                                var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_66 [i_0] [i_0])) ? ((+(((var_3) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13024))) : (var_8))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_17 - 2])) ? (arr_3 [i_17 + 2]) : (arr_3 [i_17 - 2]))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */signed char) (_Bool)0);
                    arr_87 [i_0] [i_0] [i_1] [i_16] = ((/* implicit */unsigned char) (-(max((((((/* implicit */_Bool) -1896625072)) ? (arr_36 [i_0] [3ULL] [3ULL] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)82))))), (((/* implicit */unsigned long long int) arr_32 [i_0] [i_0] [i_0]))))));
                    /* LoopSeq 2 */
                    for (int i_19 = 3; i_19 < 9; i_19 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_20 = 0; i_20 < 11; i_20 += 1) /* same iter space */
                        {
                            arr_93 [i_0] [i_0] [i_0] [(_Bool)1] &= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_0 [(_Bool)1])) >= (((/* implicit */int) arr_84 [i_0] [i_16] [i_16] [i_19] [(signed char)7] [i_16] [7U])))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_5))))) : (arr_24 [i_16 + 2])));
                            arr_94 [(_Bool)1] = ((/* implicit */unsigned long long int) ((arr_36 [i_19 - 3] [i_19 + 2] [i_19 - 3] [i_19] [i_19] [i_19]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [i_20] [(unsigned short)10] [i_19 - 2] [i_19] [i_16 + 1])))));
                            var_32 = ((/* implicit */unsigned short) (+(3841522580U)));
                            arr_95 [i_0] [i_0] [(_Bool)1] [i_16 + 1] [i_19] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_8)));
                        }
                        for (long long int i_21 = 0; i_21 < 11; i_21 += 1) /* same iter space */
                        {
                            arr_98 [i_0] [i_1] [i_21] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) (signed char)48))))) ? (((/* implicit */int) arr_47 [i_16 - 1] [i_16 - 2] [i_16 - 2] [i_19 - 3])) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_33 [4LL] [i_19])), ((unsigned short)43914)))))));
                            var_33 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((4180673480U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)37))))))))) ^ (var_9)));
                            arr_99 [0U] [i_21] [i_16] [i_21] [i_0] = ((/* implicit */long long int) var_1);
                            arr_100 [i_0] [(_Bool)1] [i_19] [i_19 + 2] [i_21] [(signed char)1] [2U] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_92 [6U] [i_1] [i_16 - 1] [i_19 + 2] [i_21])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8583241932898826159LL))))))))) ? ((~(((((/* implicit */_Bool) (unsigned char)212)) ? (arr_97 [i_0] [i_0] [i_21] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_96 [i_0] [i_1] [(short)8] [i_0] [i_21])))))) : (((/* implicit */unsigned long long int) min((((var_10) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) arr_59 [6] [6] [i_16] [i_19 + 1] [i_16])))), ((((_Bool)1) ? (((/* implicit */int) arr_7 [i_0] [i_1] [2])) : (((/* implicit */int) (short)-9119)))))))));
                        }
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) 1611244052U)), (arr_89 [10ULL] [i_19]))), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)127)) - (113)))))) : (min((-6728739315696114933LL), (((/* implicit */long long int) arr_43 [i_16] [i_0] [i_1] [i_16] [i_0] [i_19]))))));
                        arr_101 [i_0] [i_0] [i_1] [i_16] [0LL] = ((/* implicit */_Bool) (signed char)127);
                    }
                    /* vectorizable */
                    for (unsigned char i_22 = 0; i_22 < 11; i_22 += 1) 
                    {
                        var_35 -= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)255))));
                        arr_104 [i_0] [i_1] [i_16 - 1] [(short)5] = ((/* implicit */long long int) var_14);
                    }
                }
                var_36 |= ((/* implicit */long long int) min((((((/* implicit */_Bool) -7234441822194230982LL)) ? (((((/* implicit */int) arr_21 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_2 [i_1])))) : ((~(((/* implicit */int) (unsigned short)65535)))))), (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
