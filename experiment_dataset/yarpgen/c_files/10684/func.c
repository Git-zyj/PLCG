/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10684
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((_Bool) ((long long int) 10793486769590952767ULL)));
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 2] [i_3 + 1]))) - (1363163767U)));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 2; i_4 < 21; i_4 += 4) /* same iter space */
                        {
                            var_15 -= ((((/* implicit */_Bool) arr_13 [i_0 - 1])) ? (((long long int) var_13)) : ((+(var_13))));
                            var_16 = ((/* implicit */long long int) (+(((/* implicit */int) arr_16 [i_0] [i_1 + 1] [(short)14] [20LL] [i_1 - 2] [i_1]))));
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15765))) : (var_4)))))));
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((3419358155102258750ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12022))))))))))));
                        }
                        for (unsigned char i_5 = 2; i_5 < 21; i_5 += 4) /* same iter space */
                        {
                            var_19 = (!(((/* implicit */_Bool) 10793486769590952766ULL)));
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) arr_16 [i_2] [i_2] [i_5 + 1] [16LL] [i_5] [i_5]))));
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((9U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3 - 2]))))))));
                            var_22 = (~(((((/* implicit */_Bool) (signed char)62)) ? (var_13) : (-9076424235075538568LL))));
                        }
                        var_23 = (-(10793486769590952766ULL));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 4; i_6 < 23; i_6 += 3) 
                        {
                            var_24 *= ((/* implicit */_Bool) ((signed char) arr_9 [i_1 - 1] [i_3 - 1]));
                            var_25 = (-(((/* implicit */int) arr_16 [i_6 - 1] [i_6 - 1] [i_6] [i_6] [i_6 - 4] [i_6])));
                        }
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (unsigned short)12022))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_8 = 2; i_8 < 16; i_8 += 4) 
        {
            for (int i_9 = 2; i_9 < 16; i_9 += 2) 
            {
                for (long long int i_10 = 1; i_10 < 16; i_10 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned char) (~(((unsigned int) 2256708416U))));
                        arr_33 [i_7] [i_10 + 1] [i_9] [i_10] [13ULL] = ((/* implicit */short) (~((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_7] [i_7]))) <= (arr_6 [8] [i_8] [i_8]))))))));
                        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) 10793486769590952786ULL))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_7] [i_7])) ? (var_10) : (((/* implicit */unsigned long long int) 9076424235075538567LL)))))));
        var_30 = ((/* implicit */_Bool) (signed char)15);
    }
    for (int i_11 = 3; i_11 < 11; i_11 += 4) 
    {
        var_31 &= ((/* implicit */unsigned char) (-((~(((/* implicit */int) ((var_0) <= (var_12))))))));
        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_5) < (arr_35 [i_11] [i_11 - 3]))))) : (((((var_12) + (9223372036854775807LL))) << (((((/* implicit */int) (_Bool)1)) - (1))))))))));
        /* LoopNest 2 */
        for (unsigned short i_12 = 0; i_12 < 14; i_12 += 2) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    arr_40 [i_11] [i_12] [i_12] [i_13] = (-((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_11] [i_12]))) >= (5627901572549693342ULL)))))));
                    arr_41 [(unsigned short)2] [(unsigned short)2] [4LL] = ((/* implicit */_Bool) (-(((/* implicit */int) (((~(9076424235075538567LL))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 10793486769590952739ULL)))))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_14 = 1; i_14 < 13; i_14 += 3) 
                    {
                        arr_44 [0] [0] [i_13] [i_14] = ((/* implicit */unsigned int) ((long long int) (~(((/* implicit */int) (signed char)52)))));
                        var_33 -= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) 9223372036853727232LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)32768)))));
                        arr_45 [i_11 + 2] [i_12] [i_12] [i_13] [i_14] = ((/* implicit */int) arr_3 [i_12] [i_12]);
                    }
                    for (long long int i_15 = 1; i_15 < 12; i_15 += 1) 
                    {
                        arr_48 [i_15] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-1669930612), (arr_30 [i_11] [i_11] [i_11])))) ? ((-(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (var_8)));
                        var_34 = var_5;
                        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) 2634712592082838271LL))));
                        var_36 += ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_32 [i_15 + 1] [i_11 - 2] [i_11 + 1] [i_11 + 3]))))));
                        var_37 &= ((/* implicit */int) max((((/* implicit */long long int) (unsigned short)43039)), (-7330676892253341498LL)));
                    }
                    var_38 = (unsigned char)191;
                }
            } 
        } 
        /* LoopSeq 4 */
        for (long long int i_16 = 0; i_16 < 14; i_16 += 3) 
        {
            var_39 = ((/* implicit */long long int) arr_30 [i_11 + 1] [i_11 + 1] [i_11 + 1]);
            /* LoopNest 2 */
            for (unsigned short i_17 = 0; i_17 < 14; i_17 += 2) 
            {
                for (long long int i_18 = 0; i_18 < 14; i_18 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_19 = 2; i_19 < 11; i_19 += 3) 
                        {
                            var_40 += ((/* implicit */unsigned char) ((((/* implicit */long long int) 4294967295U)) & (790846219640867006LL)));
                            var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_15 [i_11] [i_16] [i_17] [i_17] [i_18] [20LL]) / (-9223372036853727217LL)))) ? (((unsigned int) (unsigned short)37444)) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            var_42 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)35791))))) ? (arr_18 [i_11] [i_11 + 2] [i_17] [i_11 + 2] [i_17] [i_11] [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_35 [i_11 - 3] [i_11 - 3]))))));
                            arr_58 [i_19] [i_16] [i_17] [i_11] [i_16] [i_11] = ((/* implicit */int) (~(-7746679322198357087LL)));
                            arr_59 [i_16] [i_17] [i_16] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)35801)) ? (268435455LL) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_19] [i_18]))))));
                        }
                        for (unsigned char i_20 = 0; i_20 < 14; i_20 += 2) 
                        {
                            var_43 = (~((+(arr_32 [i_11 + 3] [i_11 - 2] [i_17] [14LL]))));
                            arr_64 [i_11] [i_11] [i_16] [i_16] [2LL] [i_18] [i_16] = ((((((arr_51 [i_11]) + (9223372036854775807LL))) << (((((arr_51 [i_11]) + (4460749398629494652LL))) - (12LL))))) - (((((/* implicit */long long int) ((/* implicit */int) arr_49 [i_20] [i_11 - 3] [(unsigned short)11]))) % (arr_51 [i_11 - 2]))));
                            var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) arr_19 [i_11] [i_11] [i_11] [i_11 - 3] [i_11 - 2] [i_11])) == (-7746679322198357088LL)))) == (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) ((((/* implicit */int) (unsigned char)232)) == (((/* implicit */int) (unsigned short)52955))))))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_21 = 0; i_21 < 14; i_21 += 2) 
                        {
                            var_45 -= ((/* implicit */unsigned int) (~(17614789043604274568ULL)));
                            var_46 = ((/* implicit */unsigned char) (!(((var_4) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)34)))))));
                        }
                        var_47 &= ((/* implicit */long long int) ((unsigned short) ((unsigned long long int) ((short) (_Bool)1))));
                    }
                } 
            } 
            arr_67 [i_16] [i_16] = ((/* implicit */long long int) (+(2147483647)));
            var_48 = arr_56 [i_11] [i_11] [i_11 + 2] [i_11 + 3] [i_11] [i_11 - 1];
        }
        for (long long int i_22 = 3; i_22 < 10; i_22 += 3) 
        {
            var_49 += ((/* implicit */unsigned long long int) var_0);
            var_50 = ((/* implicit */unsigned short) arr_61 [i_11] [i_22]);
        }
        /* vectorizable */
        for (unsigned long long int i_23 = 0; i_23 < 14; i_23 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_24 = 0; i_24 < 14; i_24 += 4) 
            {
                for (long long int i_25 = 2; i_25 < 12; i_25 += 3) 
                {
                    {
                        var_51 = ((/* implicit */signed char) max((var_51), (((/* implicit */signed char) (((-(arr_71 [i_11 + 3] [(unsigned char)7]))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 831955030105277047ULL)))))))));
                        var_52 -= ((/* implicit */unsigned char) var_3);
                    }
                } 
            } 
            var_53 += 5627901572549693342ULL;
            arr_77 [i_11] [i_23] = ((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned char)29)))) * (((((/* implicit */int) (unsigned short)46680)) / (((/* implicit */int) (unsigned short)65535))))));
            arr_78 [2LL] [i_23] = ((/* implicit */int) ((((/* implicit */_Bool) -5082419932143478874LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46680))) : (arr_43 [i_11] [i_11 - 3] [i_11] [i_11 - 3] [i_11 - 2] [(_Bool)1])));
        }
        for (int i_26 = 0; i_26 < 14; i_26 += 2) 
        {
            var_54 = ((/* implicit */unsigned char) min((var_54), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) (-9223372036854775807LL - 1LL)))) == (((/* implicit */int) arr_7 [i_11 - 1] [i_11 - 1] [i_11 - 3] [i_11])))))));
            arr_81 [i_11 - 1] [i_26] = ((/* implicit */unsigned long long int) ((int) max((((281474976694272LL) / (8769981938603286064LL))), (((9009542736689033069LL) ^ (var_13))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_27 = 0; i_27 < 14; i_27 += 4) 
            {
                arr_84 [i_11 + 3] [i_26] [12ULL] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_24 [i_26])) ? (2385281930U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_26] [0ULL])))))));
                /* LoopSeq 2 */
                for (int i_28 = 1; i_28 < 13; i_28 += 2) 
                {
                    arr_87 [i_28] [i_28] [i_28] [i_11] = ((unsigned long long int) ((((/* implicit */long long int) arr_9 [9LL] [9LL])) <= (var_4)));
                    arr_88 [i_28] = arr_15 [i_11] [i_11] [i_11] [i_11 - 3] [(unsigned char)9] [(unsigned short)22];
                }
                for (short i_29 = 2; i_29 < 13; i_29 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_30 = 0; i_30 < 14; i_30 += 2) 
                    {
                        arr_93 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27] [i_27] = ((/* implicit */_Bool) var_6);
                        var_55 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) -3052039075185034352LL))))) ? (8995490971586747086ULL) : (((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */unsigned long long int) 249045408)) : (var_10)))));
                        var_56 = var_2;
                        arr_94 [i_11] [i_26] [i_27] [i_26] [i_30] |= ((/* implicit */_Bool) (-((~(arr_1 [i_11])))));
                        var_57 = ((/* implicit */int) min((var_57), (((/* implicit */int) 261933877U))));
                    }
                    for (long long int i_31 = 3; i_31 < 11; i_31 += 3) 
                    {
                        var_58 = ((/* implicit */int) var_0);
                        var_59 = ((/* implicit */_Bool) min((var_59), ((!(((/* implicit */_Bool) arr_42 [i_11] [i_11 + 2] [i_29 - 1] [i_11]))))));
                    }
                    for (long long int i_32 = 2; i_32 < 13; i_32 += 2) 
                    {
                        var_60 = ((/* implicit */short) min((var_60), (((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_11 + 1] [i_11 - 2] [i_11 - 2] [i_11 + 1] [i_26] [i_11 + 1])) ? (arr_11 [i_11] [i_11 - 1] [i_26] [i_29 - 2] [i_11 - 1] [i_26]) : (arr_11 [i_11] [i_11 + 3] [i_29] [i_29] [i_29] [i_29]))))));
                        arr_101 [i_29] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)104))) == (var_2)));
                    }
                    arr_102 [i_11 + 1] [i_11 + 1] [i_26] [i_27] [i_27] [i_29] = ((/* implicit */_Bool) (~(((var_4) / (((/* implicit */long long int) ((/* implicit */int) arr_99 [i_11 + 2] [i_26] [i_27] [i_29 - 2])))))));
                    arr_103 [i_11] [0LL] [i_27] = ((/* implicit */unsigned char) (~(((long long int) (_Bool)1))));
                    arr_104 [13] [i_26] [i_27] [i_29] = ((/* implicit */unsigned long long int) ((var_12) < (var_13)));
                    arr_105 [i_11] [i_11] [i_26] [11LL] [i_27] [3LL] = ((/* implicit */long long int) arr_91 [0] [10U] [1ULL] [i_27] [i_29]);
                }
                var_61 = ((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_11 - 2] [i_26]))));
            }
        }
        /* LoopNest 3 */
        for (int i_33 = 0; i_33 < 14; i_33 += 3) 
        {
            for (unsigned int i_34 = 3; i_34 < 11; i_34 += 2) 
            {
                for (long long int i_35 = 1; i_35 < 13; i_35 += 2) 
                {
                    {
                        var_62 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((((_Bool)1) ? (-1636799861428098578LL) : (var_4))) - (4747247584572200525LL)))) ? (2058402343) : (max(((+(((/* implicit */int) (unsigned char)226)))), ((~(arr_53 [5] [i_33] [4LL] [i_35 + 1])))))));
                        arr_116 [i_11] [i_33] [i_34] = ((/* implicit */long long int) (-((~(((int) (-2147483647 - 1)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_36 = 0; i_36 < 14; i_36 += 2) 
                        {
                            arr_119 [i_11] [i_33] [i_34 + 1] [i_35] [i_35 - 1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((var_11) << (((4210222376U) - (4210222365U))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_66 [i_11] [i_11] [i_34] [12LL] [i_36])))))))))));
                            var_63 = ((/* implicit */unsigned int) var_0);
                            arr_120 [9LL] [9LL] [i_35 + 1] [i_35] [i_35 + 1] = (-(((arr_97 [i_34] [i_34] [i_34] [i_34 - 3] [i_34]) | (arr_92 [i_35 - 1]))));
                        }
                        arr_121 [(signed char)12] [i_33] [i_33] [i_35] = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
                    }
                } 
            } 
        } 
    }
    var_64 = ((/* implicit */unsigned char) 4033033390U);
    var_65 = ((var_5) >> ((((-(((((/* implicit */_Bool) 4033033414U)) ? (-4747247584572200525LL) : (304016044371028824LL))))) - (4747247584572200488LL))));
}
