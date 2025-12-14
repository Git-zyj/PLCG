/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152719
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
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
        var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */long long int) var_6)) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)40479))) - (4207603741609379141LL))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) (-(66421936U)))) ? ((+(var_13))) : ((-(((/* implicit */int) (signed char)86)))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) min((6369686642321169854LL), (((/* implicit */long long int) arr_4 [i_1]))))))), ((_Bool)1)));
        arr_7 [(unsigned char)1] |= ((/* implicit */_Bool) (+((-(var_0)))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_18 = ((/* implicit */int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)253)), (var_14)))) ? (min((3746808539U), (((/* implicit */unsigned int) arr_8 [i_1])))) : (var_2))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3836878991505131142LL)) ? (((((/* implicit */_Bool) (unsigned short)38162)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (short)16)))))));
            var_19 = ((/* implicit */short) ((unsigned long long int) ((unsigned long long int) max((((/* implicit */short) (_Bool)1)), ((short)8190)))));
            arr_10 [i_1] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_0 [i_2])) : (7511772620661948376ULL)))));
            arr_11 [i_2] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_1])))) ? (((((/* implicit */_Bool) max((((/* implicit */short) arr_1 [2ULL])), ((short)8196)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-50))) : (((unsigned int) 3484396368U)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (178116008U))))))))));
        }
        arr_12 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)110)) == (var_6)));
        arr_13 [i_1] = ((/* implicit */unsigned long long int) var_12);
    }
    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_15 [i_3] [i_3]), (((/* implicit */unsigned long long int) var_9))))) ? ((+(arr_15 [i_3] [i_3]))) : (((((/* implicit */_Bool) ((unsigned char) var_6))) ? (arr_15 [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))));
        arr_16 [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_14 [(unsigned char)20]))))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)25050)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) min((arr_14 [i_3]), ((short)-8212)))))) << (((((((/* implicit */_Bool) var_11)) ? (((long long int) var_7)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_3])))))))) - (18760LL)))));
        /* LoopSeq 4 */
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (max((63202905U), (((/* implicit */unsigned int) arr_14 [i_4])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_14) < (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3])))))))));
            arr_19 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) (signed char)(-127 - 1));
            arr_20 [(unsigned short)1] = ((/* implicit */long long int) -1326590737);
            var_22 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (~(-1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)28138)) < (((/* implicit */int) (signed char)-113)))))) : (((long long int) var_16)))));
        }
        /* vectorizable */
        for (unsigned char i_5 = 1; i_5 < 20; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    for (int i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        {
                            arr_31 [i_3] [i_5] [(unsigned char)9] [i_7] [i_7] [12ULL] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4207603741609379136LL)) ? (((/* implicit */int) (unsigned short)52482)) : (((/* implicit */int) arr_29 [i_5] [i_5] [i_5])))) < (((/* implicit */int) (short)-30622))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((3691707246U) - (3691707245U)))))) ? (((((/* implicit */_Bool) (unsigned short)40490)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3] [i_5 + 2] [(signed char)15]))) : (13774074457311174567ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_3] [1] [1] [(unsigned char)21] [i_7] [8U]))))))));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)8215)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (_Bool)1))));
                            arr_32 [(unsigned short)13] [i_5 - 1] [i_5] [i_6] [i_7] [18U] = ((/* implicit */long long int) arr_17 [i_6] [(signed char)9]);
                            arr_33 [(unsigned short)2] [16ULL] [i_6] [i_6] [i_6] [6ULL] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40490))) > (603260049U))) ? (((/* implicit */int) arr_21 [i_5 + 1])) : (((/* implicit */int) ((((/* implicit */long long int) var_13)) <= (9223372036854775807LL))))));
                        }
                    } 
                } 
                arr_34 [7LL] [i_5] [i_6] [i_6] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) -4925110799866318389LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (9223372036854775806LL)))));
                arr_35 [10LL] = ((/* implicit */signed char) var_15);
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        {
                            arr_40 [i_9] = ((/* implicit */unsigned char) (-(var_3)));
                            var_25 = ((/* implicit */unsigned char) (!(arr_22 [i_9 + 1] [i_5 + 1])));
                            arr_41 [16U] [i_9] [i_6] [i_9] [i_5] [i_5] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            }
            arr_42 [12ULL] [i_5] = ((/* implicit */int) ((arr_38 [i_3] [15U] [i_5] [i_5 + 2] [11]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [7LL] [i_5 + 2] [7LL] [2ULL] [(unsigned short)19])))));
            /* LoopSeq 2 */
            for (int i_11 = 0; i_11 < 22; i_11 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_12 = 1; i_12 < 20; i_12 += 2) 
                {
                    var_26 = ((/* implicit */unsigned char) ((((arr_45 [5U] [13ULL] [i_11] [(unsigned short)8]) / (((/* implicit */long long int) ((/* implicit */int) var_15))))) / (((/* implicit */long long int) arr_44 [i_5 + 2] [i_5 - 1] [i_5 + 1]))));
                    arr_47 [i_12] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) 4672669616398377048ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_39 [i_3] [i_3] [i_11])))));
                }
                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) var_14))));
                arr_48 [(unsigned char)8] [(unsigned char)14] [(unsigned short)17] [(unsigned char)8] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_26 [i_5]) ? (((/* implicit */int) var_15)) : (var_12)))) ? (((/* implicit */int) ((unsigned short) var_16))) : (arr_27 [i_5 - 1])));
                /* LoopSeq 3 */
                for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_14 = 0; i_14 < 22; i_14 += 2) 
                    {
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_5 + 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_50 [i_5 - 1] [i_5 - 1] [(_Bool)0] [i_5 - 1])))))));
                        arr_54 [i_13] [i_13] = (-(var_12));
                        arr_55 [i_3] [(unsigned char)9] [(unsigned short)19] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40489)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_3] [i_5 - 1] [i_11] [(short)21]))))) : (((/* implicit */int) (unsigned short)31969))));
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((unsigned short) (~(714256958U)))))));
                    }
                    arr_56 [i_3] [i_5] [i_5] [21ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_3] [i_5 - 1] [i_11] [i_13])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))) : (((/* implicit */int) var_9))));
                    var_30 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)105))));
                }
                for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 2) /* same iter space */
                {
                    arr_59 [i_3] [(signed char)7] [i_5] [i_11] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_3))) ? (((((/* implicit */int) arr_22 [i_3] [13ULL])) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)255))));
                    var_31 = ((/* implicit */long long int) (unsigned short)65533);
                }
                for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 2) /* same iter space */
                {
                    var_32 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_14))));
                    /* LoopSeq 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        var_33 ^= ((/* implicit */unsigned char) var_4);
                        arr_65 [(_Bool)1] [14U] [1ULL] [i_17] [i_17] = ((/* implicit */unsigned char) (unsigned short)32579);
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (9507195920494669232ULL))))));
                        arr_68 [i_3] [i_5 + 2] [i_11] [i_5 + 2] [i_16] [i_16] [i_5 + 2] = ((/* implicit */signed char) var_16);
                        arr_69 [(unsigned char)8] [(unsigned char)8] [i_11] [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5 - 1]))) : (arr_53 [i_3] [i_5] [i_11] [i_5 + 1])));
                        arr_70 [16LL] [i_5 + 1] [6U] [6U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64932))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2))) : (var_16)))));
                        arr_71 [i_3] [i_5] [i_5] [(_Bool)1] [i_18] = ((/* implicit */long long int) arr_36 [i_5 + 2]);
                    }
                    var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)725)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_67 [i_3] [i_11] [i_16]))));
                }
            }
            for (signed char i_19 = 0; i_19 < 22; i_19 += 4) 
            {
                arr_74 [i_19] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)99))));
                var_36 = ((/* implicit */_Bool) max((var_36), (((((((/* implicit */_Bool) (unsigned short)619)) ? (4672669616398377048ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)725))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            }
            arr_75 [i_3] [3U] = 4672669616398377048ULL;
        }
        for (unsigned int i_20 = 0; i_20 < 22; i_20 += 3) 
        {
            var_37 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 603260049U))))), ((unsigned char)105))))));
            arr_78 [i_3] [12] = ((/* implicit */unsigned long long int) min((((arr_49 [i_3] [i_20]) ? (((/* implicit */int) arr_49 [i_3] [12U])) : (((/* implicit */int) arr_49 [i_3] [i_20])))), ((~(((/* implicit */int) arr_49 [i_3] [i_20]))))));
            /* LoopNest 2 */
            for (unsigned int i_21 = 1; i_21 < 19; i_21 += 4) 
            {
                for (int i_22 = 0; i_22 < 22; i_22 += 4) 
                {
                    {
                        var_38 += max((((/* implicit */long long int) (+((+(613787725U)))))), (((long long int) 9948332842544917371ULL)));
                        arr_84 [2ULL] [i_20] [i_21] [i_22] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min(((unsigned char)82), ((unsigned char)244)))), (((4672669616398377053ULL) / (13774074457311174557ULL)))))) ? (var_14) : (282877066U)));
                    }
                } 
            } 
        }
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            arr_87 [i_23] = ((/* implicit */_Bool) (signed char)-121);
            /* LoopSeq 1 */
            for (signed char i_24 = 0; i_24 < 22; i_24 += 1) 
            {
                var_39 = ((/* implicit */short) ((arr_90 [i_23] [i_23]) < (max((5311715196680467154ULL), (((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)64932)))))));
                var_40 = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) arr_91 [21U] [21U] [(_Bool)1])), ((-9223372036854775807LL - 1LL)))) > (max((arr_51 [i_3] [i_24] [i_24] [11ULL]), (((/* implicit */long long int) min((((/* implicit */unsigned char) (signed char)99)), (arr_83 [i_23]))))))));
                var_41 = ((/* implicit */short) ((long long int) (~(((/* implicit */int) var_9)))));
            }
        }
    }
    var_42 = var_10;
    var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) var_4)) + (((/* implicit */int) (unsigned short)600)))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)-15)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) ((var_6) == (((/* implicit */int) (unsigned char)82)))))))) : (max((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) 4291563619U)))))))));
}
