/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146536
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)47023)) : (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 4; i_2 < 16; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 3; i_4 < 14; i_4 += 4) 
                        {
                            var_15 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_11 [i_0] [i_0] [i_2 - 3] [i_3] [i_4 + 4]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0])))))));
                            var_16 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((arr_9 [i_2 - 3] [i_2 - 3] [i_2 - 3]) >= (((/* implicit */long long int) 2851102899U))))), (((unsigned long long int) arr_9 [i_2 - 2] [i_3] [i_4]))));
                            var_17 = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_8 [i_0] [12ULL] [i_2] [i_0] [i_4])), (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_18 = (+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) & (var_4))));
                        }
                        for (int i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (_Bool)1))));
                            arr_15 [i_0] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)26708)), (0)))) ? (((((/* implicit */_Bool) arr_12 [15U] [i_2 + 2] [i_0] [i_2 - 4] [i_2 + 2] [i_2])) ? (-758136534) : (((/* implicit */int) arr_14 [i_2 - 4] [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_1) >> (((((/* implicit */int) arr_14 [(_Bool)1] [i_1] [i_2] [i_3] [(unsigned short)10])) - (22126)))))))))));
                            var_20 = ((/* implicit */long long int) max((263952992), (((/* implicit */int) (_Bool)1))));
                        }
                        arr_16 [i_3] [i_2 - 1] [i_0] [i_0] [i_1] [6U] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_8 [i_0] [(signed char)14] [i_2] [i_3] [4ULL])), (var_9)));
                        arr_17 [i_0] [i_1] = ((/* implicit */signed char) var_13);
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_8))))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)73)) / (534967199)));
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(var_3)))) == (arr_12 [i_0] [i_0] [i_1] [i_1] [i_1] [i_6]))))));
                var_24 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121))) : (4193646935U)));
            }
        }
        for (int i_7 = 3; i_7 < 16; i_7 += 3) 
        {
            var_25 = ((/* implicit */unsigned char) var_1);
            var_26 = ((/* implicit */signed char) ((unsigned int) min((arr_21 [i_7 - 3] [i_7] [i_7 - 3] [i_7]), (var_3))));
        }
    }
    for (signed char i_8 = 2; i_8 < 21; i_8 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            arr_30 [(short)16] [i_9] = var_12;
            var_27 = ((/* implicit */long long int) var_1);
            var_28 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) (unsigned short)65532)))));
        }
        var_29 ^= ((/* implicit */long long int) ((unsigned char) (~(arr_28 [i_8] [i_8 + 2]))));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_29 [i_8 - 1] [i_8]))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned short)38851)) * (((/* implicit */int) arr_24 [i_8]))))))) : (var_0)));
        var_31 = ((/* implicit */int) var_10);
        /* LoopSeq 4 */
        for (int i_10 = 0; i_10 < 23; i_10 += 3) 
        {
            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (-((~((-(var_0))))))))));
            var_33 = (!(((/* implicit */_Bool) var_0)));
            /* LoopSeq 3 */
            for (int i_11 = 2; i_11 < 20; i_11 += 4) 
            {
                arr_37 [i_11] [i_10] [i_10] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)171)) : (758136557)));
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 2) 
                {
                    for (unsigned short i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        {
                            arr_42 [i_10] [i_10] [i_10] [i_10] [16LL] [(unsigned char)8] = ((/* implicit */unsigned long long int) min((((long long int) 3088781651U)), (((/* implicit */long long int) var_3))));
                            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) 8157660680421104471ULL)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) (_Bool)1))));
                            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_28 [19ULL] [i_11]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : ((-(min((((/* implicit */unsigned int) var_7)), (var_5)))))));
                            var_36 += ((/* implicit */signed char) (+(11)));
                        }
                    } 
                } 
                arr_43 [i_8] [i_10] [i_10] = ((/* implicit */unsigned char) min((max((arr_28 [i_8 + 2] [i_11 + 1]), (arr_28 [i_8 + 2] [i_11 + 2]))), (((/* implicit */unsigned long long int) var_9))));
                /* LoopSeq 1 */
                for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                {
                    var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((int) (+(((/* implicit */int) var_6)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [16ULL] [i_8] [i_11 + 1])) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) arr_25 [(signed char)20]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-51098956019136566LL))))))));
                    var_38 = ((/* implicit */int) var_1);
                    /* LoopSeq 3 */
                    for (unsigned int i_15 = 2; i_15 < 19; i_15 += 1) 
                    {
                        arr_49 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_45 [i_10] [i_8 + 1])) <= (((/* implicit */int) arr_44 [i_8 + 1] [i_10] [10]))))) >= ((~(((/* implicit */int) arr_45 [i_10] [i_8 + 1]))))));
                        var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) ((_Bool) var_5)))));
                        var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_7) ^ (((/* implicit */int) arr_24 [i_8 - 2]))))) ? ((-(((/* implicit */int) arr_24 [i_8 + 1])))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_24 [i_8 - 2])), (var_14))))));
                    }
                    for (signed char i_16 = 0; i_16 < 23; i_16 += 4) 
                    {
                        arr_53 [i_8] [(unsigned short)1] [i_8] [i_8] [i_8] [i_10] [i_8] = ((/* implicit */_Bool) arr_25 [i_8]);
                        var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) min((1666531938707433361LL), (((/* implicit */long long int) (_Bool)1)))))));
                        arr_54 [i_8 - 1] [i_10] [i_11] [i_10] [i_10] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((arr_52 [(_Bool)1] [i_10] [i_11 + 3] [3LL] [i_16]) + (((/* implicit */long long int) 2184280746U))))) - (((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)(-32767 - 1))), (var_4)))) + (max((11619480661065953863ULL), (((/* implicit */unsigned long long int) (signed char)-107))))))));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 2) 
                    {
                        arr_57 [i_17] [i_8] [i_10] [i_10] [i_10] [(short)14] [i_8] = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) arr_35 [i_10])), (arr_52 [i_8] [10LL] [(unsigned char)10] [i_14] [i_17]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_0)))))));
                        var_42 = ((/* implicit */signed char) min((var_2), (((/* implicit */long long int) (signed char)-8))));
                    }
                    var_43 |= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2340431411U)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))), (((unsigned long long int) (unsigned char)180)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
                var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) -1307862293))));
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
            {
                var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */int) ((unsigned char) 1475306065))) : (((/* implicit */int) var_8))));
                /* LoopNest 2 */
                for (int i_19 = 1; i_19 < 21; i_19 += 2) 
                {
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                    {
                        {
                            arr_65 [i_8] [i_8] [i_10] [i_8] = var_13;
                            var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) ((((int) arr_44 [i_8 - 2] [i_8] [i_19 + 1])) % (((/* implicit */int) max((var_14), (arr_44 [i_8 + 2] [i_8] [i_19 + 2])))))))));
                            var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_55 [i_18] [i_18] [i_19 + 1] [(unsigned char)15] [i_20]) ? (((/* implicit */int) arr_55 [(signed char)6] [(signed char)6] [i_19 + 1] [i_19] [i_20])) : (((/* implicit */int) arr_55 [i_10] [3LL] [i_19 + 2] [18U] [i_20]))))) ? ((-(var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_55 [(unsigned short)18] [i_19] [i_19 - 1] [(signed char)12] [i_19])))))));
                        }
                    } 
                } 
                var_48 = ((/* implicit */_Bool) (((-(max((((/* implicit */unsigned int) 1012708758)), (arr_50 [i_8] [i_18] [i_10] [i_8] [i_8] [i_18]))))) / (((/* implicit */unsigned int) (-(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)17681)))))))));
            }
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
            {
                var_49 = ((/* implicit */unsigned short) min(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)1))));
                var_50 = ((/* implicit */unsigned short) max((var_50), (((/* implicit */unsigned short) ((_Bool) min((1584295038495132692ULL), (((/* implicit */unsigned long long int) (unsigned short)0))))))));
            }
            var_51 = ((/* implicit */_Bool) max((var_51), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) ((arr_48 [i_8] [i_8] [i_10] [i_10] [i_10]) >= (((/* implicit */unsigned long long int) var_11))))), (min((arr_61 [i_8] [i_10] [i_10]), (((/* implicit */int) (signed char)103))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483633)) ? (arr_64 [i_8] [i_8] [i_8] [i_8] [i_10] [i_10] [i_10]) : (((/* implicit */unsigned int) -758136529))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_50 [i_8] [i_8 - 1] [i_8 - 2] [i_8 - 1] [i_8 - 2] [i_10])))) : (((min((((/* implicit */long long int) var_3)), (var_11))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)37218)))))))))));
            /* LoopSeq 1 */
            for (unsigned short i_22 = 0; i_22 < 23; i_22 += 2) 
            {
                /* LoopSeq 2 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_24 = 0; i_24 < 23; i_24 += 4) 
                    {
                        var_52 *= ((/* implicit */short) (unsigned short)52012);
                        var_53 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (arr_32 [i_8 + 2]) : (arr_32 [i_8 + 1])))), (((((/* implicit */_Bool) var_14)) ? (var_4) : (((/* implicit */unsigned int) arr_32 [i_8 - 2]))))));
                    }
                    arr_75 [i_8 + 1] [i_10] [i_22] [i_10] = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) -2147483626)), (arr_36 [i_10] [i_22])))), (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)114)))))));
                }
                for (unsigned int i_25 = 2; i_25 < 21; i_25 += 4) 
                {
                    arr_80 [i_25] [i_10] [i_10] [i_8] = ((/* implicit */int) var_13);
                    var_54 |= ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_72 [i_8 - 1] [i_8 - 1] [i_22] [i_22])), (((((/* implicit */_Bool) 758136538)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2850))) : (3254870506844451809LL)))));
                    /* LoopSeq 1 */
                    for (long long int i_26 = 3; i_26 < 20; i_26 += 2) 
                    {
                        var_55 = ((/* implicit */unsigned short) min((602782686285578243ULL), (((/* implicit */unsigned long long int) 0U))));
                        var_56 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_70 [16] [16] [i_25] [i_26])) ? (max((((/* implicit */int) var_8)), (-1))) : (((/* implicit */int) ((_Bool) (((_Bool)1) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_83 [i_10] [17])))))))));
                        var_57 = ((/* implicit */short) max((var_57), (((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_25] [i_8] [i_8 - 1] [i_25 + 2] [i_26 - 3])) ? (var_4) : (arr_31 [i_26 - 3] [i_8 + 1] [i_25 - 2])))), (((((/* implicit */long long int) 273070580)) / (1666531938707433361LL))))))));
                        arr_85 [i_8] [i_10] [i_10] = ((/* implicit */signed char) arr_70 [i_26 - 2] [i_25 - 2] [i_10] [i_8 + 2]);
                    }
                    var_58 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)0) ? (649605963U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28317)))))) ? (((long long int) arr_76 [i_25 + 1] [i_25 - 1] [i_8 + 2] [i_8 + 1])) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_8 + 2])) ? (((/* implicit */int) arr_24 [i_8 + 2])) : (((/* implicit */int) arr_24 [i_8 - 2])))))));
                }
                var_59 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_26 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_8] [i_10] [i_8 + 1]))) : (var_1)))));
            }
        }
        for (long long int i_27 = 0; i_27 < 23; i_27 += 1) 
        {
            var_60 = ((/* implicit */_Bool) (~(3474091280U)));
            var_61 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) var_13))) + (144115188008747008LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_87 [i_27]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [i_8 - 2] [i_27] [i_8 + 1] [i_27] [i_27] [i_8] [i_8])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_87 [i_27]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_78 [i_8 - 1] [i_8 + 1]))) : (min((((/* implicit */long long int) (_Bool)1)), (var_2)))))));
            var_62 = ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_59 [i_8 + 1] [i_8 - 1] [i_8 - 2]), (((/* implicit */unsigned char) (_Bool)0)))))));
        }
        for (long long int i_28 = 0; i_28 < 23; i_28 += 3) 
        {
            var_63 = ((/* implicit */short) min((var_63), (((/* implicit */short) arr_41 [i_8] [i_8] [i_28] [12LL] [i_28] [i_28] [i_28]))));
            arr_93 [i_28] = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) var_6))))))))) : (((((/* implicit */_Bool) var_6)) ? (max((948617517U), (((/* implicit */unsigned int) (_Bool)0)))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)10), (((/* implicit */unsigned short) var_12)))))))));
            var_64 ^= ((/* implicit */long long int) var_10);
            arr_94 [i_8] [i_28] [i_28] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_35 [i_28]), (((/* implicit */int) arr_56 [i_8 + 1]))))) ? (((unsigned int) (short)28072)) : (((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_83 [i_28] [i_28]))))) : (var_5)))));
            /* LoopSeq 1 */
            for (unsigned char i_29 = 0; i_29 < 23; i_29 += 1) 
            {
                var_65 = ((/* implicit */signed char) (-(((/* implicit */int) max(((_Bool)0), ((_Bool)1))))));
                var_66 -= ((/* implicit */unsigned char) (~(arr_90 [i_8 - 1])));
                var_67 = ((/* implicit */long long int) min((var_67), (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_2)) : (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13520)))))));
            }
        }
        for (int i_30 = 0; i_30 < 23; i_30 += 3) 
        {
            var_68 = ((/* implicit */short) min(((+(((((/* implicit */int) arr_98 [i_8 - 1] [i_30] [8])) - (arr_46 [i_8] [i_8] [i_30] [i_30]))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52012))) >= (2115613159U))))));
            var_69 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)52022))));
            var_70 = ((/* implicit */unsigned int) min((var_70), (((((/* implicit */_Bool) min(((short)-1), (((/* implicit */short) min(((_Bool)1), ((_Bool)1))))))) ? (min((arr_34 [i_8] [i_30] [i_30] [i_30]), (((/* implicit */unsigned int) arr_35 [i_8])))) : (min((var_5), (arr_97 [i_8 - 1] [i_30] [i_30])))))));
        }
    }
    var_71 = ((/* implicit */short) var_2);
    var_72 = ((/* implicit */signed char) var_4);
}
