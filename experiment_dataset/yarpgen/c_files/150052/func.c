/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150052
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_19 += ((/* implicit */short) (~(((((/* implicit */int) arr_0 [(unsigned char)6])) + (((/* implicit */int) var_5))))));
        var_20 = ((/* implicit */long long int) ((((arr_1 [i_0 + 1]) == (arr_1 [i_0 + 1]))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_1 [i_0 + 1]))))) : ((+(var_18)))));
        var_21 ^= ((/* implicit */unsigned int) var_14);
        var_22 = ((/* implicit */signed char) (+(min((((/* implicit */int) ((unsigned char) var_6))), (((((((/* implicit */int) var_6)) + (2147483647))) >> (((var_12) - (3084902983U)))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_3 [i_1])))));
        var_24 = arr_2 [i_1];
        var_25 = max((((((/* implicit */int) ((unsigned short) (short)-14264))) > (min((var_17), (var_18))))), ((((_Bool)0) && (((/* implicit */_Bool) var_3)))));
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned int) ((((arr_2 [i_1]) | (var_14))) == (((arr_2 [i_1]) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
        arr_5 [i_1] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned int) var_18)) - (((arr_3 [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
    }
    for (short i_2 = 4; i_2 < 22; i_2 += 4) 
    {
        arr_8 [(unsigned short)5] = ((/* implicit */long long int) arr_7 [i_2]);
        /* LoopSeq 4 */
        for (long long int i_3 = 2; i_3 < 22; i_3 += 2) 
        {
            var_26 = min((arr_10 [i_3] [i_2]), (((/* implicit */int) ((arr_6 [i_2 - 3]) == (((/* implicit */long long int) ((/* implicit */int) (short)-14264)))))));
            var_27 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) min((var_14), (((/* implicit */long long int) var_9))))))));
        }
        for (short i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */int) (((!(((/* implicit */_Bool) arr_10 [i_2] [i_4])))) && (((/* implicit */_Bool) ((signed char) var_8)))))) - (((/* implicit */int) (short)-14241)))))));
            var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
            var_30 = ((/* implicit */short) arr_12 [(signed char)0] [(unsigned short)18]);
        }
        for (short i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
        {
            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) max((((/* implicit */long long int) arr_12 [i_2] [(signed char)22])), (arr_6 [i_2])))))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) 0)) + (arr_9 [0LL])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)142)) && (((/* implicit */_Bool) 3483206446U)))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_12 [(unsigned short)12] [18U]))) | (var_8)))))));
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    {
                        var_32 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_19 [i_6] [i_5] [i_6] [i_6] [i_5]))));
                        var_33 = ((/* implicit */unsigned int) var_6);
                        var_34 = ((/* implicit */short) (_Bool)1);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                for (int i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    {
                        var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((min((max((arr_9 [i_2 - 3]), (((/* implicit */long long int) arr_13 [i_2 - 1] [i_5] [0LL])))), (((/* implicit */long long int) (-(((/* implicit */int) var_11))))))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_24 [i_2] [i_2] [7LL] [i_5] [i_5] [i_2])))) && (((((/* implicit */_Bool) arr_10 [i_5] [i_5])) || (((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_5]))))))))))));
                        var_36 |= ((/* implicit */short) (((+(((/* implicit */int) (short)-14280)))) | (((((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_2 + 1] [i_2 + 1] [i_5] [i_5])) ? (((/* implicit */int) arr_24 [i_9] [i_5] [i_2 - 3] [i_9] [i_2] [i_5])) : (((/* implicit */int) arr_24 [i_2] [(signed char)17] [i_2 - 1] [i_9] [i_2] [i_9]))))));
                    }
                } 
            } 
            var_37 = ((/* implicit */unsigned char) (short)14291);
            var_38 += ((/* implicit */short) ((((min((((/* implicit */int) arr_17 [i_2] [i_2 - 4] [i_2] [i_2])), (var_0))) <= (((/* implicit */int) arr_21 [i_5] [i_2 - 1] [i_2] [2])))) ? (((/* implicit */int) var_5)) : ((((-(((/* implicit */int) arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))) * (((/* implicit */int) max((((/* implicit */unsigned char) var_15)), (arr_19 [i_5] [i_5] [i_5] [(unsigned char)8] [i_5]))))))));
        }
        for (short i_10 = 0; i_10 < 23; i_10 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                for (int i_12 = 0; i_12 < 23; i_12 += 1) 
                {
                    for (long long int i_13 = 2; i_13 < 22; i_13 += 1) 
                    {
                        {
                            var_39 += ((/* implicit */unsigned short) ((((arr_23 [i_11] [i_12]) > (arr_23 [i_10] [i_12]))) ? (((/* implicit */int) ((arr_23 [i_12] [i_2]) != (arr_23 [i_2 - 2] [i_13 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                            var_40 -= ((/* implicit */unsigned char) (+(((((((/* implicit */int) ((short) var_8))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_6 [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)131))) : (arr_30 [i_2] [i_2] [i_11] [i_12] [i_13 - 1]))) - (104LL)))))));
                            var_41 |= ((/* implicit */signed char) arr_6 [i_2 - 2]);
                            var_42 |= ((/* implicit */unsigned short) (short)14279);
                            var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) ((signed char) var_6)))) - ((+(((((var_14) + (9223372036854775807LL))) << (((((arr_30 [18] [18] [i_11] [i_12] [i_13]) + (2271804024715328289LL))) - (9LL))))))))))));
                        }
                    } 
                } 
            } 
            var_44 = var_15;
            /* LoopSeq 2 */
            for (short i_14 = 0; i_14 < 23; i_14 += 2) /* same iter space */
            {
                arr_37 [i_2] = ((/* implicit */long long int) arr_17 [i_2] [i_14] [i_14] [i_14]);
                var_45 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_27 [i_2 - 2] [i_2 - 3] [i_2 - 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_2 - 2] [i_2] [i_2 - 2])) || (((/* implicit */_Bool) arr_27 [i_2 + 1] [i_2] [i_2 + 1])))))) : (((arr_27 [i_2 + 1] [i_2 + 1] [i_2 + 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)14280)))))));
                var_46 = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) var_4)) ^ (((((/* implicit */int) arr_20 [(short)16] [i_10] [i_2] [i_10])) >> (((((/* implicit */int) arr_28 [i_2] [i_10] [17LL] [i_2])) - (31911))))))));
                arr_38 [i_2] [i_10] [i_2] = ((var_17) >= (((((/* implicit */_Bool) arr_12 [i_2 - 1] [i_2 - 3])) ? (303752584) : (((/* implicit */int) (signed char)-35)))));
            }
            for (short i_15 = 0; i_15 < 23; i_15 += 2) /* same iter space */
            {
                var_47 = ((/* implicit */_Bool) min((min((var_13), (((/* implicit */int) arr_33 [i_2 - 1] [i_2 - 3] [i_10] [i_15] [19LL] [i_15])))), (((/* implicit */int) arr_12 [i_2 - 3] [i_10]))));
                var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) (-(((arr_36 [i_2] [i_2 - 1]) / (-5028522758664222315LL))))))));
                var_49 = ((/* implicit */_Bool) ((long long int) arr_40 [i_2]));
                var_50 |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_11))) / (var_14)));
                /* LoopSeq 4 */
                for (unsigned int i_16 = 2; i_16 < 20; i_16 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_17 = 0; i_17 < 23; i_17 += 1) 
                    {
                        var_51 = ((/* implicit */short) ((((((/* implicit */_Bool) ((int) var_16))) ? (var_12) : (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) * (((/* implicit */int) arr_13 [(short)4] [i_10] [i_16 - 1]))))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) : (var_13))))));
                        var_52 = ((/* implicit */_Bool) ((((max((((/* implicit */long long int) var_0)), (var_16))) & (((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_2])) | (((/* implicit */int) var_1))))))) * (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)188)) | (((/* implicit */int) ((unsigned short) arr_45 [i_2] [i_10] [i_15] [i_16] [i_17]))))))));
                    }
                    for (signed char i_18 = 2; i_18 < 20; i_18 += 4) /* same iter space */
                    {
                        var_53 = ((/* implicit */unsigned short) ((var_7) > (((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)14263)) : (((/* implicit */int) var_11)))) + (var_13))))));
                        var_54 = ((/* implicit */unsigned short) (+(max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_1)) : (var_17)))), (((var_8) | (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                        var_55 &= ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */short) var_4)), (arr_50 [i_2 - 3] [i_2 + 1] [i_15] [i_16 + 3] [i_16 + 3] [16LL])))) | (((var_0) + (((/* implicit */int) max((var_2), (((/* implicit */short) arr_29 [i_2])))))))));
                    }
                    /* vectorizable */
                    for (signed char i_19 = 2; i_19 < 20; i_19 += 4) /* same iter space */
                    {
                        var_56 = ((/* implicit */signed char) min((var_56), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_49 [i_19] [(unsigned char)22] [i_19 + 1] [i_19] [i_19] [i_19 - 1] [i_19])) || (((/* implicit */_Bool) var_2)))))));
                        var_57 = ((((/* implicit */int) arr_46 [i_10] [i_15] [i_10] [i_19 - 1] [i_19 - 1])) > (((/* implicit */int) var_15)));
                        arr_55 [i_2] [i_2] [i_15] [i_16] [i_19] [i_2] = ((/* implicit */unsigned int) var_10);
                        var_58 = ((/* implicit */short) max((var_58), (((/* implicit */short) ((unsigned long long int) arr_15 [i_19 + 2] [i_16 - 2] [i_2 - 3])))));
                    }
                    for (unsigned short i_20 = 0; i_20 < 23; i_20 += 2) 
                    {
                        var_59 = ((/* implicit */signed char) var_16);
                        var_60 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_2])) ? (((arr_40 [i_2]) | (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((var_14) ^ (var_14)))) && (((/* implicit */_Bool) (~(var_17))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                        var_61 = ((/* implicit */short) ((unsigned char) var_5));
                    }
                    /* LoopSeq 4 */
                    for (unsigned char i_21 = 3; i_21 < 22; i_21 += 1) /* same iter space */
                    {
                        var_62 = ((arr_17 [i_2 - 2] [i_10] [i_15] [i_16]) ? (((var_3) / (((3660682412U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_2] [(signed char)21] [i_15] [i_15] [i_21]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))));
                        var_63 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_21] [i_16] [i_15] [22LL]))) ^ ((-(max((794603250629890753LL), (((/* implicit */long long int) var_10))))))));
                    }
                    for (unsigned char i_22 = 3; i_22 < 22; i_22 += 1) /* same iter space */
                    {
                        var_64 = ((/* implicit */int) max((var_64), (((/* implicit */int) (!((!(((/* implicit */_Bool) (~(var_14)))))))))));
                        var_65 = ((/* implicit */_Bool) (+(((/* implicit */int) ((short) ((unsigned long long int) var_3))))));
                    }
                    for (unsigned char i_23 = 3; i_23 < 22; i_23 += 1) /* same iter space */
                    {
                        var_66 = ((/* implicit */short) min((var_7), (((/* implicit */long long int) arr_24 [i_2] [(short)5] [i_15] [(short)5] [i_15] [i_2]))));
                        arr_65 [i_16] [i_16] [i_15] [i_16] [i_23] [i_16] &= ((/* implicit */short) (+(((/* implicit */int) var_5))));
                        var_67 = ((/* implicit */unsigned char) arr_58 [i_2] [16] [i_15] [i_16] [i_2]);
                        var_68 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_52 [i_2] [i_10] [(signed char)13] [i_16] [(short)22]), (arr_7 [i_2 - 1])))) || ((!(((/* implicit */_Bool) var_10))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_24 = 3; i_24 < 22; i_24 += 1) /* same iter space */
                    {
                        var_69 = ((/* implicit */unsigned short) var_3);
                        var_70 = ((/* implicit */unsigned short) ((unsigned char) var_14));
                    }
                }
                for (unsigned int i_25 = 2; i_25 < 20; i_25 += 4) /* same iter space */
                {
                    var_71 -= ((/* implicit */unsigned int) (((+(((/* implicit */int) var_5)))) - ((~(((/* implicit */int) arr_54 [i_2] [i_2 - 1] [1] [20LL] [i_25 - 1]))))));
                    arr_72 [i_25 + 2] [i_10] = ((/* implicit */short) -3302428209683811002LL);
                    var_72 = ((/* implicit */int) min((var_72), (((/* implicit */int) var_2))));
                    var_73 = ((/* implicit */long long int) min((var_73), (((/* implicit */long long int) ((((int) (((-2147483647 - 1)) ^ (((/* implicit */int) var_9))))) * (((/* implicit */int) arr_17 [i_2 + 1] [i_10] [i_10] [i_10])))))));
                }
                for (unsigned int i_26 = 2; i_26 < 20; i_26 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_27 = 3; i_27 < 22; i_27 += 4) 
                    {
                        arr_77 [i_2] [i_10] [i_15] [(unsigned short)8] [12] [12] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((-1228251955486103961LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2] [i_2] [i_15] [(signed char)11])))))), (((((unsigned long long int) var_4)) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_51 [(unsigned short)20] [(unsigned short)20] [i_15] [i_15] [i_15]) : (((/* implicit */long long int) var_3)))))))));
                        var_74 = ((/* implicit */unsigned char) max((var_74), (((/* implicit */unsigned char) var_13))));
                        var_75 = ((/* implicit */short) min((var_75), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((min((var_8), (var_16))) >= (((/* implicit */long long int) ((/* implicit */int) var_4))))))) | ((-9223372036854775807LL - 1LL)))))));
                    }
                    for (signed char i_28 = 1; i_28 < 19; i_28 += 2) /* same iter space */
                    {
                        var_76 = ((/* implicit */signed char) ((((((/* implicit */long long int) var_17)) - (var_7))) >= (var_7)));
                        var_77 = ((/* implicit */signed char) min((var_77), (((/* implicit */signed char) (+(max((((/* implicit */unsigned int) 2147483647)), (((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned int) 2147483647)))))))))));
                    }
                    for (signed char i_29 = 1; i_29 < 19; i_29 += 2) /* same iter space */
                    {
                        var_78 += ((/* implicit */unsigned char) (~(var_17)));
                        var_79 -= ((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned char)10)))) ^ (((/* implicit */int) ((_Bool) var_9)))));
                    }
                    var_80 ^= max(((+(((((/* implicit */long long int) var_12)) ^ (arr_30 [i_2] [i_10] [i_10] [i_10] [i_10]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_26 [i_15] [i_10] [i_2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14270)))))) && (((/* implicit */_Bool) var_18))))));
                }
                for (unsigned short i_30 = 4; i_30 < 22; i_30 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_31 = 0; i_31 < 23; i_31 += 1) 
                    {
                        var_81 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_3))))))) ^ (arr_58 [i_31] [i_10] [(unsigned short)8] [i_10] [i_2 + 1])));
                        var_82 = ((/* implicit */long long int) var_3);
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_32 = 0; i_32 < 23; i_32 += 4) /* same iter space */
                    {
                        var_83 = ((/* implicit */unsigned int) (unsigned char)0);
                        var_84 = ((/* implicit */_Bool) min((var_84), (((/* implicit */_Bool) (unsigned char)122))));
                    }
                    for (unsigned int i_33 = 0; i_33 < 23; i_33 += 4) /* same iter space */
                    {
                        arr_94 [i_2] [(short)2] [i_2] = ((/* implicit */long long int) arr_17 [i_2] [i_10] [(signed char)20] [i_30]);
                        var_85 = ((/* implicit */_Bool) min((var_85), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-11559)) ? (((((/* implicit */_Bool) var_6)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (short)-1222))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_10] [(short)0] [13LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (2605187148U)))))))))));
                        arr_95 [i_2 - 2] [i_10] [i_10] = ((/* implicit */unsigned int) max((var_17), (((/* implicit */int) max((((/* implicit */short) arr_29 [i_10])), (var_6))))));
                        var_86 -= min((((/* implicit */short) arr_17 [i_33] [(signed char)22] [(unsigned short)15] [i_2])), (var_6));
                    }
                    var_87 += ((/* implicit */short) arr_75 [(unsigned short)6] [(unsigned short)6] [i_15]);
                }
            }
            var_88 = ((/* implicit */long long int) max((var_88), (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-14303)), (((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) / (2147483635)))) | (((((/* implicit */_Bool) var_9)) ? (var_3) : (0U))))))))));
            var_89 &= ((/* implicit */short) ((((((/* implicit */int) arr_12 [i_2] [i_2 - 1])) <= (((/* implicit */int) arr_12 [i_2 - 2] [i_2 - 3])))) ? (((((/* implicit */long long int) var_13)) / (var_16))) : (((max((((/* implicit */long long int) 3660682391U)), (3237431469398713916LL))) & (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_10])))))));
        }
        arr_96 [i_2 - 3] = ((/* implicit */unsigned int) ((((var_3) == (((/* implicit */unsigned int) arr_79 [i_2] [i_2] [i_2] [i_2] [i_2 + 1] [i_2] [i_2 - 4])))) || (((/* implicit */_Bool) (((_Bool)1) ? (arr_79 [i_2] [20LL] [21LL] [20LL] [i_2 + 1] [i_2] [i_2 + 1]) : (arr_79 [i_2] [i_2] [i_2 - 2] [i_2 - 2] [i_2 - 4] [i_2 - 2] [i_2 - 3]))))));
    }
    var_90 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned int) var_0)) : (max((((/* implicit */unsigned int) var_6)), (var_12))))) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)97)))));
    var_91 = var_10;
    var_92 = ((/* implicit */unsigned short) min((var_92), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (3237431469398713926LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (min((((/* implicit */unsigned int) var_18)), (var_3))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))))))))));
}
