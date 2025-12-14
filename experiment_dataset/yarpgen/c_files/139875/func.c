/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139875
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
    var_20 = ((/* implicit */int) (short)(-32767 - 1));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [(short)17] = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) arr_0 [21LL])), (arr_1 [i_0] [i_0])))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 24; i_2 += 3) 
            {
                for (unsigned short i_3 = 4; i_3 < 21; i_3 += 3) 
                {
                    {
                        arr_11 [4U] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) var_4)), (arr_8 [(unsigned char)12] [(unsigned char)12] [i_2 + 1] [i_3 - 1])))));
                        arr_12 [2] [i_1] [2] [2] = ((((14734746859462224777ULL) - (((/* implicit */unsigned long long int) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) var_4))))))) * (((/* implicit */unsigned long long int) max((arr_7 [i_2 + 1] [i_2 - 2] [i_3 - 4] [i_1]), (((/* implicit */int) var_7))))));
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        arr_15 [i_4] [(unsigned short)3] &= ((/* implicit */unsigned short) max((((/* implicit */long long int) (signed char)-32)), (4LL)));
        arr_16 [i_4] [i_4] = (~(4294967293U));
    }
    /* LoopSeq 2 */
    for (unsigned int i_5 = 2; i_5 < 22; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            arr_21 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) - ((-(((/* implicit */int) (short)(-32767 - 1)))))));
            arr_22 [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)(-32767 - 1)))));
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                for (signed char i_8 = 1; i_8 < 21; i_8 += 3) 
                {
                    {
                        arr_29 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((unsigned long long int) (short)32745));
                        arr_30 [i_5] [0LL] [i_7] [i_8 - 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_20 [i_5 + 1]), (arr_20 [i_6]))))));
                        arr_31 [i_8] [i_8] [(short)22] [i_8 + 2] = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) min((arr_26 [i_5] [i_5] [i_5] [10LL] [i_5 - 2]), (((/* implicit */unsigned int) var_3))))))));
                        arr_32 [(unsigned char)22] [(unsigned char)22] [(unsigned char)22] [i_8] = ((/* implicit */short) min((1907340083111632289LL), (((/* implicit */long long int) (unsigned char)160))));
                    }
                } 
            } 
            arr_33 [(unsigned short)8] = ((/* implicit */int) ((((((/* implicit */int) (unsigned char)174)) < (((/* implicit */int) arr_25 [(short)21] [i_5 + 1] [i_5 - 2] [i_5 + 1])))) && ((_Bool)0)));
        }
        for (int i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_10 = 0; i_10 < 23; i_10 += 3) 
            {
                arr_41 [i_5] = ((/* implicit */long long int) ((2375026277U) == (((/* implicit */unsigned int) (((-2147483647 - 1)) | (arr_3 [i_9] [i_9]))))));
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    for (unsigned int i_12 = 0; i_12 < 23; i_12 += 4) 
                    {
                        {
                            arr_47 [i_11] = ((/* implicit */unsigned short) max((63U), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_9)), (arr_44 [(signed char)6] [i_11] [i_10] [i_9] [i_5]))))));
                            arr_48 [i_11] = ((/* implicit */_Bool) 2375026270U);
                        }
                    } 
                } 
            }
            for (unsigned char i_13 = 0; i_13 < 23; i_13 += 4) 
            {
                arr_53 [i_13] [i_13] [i_13] [(short)6] = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_44 [i_9] [i_5 + 1] [i_5] [i_5] [i_5])) + (((/* implicit */int) ((short) arr_38 [i_5] [i_5])))))));
                arr_54 [i_5] [i_9] [11U] = ((/* implicit */int) (short)(-32767 - 1));
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_14 = 0; i_14 < 23; i_14 += 4) 
            {
                arr_58 [i_5] [i_9] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)0))));
                /* LoopNest 2 */
                for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                {
                    for (long long int i_16 = 0; i_16 < 23; i_16 += 4) 
                    {
                        {
                            arr_64 [1U] [1U] [i_14] [i_15] [i_15] [i_15] [i_14] = ((/* implicit */long long int) ((4294967275U) >> (((arr_23 [i_5 - 1] [i_15 - 1] [17ULL] [i_15]) + (432428783)))));
                            arr_65 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) arr_38 [i_5 - 1] [i_15 - 1])) / (((/* implicit */int) (unsigned short)65530))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_17 = 0; i_17 < 23; i_17 += 4) 
                {
                    for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                    {
                        {
                            arr_71 [(signed char)15] [(signed char)15] [i_18] [(_Bool)1] [(signed char)15] [i_14] [(signed char)9] = ((/* implicit */long long int) ((arr_60 [i_18] [i_17] [i_18] [i_18] [i_18 + 1] [i_17]) > (arr_60 [i_18] [(unsigned short)15] [(short)4] [(short)9] [i_18 + 1] [i_14])));
                            arr_72 [i_14] [i_14] [i_18] [i_14] = ((/* implicit */signed char) ((-1907340083111632289LL) >= (((/* implicit */long long int) -1236144271))));
                            arr_73 [i_5] [i_9] [(short)0] [i_17] [(short)0] [(short)0] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            }
            for (short i_19 = 0; i_19 < 23; i_19 += 4) 
            {
                arr_76 [i_5] = ((/* implicit */unsigned int) var_13);
                arr_77 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) min((min((-7791352978006801447LL), (((/* implicit */long long int) (signed char)(-127 - 1))))), (((/* implicit */long long int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) < (67108864U)))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_20 = 0; i_20 < 23; i_20 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_21 = 4; i_21 < 22; i_21 += 3) 
                    {
                        arr_84 [i_5 + 1] [i_5] [i_5 - 1] [i_5] = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) (_Bool)1)), (2122401483))) < (((/* implicit */int) ((((/* implicit */long long int) -2122401499)) >= (7791352978006801445LL))))));
                        arr_85 [i_21] [i_20] [i_19] [(signed char)11] [(signed char)11] = ((((/* implicit */int) arr_69 [i_5] [i_9] [i_19] [i_20] [i_21 - 1])) / ((+(min(((-2147483647 - 1)), (32704))))));
                    }
                    arr_86 [i_5 - 1] [i_5] [i_5] [i_5 - 1] [i_5] [(_Bool)1] = ((/* implicit */long long int) (+(((/* implicit */int) (short)32759))));
                }
                for (unsigned char i_22 = 0; i_22 < 23; i_22 += 1) 
                {
                    arr_91 [i_19] = ((/* implicit */_Bool) var_10);
                    arr_92 [i_5] [i_22] = ((/* implicit */unsigned short) 0ULL);
                    arr_93 [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)182)), (2122401486)));
                    arr_94 [i_22] [i_9] [i_19] [i_19] = ((/* implicit */signed char) min((((/* implicit */unsigned int) -2122401502)), (((arr_79 [i_5] [i_9] [i_5] [10U] [i_5 + 1] [i_19]) ^ (arr_79 [i_5] [i_9] [i_9] [i_5] [i_5 + 1] [i_19])))));
                    arr_95 [i_5 - 1] [(short)14] [i_22] [i_5] [i_5] [(_Bool)1] = min((((/* implicit */long long int) 2122401475)), (-7791352978006801441LL));
                }
                for (long long int i_23 = 1; i_23 < 20; i_23 += 2) 
                {
                    arr_98 [i_5 - 1] [i_9] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */short) min((((int) arr_52 [i_5] [i_5] [i_5] [i_5])), (((/* implicit */int) (!(((/* implicit */_Bool) (short)0)))))));
                    arr_99 [i_5 + 1] [i_5] [i_5 + 1] [i_5] [i_5 + 1] [i_5 - 1] = ((/* implicit */int) var_9);
                }
            }
            arr_100 [i_5] = (((+(max((((/* implicit */long long int) arr_6 [(_Bool)1] [(short)24] [i_9])), (-7791352978006801427LL))))) < (min((549755813887LL), (((/* implicit */long long int) (short)32753)))));
            arr_101 [(unsigned short)2] [i_9] [i_9] = ((/* implicit */unsigned short) (unsigned char)253);
        }
        arr_102 [i_5] = ((/* implicit */unsigned long long int) var_9);
        /* LoopNest 3 */
        for (unsigned int i_24 = 1; i_24 < 20; i_24 += 4) 
        {
            for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
            {
                for (unsigned char i_26 = 1; i_26 < 20; i_26 += 1) 
                {
                    {
                        arr_111 [(unsigned char)6] [(unsigned char)6] [(unsigned char)6] [i_24] |= ((/* implicit */unsigned short) (-(((/* implicit */int) min((min(((unsigned short)61665), ((unsigned short)3350))), (((/* implicit */unsigned short) ((((/* implicit */int) (short)32759)) < (((/* implicit */int) (_Bool)1))))))))));
                        arr_112 [i_5] [i_5] [i_5] [(unsigned short)20] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)72))));
                        arr_113 [i_5] [(_Bool)1] [(short)10] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) min((arr_109 [(short)10] [(short)10] [i_25 - 1] [(_Bool)1]), (((/* implicit */unsigned char) (_Bool)1))))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_25])) || (((/* implicit */_Bool) 0U)))))))), ((-((+(786432U)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_27 = 4; i_27 < 22; i_27 += 1) 
        {
            arr_117 [(unsigned short)12] [i_27] = ((/* implicit */unsigned char) max((((arr_74 [i_27 - 4] [i_27 - 1]) != (((/* implicit */int) arr_4 [(signed char)17] [i_27 - 4] [i_27])))), (((((/* implicit */_Bool) (short)7107)) && (((/* implicit */_Bool) (short)10350))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_28 = 4; i_28 < 22; i_28 += 2) /* same iter space */
            {
                arr_120 [i_28] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9073871993406329342LL)) && (((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_9))))));
                arr_121 [i_28] [i_28] |= ((/* implicit */unsigned int) var_3);
                arr_122 [i_5 - 2] [i_27] [(unsigned short)18] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)144)) < (((/* implicit */int) (unsigned short)28636))));
                /* LoopNest 2 */
                for (unsigned long long int i_29 = 1; i_29 < 22; i_29 += 3) 
                {
                    for (unsigned long long int i_30 = 0; i_30 < 23; i_30 += 4) 
                    {
                        {
                            arr_128 [i_27] [i_29] [i_27] [i_27] [i_27] = (_Bool)1;
                            arr_129 [(unsigned char)2] [(unsigned char)2] [i_28] [(unsigned char)2] [(unsigned char)2] = ((/* implicit */_Bool) 1072693248);
                            arr_130 [i_30] [i_27] [i_5 - 2] [i_28 - 4] [i_27] [i_27] [i_5 - 2] = ((/* implicit */long long int) ((((-8383324) + (2147483647))) >> (((/* implicit */int) (_Bool)0))));
                            arr_131 [i_5] [i_5] [i_5] [i_5] [i_5] [i_27] [i_5] = ((/* implicit */_Bool) (~(((((/* implicit */long long int) 1072693245)) | (arr_88 [(short)18] [i_29] [(short)18] [i_27])))));
                        }
                    } 
                } 
                arr_132 [i_5] [i_5] [i_28] |= (!(((/* implicit */_Bool) arr_63 [13] [i_28] [i_28] [i_28] [i_27 - 4] [i_28 - 4] [i_27 - 4])));
            }
            for (short i_31 = 4; i_31 < 22; i_31 += 2) /* same iter space */
            {
                arr_135 [i_31] = ((/* implicit */unsigned int) ((_Bool) (~(-1072693260))));
                arr_136 [i_27 + 1] [i_27] = ((/* implicit */unsigned long long int) (!(max(((!(((/* implicit */_Bool) (unsigned char)121)))), (((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_9))))))));
                arr_137 [i_5] [16] [i_5] [i_27] = ((/* implicit */long long int) max((((/* implicit */int) (unsigned char)117)), (min((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))), ((+(2147483647)))))));
            }
        }
        /* vectorizable */
        for (short i_32 = 0; i_32 < 23; i_32 += 3) 
        {
            arr_140 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_139 [i_5 - 1] [i_5 - 2])) == (((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))));
            /* LoopNest 2 */
            for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
            {
                for (short i_34 = 0; i_34 < 23; i_34 += 2) 
                {
                    {
                        arr_145 [i_5] [i_33] = ((/* implicit */unsigned char) -1490543153);
                        arr_146 [(unsigned char)0] [i_33] [(unsigned char)10] [13ULL] [i_33] [(signed char)4] = ((/* implicit */long long int) ((1657837407) > (((/* implicit */int) arr_119 [i_5 - 2] [i_33]))));
                    }
                } 
            } 
        }
        for (unsigned char i_35 = 2; i_35 < 22; i_35 += 4) 
        {
            arr_150 [i_5 - 1] = ((/* implicit */unsigned int) ((arr_39 [i_5] [i_5 - 2] [i_5] [i_5]) || (((/* implicit */_Bool) min((((/* implicit */int) var_7)), ((-(((/* implicit */int) var_6)))))))));
            arr_151 [i_5] = ((/* implicit */unsigned long long int) min((arr_60 [i_5] [i_5] [i_5 - 1] [(short)3] [i_35] [i_35]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_109 [i_5 + 1] [i_5 + 1] [i_35] [i_35])) < (((/* implicit */int) (short)18765)))))));
        }
    }
    for (signed char i_36 = 3; i_36 < 13; i_36 += 3) 
    {
        arr_154 [i_36] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) var_7)), (arr_1 [i_36] [i_36]))))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))));
        /* LoopSeq 2 */
        for (int i_37 = 0; i_37 < 17; i_37 += 4) 
        {
            arr_157 [i_36] = ((/* implicit */unsigned short) min(((+(min((((/* implicit */unsigned int) (signed char)12)), (1813322771U))))), (((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */_Bool) (short)-180)) || (((/* implicit */_Bool) arr_9 [i_37]))))), ((short)-10270))))));
            /* LoopNest 2 */
            for (int i_38 = 0; i_38 < 17; i_38 += 2) 
            {
                for (unsigned short i_39 = 0; i_39 < 17; i_39 += 4) 
                {
                    {
                        arr_162 [i_36] [i_36] [i_36] [(short)15] [i_36] &= ((/* implicit */signed char) ((unsigned char) max((arr_67 [i_36 + 2] [i_36 + 4] [i_36 + 3] [(signed char)12] [22] [i_36 + 2]), (((/* implicit */long long int) var_7)))));
                        arr_163 [i_36] [i_36] [i_36] [i_39] = min((34359738367LL), (((/* implicit */long long int) (!(((1562551559625026654ULL) < (646332052796506920ULL)))))));
                        arr_164 [(_Bool)1] = ((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) 576460751766552576ULL)) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_97 [i_36 + 1] [i_36 + 1] [(short)1] [i_39])), (1046336763U))))))), (var_1)));
                        arr_165 [(short)5] [6U] [i_38] [i_38] = ((/* implicit */unsigned int) arr_138 [i_36 + 4]);
                    }
                } 
            } 
            arr_166 [9] [(short)12] [(short)12] = ((/* implicit */signed char) (-(123775875)));
        }
        /* vectorizable */
        for (unsigned short i_40 = 0; i_40 < 17; i_40 += 1) 
        {
            arr_171 [i_40] [i_40] [i_40] = ((/* implicit */unsigned char) var_11);
            arr_172 [i_36 + 2] [(short)11] [i_40] = ((/* implicit */_Bool) -1119307626271869131LL);
            arr_173 [i_36] [i_36] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (unsigned char)70))));
            arr_174 [i_40] [i_40] [i_40] = ((/* implicit */unsigned char) ((int) (_Bool)1));
        }
        /* LoopNest 3 */
        for (short i_41 = 2; i_41 < 15; i_41 += 3) 
        {
            for (int i_42 = 1; i_42 < 16; i_42 += 3) 
            {
                for (unsigned char i_43 = 0; i_43 < 17; i_43 += 4) 
                {
                    {
                        arr_181 [3ULL] [i_41] [i_41] [12] = ((/* implicit */short) (unsigned char)252);
                        arr_182 [i_36] [i_36] [(unsigned short)6] [i_42] [i_43] [i_43] = ((/* implicit */unsigned char) (~(arr_37 [i_36] [i_41] [i_36])));
                        arr_183 [i_36] [i_41] [i_42 + 1] [i_43] = ((/* implicit */unsigned long long int) arr_138 [i_36]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_44 = 1; i_44 < 1; i_44 += 1) 
        {
            for (short i_45 = 3; i_45 < 14; i_45 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_46 = 2; i_46 < 16; i_46 += 4) 
                    {
                        arr_191 [i_44] [i_44 - 1] = ((/* implicit */short) arr_153 [0LL]);
                        arr_192 [i_44] [i_44] = ((/* implicit */unsigned char) ((arr_40 [(short)12]) && (((/* implicit */_Bool) 9223372036854775800LL))));
                    }
                    arr_193 [i_44] [i_44 - 1] [(short)14] [i_44] = ((/* implicit */unsigned int) var_15);
                }
            } 
        } 
        arr_194 [11LL] = ((/* implicit */_Bool) min(((-(((/* implicit */int) ((_Bool) (unsigned char)255))))), (((/* implicit */int) (unsigned char)81))));
    }
    var_21 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_1)), (max((max((((/* implicit */unsigned long long int) (short)-18647)), (549755813887ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-21385)))))))));
}
