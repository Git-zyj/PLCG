/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122183
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_2 [i_0] [i_0])))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_2 [i_0] [i_0])))) ? (((((/* implicit */_Bool) (signed char)83)) ? (((((/* implicit */_Bool) -3811133236276781279LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16216))) : (5085048048033038852LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_8))))))) : (((/* implicit */long long int) (-(((var_2) << (((((/* implicit */int) arr_1 [i_0] [i_0])) - (105))))))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_0)))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_13)), ((~(((/* implicit */int) arr_0 [i_0]))))))) : (((unsigned int) arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((3895735140U), (((/* implicit */unsigned int) var_4))))) ? (((var_1) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60439))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_1 [i_1] [i_1]), (arr_4 [i_1] [i_1])))))))));
        arr_6 [i_1] = ((/* implicit */long long int) arr_0 [i_1]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            arr_11 [i_1] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_2]))));
            var_22 *= ((/* implicit */short) ((long long int) 2093370385U));
            var_23 = ((/* implicit */unsigned short) 2028345381);
        }
    }
    for (int i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                {
                    arr_20 [4U] [4U] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) 5085048048033038873LL)))))))) + (max((((((-5085048048033038823LL) + (9223372036854775807LL))) >> (((arr_18 [i_3] [i_5]) + (1040504263))))), (((/* implicit */long long int) arr_17 [i_5] [i_3]))))));
                    var_24 = ((/* implicit */long long int) var_0);
                    var_25 += ((/* implicit */unsigned short) var_17);
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) (short)-32765)) ^ (((/* implicit */int) arr_1 [i_3] [i_3]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_3] [(unsigned short)4])) & (((/* implicit */int) (unsigned short)37256))))))) ? (((((/* implicit */_Bool) ((arr_10 [i_3] [i_3]) ^ (1878489402U)))) ? (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */long long int) arr_18 [(_Bool)1] [i_3])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) : (((((/* implicit */_Bool) 5085048048033038800LL)) ? (arr_16 [i_3] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_7 = 2; i_7 < 23; i_7 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_29 [i_6] [i_6] [i_7 + 1] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_24 [i_6] [i_6] [i_6])) ^ (((/* implicit */int) (short)5747))));
                arr_30 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_6] [i_7 - 2] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_24 [i_6] [i_7] [i_6])) <= (((/* implicit */int) (signed char)67)))))) : (((long long int) var_4))));
            }
            for (int i_9 = 1; i_9 < 22; i_9 += 1) 
            {
                var_27 += ((/* implicit */unsigned short) var_0);
                arr_33 [i_6] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_6] [i_6]))) + (((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_6] [i_9]))) + (arr_28 [i_7 - 1] [i_7] [i_7] [i_6])))));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_10 = 1; i_10 < 23; i_10 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_11 = 0; i_11 < 24; i_11 += 4) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_6] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6] [i_7 - 1]))) : (-5085048048033038872LL)));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        arr_41 [i_12] [(unsigned short)16] [i_6] = ((/* implicit */unsigned char) var_4);
                        var_29 = ((/* implicit */unsigned long long int) ((var_2) / (((/* implicit */unsigned int) (~(((/* implicit */int) arr_24 [i_7] [12ULL] [i_6])))))));
                    }
                }
                for (unsigned int i_13 = 0; i_13 < 24; i_13 += 4) /* same iter space */
                {
                    arr_44 [i_6] [i_6] [i_10] = ((/* implicit */_Bool) 5085048048033038781LL);
                    arr_45 [i_6] [i_13] [i_7] [i_7] [i_13] &= ((/* implicit */signed char) arr_38 [i_6] [i_6] [i_6] [(unsigned char)15] [i_6]);
                    /* LoopSeq 3 */
                    for (unsigned short i_14 = 0; i_14 < 24; i_14 += 3) 
                    {
                        arr_48 [i_6] [i_6] [(_Bool)1] [i_6] [i_13] [i_14] [(unsigned char)15] = ((/* implicit */int) 1518893537U);
                        arr_49 [18] [18] [i_10 + 1] [i_10 + 1] [i_6] = ((/* implicit */unsigned short) ((arr_47 [i_7] [i_7] [i_7 - 2] [i_7 + 1]) <= (arr_47 [i_7] [i_7] [i_7] [i_7 - 1])));
                        arr_50 [i_6] [i_6] = ((/* implicit */long long int) ((arr_37 [i_10 - 1] [i_7 + 1] [(unsigned short)9] [i_7] [i_7 - 2] [i_7]) ? (((/* implicit */int) arr_37 [i_10 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 - 2] [i_6])) : (((/* implicit */int) arr_37 [i_10 + 1] [i_7 - 1] [i_7] [(unsigned short)18] [i_7 + 1] [i_7]))));
                    }
                    for (unsigned short i_15 = 0; i_15 < 24; i_15 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_7 + 1] [i_7 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (6260483525269412470ULL)));
                        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) -5085048048033038765LL)) ? (((/* implicit */int) arr_21 [i_10 - 1] [i_13])) : (((/* implicit */int) var_14))));
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)24385)))))));
                    }
                    for (signed char i_16 = 0; i_16 < 24; i_16 += 3) 
                    {
                        arr_55 [i_16] [i_6] [i_10] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) 1518893521U)) ? (arr_22 [(signed char)4] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                        var_33 |= ((/* implicit */unsigned int) (~((((_Bool)1) ? (((/* implicit */int) arr_42 [i_6] [i_7] [i_10] [i_10] [i_13] [i_16])) : (((/* implicit */int) (unsigned short)50847))))));
                    }
                }
                arr_56 [i_6] [10U] [i_6] = ((/* implicit */unsigned int) (unsigned short)3);
                /* LoopSeq 3 */
                for (short i_17 = 1; i_17 < 20; i_17 += 1) 
                {
                    var_34 -= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_42 [17LL] [(signed char)0] [i_6] [i_7 - 1] [i_10 + 1] [(_Bool)1]))));
                    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [i_17 + 1] [i_17] [i_6] [i_17] [i_17] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_36 [i_17] [19ULL] [i_6] [i_17] [i_17] [i_17])));
                    var_36 = ((/* implicit */int) 12186260548440139147ULL);
                }
                for (unsigned int i_18 = 0; i_18 < 24; i_18 += 1) 
                {
                    var_37 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)1))));
                    var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_10 + 1] [i_6])) ? (arr_34 [i_6] [i_7 - 2]) : (arr_34 [i_6] [i_18])));
                }
                for (signed char i_19 = 3; i_19 < 22; i_19 += 4) 
                {
                    arr_66 [i_6] = ((/* implicit */long long int) (unsigned char)155);
                    var_39 = (~(8318099511901947925LL));
                }
                var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_52 [i_6] [i_7] [i_10 - 1] [i_7 + 1] [i_6] [i_10])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_64 [i_7 + 1] [i_7 - 1] [i_7] [(signed char)14]))));
                var_41 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_54 [i_6] [i_6] [i_7 - 1] [i_10 + 1] [i_10] [i_10] [i_6]))) | (arr_40 [i_7 - 1] [i_7 - 2] [i_7 - 2] [(unsigned char)1] [i_10 - 1])));
            }
        }
        for (long long int i_20 = 0; i_20 < 24; i_20 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_21 = 0; i_21 < 24; i_21 += 4) 
            {
                var_42 = var_14;
                var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1107078726U)) ? (arr_27 [i_21] [i_21] [i_20] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6] [i_21])))));
                var_44 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_54 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5085048048033038780LL)));
                arr_73 [i_6] [i_20] [i_20] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_6] [i_6] [i_20] [i_21])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_6])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_47 [i_6] [12LL] [i_20] [i_21])));
                var_45 = ((/* implicit */signed char) ((12186260548440139158ULL) == (((/* implicit */unsigned long long int) var_7))));
            }
            /* LoopNest 2 */
            for (unsigned int i_22 = 0; i_22 < 24; i_22 += 2) 
            {
                for (int i_23 = 0; i_23 < 24; i_23 += 1) 
                {
                    {
                        var_46 = ((/* implicit */signed char) ((((arr_22 [i_6] [i_20]) < (((/* implicit */unsigned long long int) arr_38 [i_6] [i_20] [i_20] [i_23] [i_6])))) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1))));
                        arr_79 [(short)2] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_70 [i_23])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42952))) : (arr_70 [i_6])));
                        var_47 += (-(((4294967274U) / (((/* implicit */unsigned int) ((/* implicit */int) var_14))))));
                        var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_0)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_24 = 0; i_24 < 24; i_24 += 1) 
            {
                for (short i_25 = 0; i_25 < 24; i_25 += 3) 
                {
                    {
                        var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((var_1) - (6670455743535595593LL)))))) && (((/* implicit */_Bool) var_1))));
                        var_50 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_1) << (((((((/* implicit */int) var_14)) + (143))) - (40)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)-118))))) : ((~(2665821955U)))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_26 = 0; i_26 < 24; i_26 += 2) /* same iter space */
                        {
                            arr_87 [i_6] [i_20] [i_26] [i_6] [i_26] [i_6] [(_Bool)1] = ((/* implicit */int) arr_62 [i_6] [i_24] [i_6] [i_26]);
                            var_51 = ((/* implicit */long long int) (+(((/* implicit */int) arr_80 [i_6] [i_6] [i_6]))));
                            var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_80 [i_6] [i_25] [i_26])) ? (arr_40 [i_6] [i_20] [i_20] [i_25] [i_26]) : ((-9223372036854775807LL - 1LL))));
                        }
                        for (unsigned long long int i_27 = 0; i_27 < 24; i_27 += 2) /* same iter space */
                        {
                            var_53 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3241155011U)) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_22 [i_24] [i_25]));
                            var_54 = ((((arr_22 [i_25] [i_6]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) <= (var_7)))));
                        }
                    }
                } 
            } 
            arr_91 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_20] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-61))) : (var_2)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_8))));
            /* LoopNest 2 */
            for (short i_28 = 0; i_28 < 24; i_28 += 1) 
            {
                for (unsigned short i_29 = 0; i_29 < 24; i_29 += 3) 
                {
                    {
                        var_55 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_57 [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_57 [(signed char)22] [i_6] [i_28])) : (((/* implicit */int) arr_57 [i_6] [i_6] [i_6]))));
                        var_56 = ((/* implicit */signed char) (-(arr_46 [i_6] [i_28] [i_29])));
                    }
                } 
            } 
        }
        arr_97 [(unsigned short)16] [i_6] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) && (arr_53 [i_6] [(unsigned short)18] [i_6] [i_6] [(unsigned short)18] [i_6])));
        /* LoopSeq 2 */
        for (short i_30 = 2; i_30 < 22; i_30 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_31 = 2; i_31 < 20; i_31 += 2) /* same iter space */
            {
                arr_104 [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_102 [i_6] [i_30] [i_31]))) <= (arr_22 [i_30 + 1] [i_31 + 2])));
                var_57 = ((/* implicit */signed char) ((arr_81 [i_6] [i_6] [i_6] [i_6]) > (((/* implicit */long long int) (-(((/* implicit */int) (short)13212)))))));
                arr_105 [i_6] [i_30] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_63 [i_31] [i_30 - 2] [21ULL])))) && (((/* implicit */_Bool) 497431003U))));
            }
            for (unsigned short i_32 = 2; i_32 < 20; i_32 += 2) /* same iter space */
            {
                var_58 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_30 + 2] [i_32] [i_32] [i_32])) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_62 [i_30 + 2] [21] [i_30 - 1] [i_32]))));
                var_59 = ((/* implicit */long long int) (((-(((/* implicit */int) arr_101 [i_6] [i_30 + 2] [i_32])))) ^ (((/* implicit */int) arr_100 [i_6] [i_30 - 1]))));
            }
            for (unsigned short i_33 = 2; i_33 < 20; i_33 += 2) /* same iter space */
            {
                var_60 += ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) >> (((arr_22 [i_30 - 1] [i_33 + 4]) - (5576159694490406570ULL)))));
                var_61 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_67 [i_33 + 3] [i_30 + 2]))));
                /* LoopSeq 1 */
                for (signed char i_34 = 0; i_34 < 24; i_34 += 1) 
                {
                    var_62 = ((/* implicit */int) min((var_62), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)90)) ? (5085048048033038766LL) : (var_10))))));
                    var_63 = ((/* implicit */unsigned char) (-(((4132779413U) + (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                    arr_113 [i_6] [0ULL] [i_6] [0ULL] = ((/* implicit */int) ((((var_2) >> (((((/* implicit */int) arr_60 [i_6] [i_34] [i_33] [i_34] [i_6] [(unsigned char)8])) - (60794))))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                }
                arr_114 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_61 [i_33 + 3] [i_33 - 2] [i_6] [i_33])) ? (arr_103 [i_6] [i_33 + 1] [i_6]) : (arr_103 [i_6] [i_33 + 1] [i_6])));
                var_64 *= var_7;
            }
            for (unsigned short i_35 = 2; i_35 < 20; i_35 += 2) /* same iter space */
            {
                arr_118 [i_6] [i_35 + 1] = ((/* implicit */_Bool) var_15);
                var_65 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_28 [i_6] [i_35] [i_35] [i_6])) ? (((/* implicit */int) (signed char)-77)) : (((/* implicit */int) (signed char)93))))));
                var_66 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_30 - 2] [i_35 - 1])) || (((/* implicit */_Bool) var_12))));
            }
            var_67 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)239)) ? (arr_89 [i_6] [i_30 - 1] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_109 [i_6] [i_30] [i_30 + 1])))));
        }
        for (unsigned short i_36 = 3; i_36 < 21; i_36 += 2) 
        {
            var_68 += ((/* implicit */signed char) (~(991243022U)));
            var_69 = ((/* implicit */signed char) ((var_7) < (((/* implicit */unsigned int) (+(((/* implicit */int) arr_26 [i_6] [i_36])))))));
            var_70 = ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
        }
    }
    var_71 = ((/* implicit */signed char) max((var_71), (((/* implicit */signed char) var_2))));
    var_72 = ((/* implicit */unsigned long long int) min((var_72), (((/* implicit */unsigned long long int) (unsigned short)0))));
}
