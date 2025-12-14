/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178536
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) ((long long int) arr_0 [i_0] [i_0]));
        arr_4 [i_0] [i_0] = ((/* implicit */short) -7518229856923396506LL);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */short) ((int) (-(((/* implicit */int) (short)1468)))));
        var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_7 [i_1] [i_1]))));
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 21; i_2 += 1) 
        {
            arr_12 [i_2] [i_1] [i_2] = ((/* implicit */short) (+(((/* implicit */int) arr_7 [i_2 + 2] [i_2 - 1]))));
            var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)1469)))))));
            var_19 = ((/* implicit */unsigned long long int) max((var_19), ((-(562949936644096ULL)))));
        }
    }
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        arr_15 [i_3] = ((/* implicit */unsigned long long int) (~((+(((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) (short)-3644)) : (((/* implicit */int) (short)1455))))))));
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned short) arr_13 [i_3]))), ((+(((-331053979) / (((/* implicit */int) (unsigned short)59208))))))));
        arr_17 [i_3] [i_3] = ((/* implicit */short) ((unsigned short) (-(((/* implicit */int) (short)9428)))));
        /* LoopSeq 3 */
        for (short i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)1452)), ((unsigned short)35967)))) > ((-(((/* implicit */int) arr_18 [i_3] [i_4] [i_4])))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    {
                        arr_24 [i_5] = ((/* implicit */unsigned short) ((unsigned char) arr_21 [i_3] [i_5] [i_5]));
                        arr_25 [i_5] [i_4] [i_4] [i_5] [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_13 [i_3]))));
                        arr_26 [i_3] [i_4] [i_5] [i_5] [i_6] = ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_4] [i_4])))));
                    }
                } 
            } 
            arr_27 [i_3] = ((/* implicit */unsigned char) arr_18 [i_3] [i_4] [i_4]);
        }
        for (unsigned int i_7 = 3; i_7 < 23; i_7 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) (-(((unsigned int) (short)1454))));
            arr_30 [i_7 - 2] [i_3] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_13 [i_7])), (arr_19 [i_7] [i_7])))) ? (((/* implicit */int) ((((/* implicit */int) (short)-1454)) == (487769690)))) : ((+(((/* implicit */int) (unsigned char)252))))))));
            var_22 = max((max((((unsigned long long int) (_Bool)1)), (((unsigned long long int) (short)1455)))), (((/* implicit */unsigned long long int) arr_13 [i_7])));
            /* LoopSeq 3 */
            for (short i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                arr_34 [i_7] [i_3] = ((/* implicit */short) (-(((/* implicit */int) max(((short)1455), (((/* implicit */short) ((unsigned char) (unsigned char)4))))))));
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        {
                            arr_41 [i_3] [i_7 - 2] [i_7] [i_8] [i_9] [i_10] = ((/* implicit */short) max((((/* implicit */int) min(((short)1437), (((/* implicit */short) arr_20 [i_7 - 1] [i_7 - 3] [i_7] [i_7 - 1]))))), ((+(((/* implicit */int) arr_20 [i_7 + 1] [i_7 - 1] [i_7 - 3] [i_7 - 3]))))));
                            arr_42 [i_10] [i_9] [i_8] [i_7 + 2] [i_3] = ((/* implicit */unsigned char) 487769688);
                            var_23 = ((int) ((unsigned char) (unsigned char)0));
                        }
                    } 
                } 
                arr_43 [i_8] = ((unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-1461))))) % ((+(2079648466)))));
            }
            /* vectorizable */
            for (unsigned short i_11 = 0; i_11 < 25; i_11 += 1) 
            {
                arr_48 [i_11] [i_7 - 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_3] [i_7])) ? (((/* implicit */int) (short)-1453)) : (((/* implicit */int) (unsigned char)239))))) * ((+(2551242145302384400ULL)))));
                arr_49 [i_3] [i_7] [i_11] = ((/* implicit */_Bool) ((int) (-(((/* implicit */int) arr_46 [i_3] [i_3] [i_3] [i_3])))));
                /* LoopSeq 1 */
                for (short i_12 = 0; i_12 < 25; i_12 += 2) 
                {
                    arr_54 [i_3] [i_7] [i_11] [i_12] = ((/* implicit */unsigned short) (~(arr_19 [i_3] [i_11])));
                    var_24 *= ((/* implicit */unsigned long long int) ((((int) (short)-1455)) & ((+(((/* implicit */int) (short)-1452))))));
                }
                var_25 = ((/* implicit */unsigned short) (+(((long long int) (short)3083))));
                arr_55 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-1454))))) ? (((/* implicit */unsigned long long int) arr_38 [i_3] [i_7 - 3] [i_11] [i_3] [i_7])) : (((arr_19 [i_7 + 1] [i_3]) | (((/* implicit */unsigned long long int) 1038192777))))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_26 += ((/* implicit */short) (-((+((+(((/* implicit */int) (short)-19436))))))));
                arr_59 [i_3] [i_13] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_52 [i_7 - 2] [i_7 - 2] [i_3] [i_3])) ? (((/* implicit */int) arr_52 [i_7 - 1] [i_7 - 3] [i_7] [i_7 - 2])) : (((/* implicit */int) arr_52 [i_7 - 2] [i_7 - 2] [i_7 - 3] [i_7])))));
            }
        }
        for (unsigned short i_14 = 0; i_14 < 25; i_14 += 3) 
        {
            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) max((min(((unsigned char)189), (((/* implicit */unsigned char) (_Bool)1)))), (arr_31 [i_3] [i_14] [i_14]))))));
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 25; i_15 += 1) 
            {
                for (unsigned short i_16 = 4; i_16 < 22; i_16 += 1) 
                {
                    {
                        arr_67 [i_3] [i_15] [i_3] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-1457))));
                        arr_68 [i_15] [i_15] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_17 = 2; i_17 < 23; i_17 += 2) 
                        {
                            arr_71 [i_3] [i_14] [i_14] [i_15] [i_17] [i_14] [i_3] = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) (unsigned char)44)), ((+(16603110290343546632ULL))))), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (unsigned short)6327)))), (((/* implicit */int) (!(((/* implicit */_Bool) 381091261U))))))))));
                            arr_72 [i_3] [i_3] [i_14] [i_15] [i_16] [i_16] [i_15] = ((/* implicit */long long int) arr_14 [i_14] [i_17 + 1]);
                            var_28 *= ((/* implicit */short) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-24007)))))) * (max((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)59208)))))));
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((short) 9223372036854775807LL))) ? ((-(((/* implicit */int) (short)-1463)))) : (((/* implicit */int) (unsigned char)224))))) * (max((((/* implicit */long long int) (!(((/* implicit */_Bool) 381091283U))))), (arr_69 [i_17 + 1] [i_16] [i_15] [i_16 + 2] [i_17 - 1] [i_3] [i_16 - 2]))))))));
                        }
                        /* vectorizable */
                        for (short i_18 = 0; i_18 < 25; i_18 += 1) 
                        {
                            arr_76 [i_15] [i_16 + 3] [i_15] [i_14] [i_18] [i_3] = ((/* implicit */short) ((unsigned char) arr_63 [i_16] [i_16 - 1] [i_15] [i_16 - 1]));
                            arr_77 [i_3] [i_15] [i_15] [i_16 - 3] [i_18] [i_18] = ((unsigned short) (_Bool)1);
                        }
                        /* vectorizable */
                        for (short i_19 = 0; i_19 < 25; i_19 += 1) 
                        {
                            arr_81 [i_15] = ((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned char)144)))) ^ (((int) 3913876012U))));
                            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((unsigned short) (_Bool)1)))));
                            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) 381091260U))));
                            var_32 = ((/* implicit */int) min((var_32), ((~((+(((/* implicit */int) (short)(-32767 - 1)))))))));
                            var_33 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 562932773552128ULL)) ? (7599263822279604197ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1437))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_20 = 2; i_20 < 24; i_20 += 2) 
                        {
                            var_34 ^= ((/* implicit */int) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_79 [i_3] [i_3] [i_15] [i_16] [i_20])), (5038882657579473626ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32))) : (562932773552130ULL)))));
                            arr_84 [i_3] [i_14] [i_20] [i_16 - 2] [i_20 - 2] [i_14] &= ((/* implicit */long long int) (+((+(((/* implicit */int) ((((/* implicit */int) (unsigned char)154)) > (((/* implicit */int) arr_36 [i_3] [i_14] [i_15] [i_15] [i_16 - 2] [i_20])))))))));
                            arr_85 [i_15] [i_14] [i_15] [i_20] = ((/* implicit */short) (((!((!(((/* implicit */_Bool) (unsigned short)18147)))))) ? (((/* implicit */int) arr_64 [i_20] [i_20 + 1] [i_15] [i_16 + 3])) : ((+(((/* implicit */int) arr_83 [i_15] [i_14] [i_15] [i_16 - 2] [i_20 - 1]))))));
                        }
                        arr_86 [i_3] [i_15] = ((/* implicit */short) ((_Bool) ((((int) arr_33 [i_3] [i_16 - 3] [i_14])) != (((/* implicit */int) max((arr_29 [i_3] [i_14]), (arr_37 [i_3] [i_15] [i_15] [i_16 - 4] [i_16])))))));
                    }
                } 
            } 
        }
    }
    /* LoopSeq 2 */
    for (unsigned char i_21 = 0; i_21 < 17; i_21 += 2) 
    {
        arr_90 [i_21] = ((/* implicit */unsigned int) min(((_Bool)1), ((!(((/* implicit */_Bool) (unsigned char)248))))));
        arr_91 [i_21] = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_37 [i_21] [i_21] [i_21] [i_21] [i_21]))))))));
        arr_92 [i_21] = ((/* implicit */unsigned char) (+(12959760795099823573ULL)));
    }
    for (unsigned long long int i_22 = 0; i_22 < 16; i_22 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_23 = 0; i_23 < 16; i_23 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_24 = 0; i_24 < 16; i_24 += 2) 
            {
                for (unsigned char i_25 = 4; i_25 < 15; i_25 += 1) 
                {
                    {
                        arr_105 [i_24] [i_25] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) (unsigned short)31744)) & (-1290539427))));
                        arr_106 [i_23] [i_23] [i_23] = ((/* implicit */short) arr_29 [i_22] [i_23]);
                    }
                } 
            } 
            arr_107 [i_22] = (-(((long long int) arr_73 [i_23] [i_22])));
            /* LoopSeq 4 */
            for (unsigned char i_26 = 0; i_26 < 16; i_26 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_111 [i_27] [i_22] [i_26] [i_27]))))) ? (((((/* implicit */int) arr_100 [i_22] [i_23] [i_26] [i_27])) | (((/* implicit */int) arr_64 [i_27] [i_26] [i_23] [i_22])))) : (((/* implicit */int) arr_51 [i_26]))));
                    arr_114 [i_22] [i_23] [i_23] [i_27] [i_23] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_39 [i_22] [i_22] [i_22] [i_22] [i_22])) <= (((/* implicit */int) (_Bool)1)))))));
                    arr_115 [i_22] = ((/* implicit */short) (((((-(((/* implicit */int) (unsigned char)144)))) + (2147483647))) >> (((/* implicit */int) (unsigned char)20))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_28 = 0; i_28 < 16; i_28 += 1) 
                {
                    for (unsigned int i_29 = 0; i_29 < 16; i_29 += 1) 
                    {
                        {
                            var_36 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)18)) * (((/* implicit */int) (short)1438))))) ? (((/* implicit */int) arr_101 [i_22] [i_23] [i_29])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)12395)))))));
                            var_37 ^= ((/* implicit */short) ((int) arr_52 [i_22] [i_22] [i_22] [i_22]));
                        }
                    } 
                } 
            }
            for (short i_30 = 2; i_30 < 15; i_30 += 2) 
            {
                arr_122 [i_22] [i_22] [i_22] = ((/* implicit */short) ((((/* implicit */int) arr_112 [i_30 + 1])) & (((/* implicit */int) arr_112 [i_30 + 1]))));
                arr_123 [i_22] [i_23] [i_30] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                arr_124 [i_22] [i_22] [i_22] = ((/* implicit */short) ((int) (~(((/* implicit */int) arr_45 [i_22])))));
                /* LoopNest 2 */
                for (unsigned char i_31 = 0; i_31 < 16; i_31 += 3) 
                {
                    for (unsigned long long int i_32 = 0; i_32 < 16; i_32 += 1) 
                    {
                        {
                            arr_130 [i_22] [i_32] [i_32] [i_31] [i_31] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_32])) ? ((((_Bool)1) ? (((/* implicit */int) arr_80 [i_32] [i_31] [i_30] [i_30] [i_30] [i_23] [i_22])) : (arr_65 [i_32]))) : (((/* implicit */int) (short)-30351))));
                            var_38 ^= ((/* implicit */unsigned char) ((int) (((_Bool)1) ? (((/* implicit */int) arr_64 [i_32] [i_30] [i_23] [i_22])) : (((/* implicit */int) arr_7 [i_31] [i_23])))));
                            arr_131 [i_32] [i_32] [i_32] [i_31] [i_30] [i_23] [i_32] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9595626260590993209ULL))));
                        }
                    } 
                } 
                arr_132 [i_22] [i_23] = ((/* implicit */short) (~(((/* implicit */int) arr_129 [i_30 - 1] [i_30] [i_30] [i_30] [i_30 - 2]))));
            }
            for (unsigned char i_33 = 3; i_33 < 14; i_33 += 3) 
            {
                arr_137 [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)37034)) ? (((/* implicit */int) arr_74 [i_33 - 3] [i_22] [i_33 + 1])) : (((/* implicit */int) arr_74 [i_33 - 3] [i_22] [i_33 - 3]))));
                var_39 = ((/* implicit */unsigned char) min((var_39), (((unsigned char) (+(((/* implicit */int) (short)1438)))))));
                /* LoopNest 2 */
                for (unsigned int i_34 = 1; i_34 < 14; i_34 += 2) 
                {
                    for (short i_35 = 0; i_35 < 16; i_35 += 2) 
                    {
                        {
                            arr_143 [i_33 + 1] [i_23] [i_33] [i_34] [i_34 - 1] [i_33 - 3] = ((/* implicit */unsigned char) ((unsigned long long int) (~(arr_126 [i_22] [i_22] [i_22] [i_22] [i_22]))));
                            arr_144 [i_22] [i_23] [i_23] [i_34] [i_35] [i_34 + 2] &= ((/* implicit */unsigned short) ((short) ((unsigned long long int) arr_51 [i_22])));
                            arr_145 [i_22] [i_22] [i_22] [i_34] = ((/* implicit */unsigned char) (+(arr_38 [i_23] [i_33 - 1] [i_34] [i_34 + 1] [i_35])));
                            arr_146 [i_22] [i_22] [i_22] [i_22] [i_34] = ((/* implicit */short) (((+(1959297281))) > (-2008666538)));
                            var_40 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [i_23] [i_34 - 1])) + (((/* implicit */int) arr_88 [i_33 - 1] [i_23]))));
                        }
                    } 
                } 
            }
            for (short i_36 = 3; i_36 < 12; i_36 += 1) 
            {
                var_41 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) (short)1464))))));
                arr_149 [i_36] [i_36 + 1] [i_23] = ((/* implicit */unsigned int) (-(14029430844860430349ULL)));
            }
            arr_150 [i_23] [i_23] [i_22] = ((/* implicit */unsigned char) ((((unsigned long long int) (unsigned short)9286)) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
            /* LoopSeq 1 */
            for (int i_37 = 0; i_37 < 16; i_37 += 1) 
            {
                arr_154 [i_22] [i_23] [i_22] [i_37] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_99 [i_22] [i_22] [i_22]))));
                arr_155 [i_22] [i_22] [i_23] [i_37] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-30351)) ? (arr_97 [i_23] [i_37]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) | (((unsigned long long int) arr_89 [i_22] [i_23]))));
            }
        }
        /* LoopSeq 1 */
        for (unsigned char i_38 = 1; i_38 < 15; i_38 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_39 = 0; i_39 < 16; i_39 += 3) 
            {
                for (unsigned int i_40 = 1; i_40 < 12; i_40 += 3) 
                {
                    {
                        arr_165 [i_40] [i_38 - 1] [i_39] = ((/* implicit */unsigned char) min((1276157680U), (((/* implicit */unsigned int) max((((short) (short)30358)), (((/* implicit */short) ((unsigned char) arr_80 [i_40] [i_40 - 1] [i_39] [i_39] [i_38 + 1] [i_22] [i_22]))))))));
                        arr_166 [i_39] [i_38 - 1] = ((/* implicit */int) (short)1455);
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_41 = 0; i_41 < 16; i_41 += 2) 
            {
                arr_170 [i_22] [i_22] [i_22] = ((/* implicit */unsigned char) 1670898088U);
                arr_171 [i_41] [i_41] [i_38 - 1] [i_22] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_101 [i_22] [i_38] [i_41])) | (((/* implicit */int) arr_120 [i_22] [i_38])))))));
            }
        }
    }
    var_42 = ((/* implicit */unsigned short) var_10);
    var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((unsigned int) (short)1455))))))))));
}
