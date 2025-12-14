/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133993
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
    for (signed char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-6808)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : ((~(var_5)))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    var_14 = ((((/* implicit */unsigned int) var_11)) % (min((var_2), (((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_4 [i_0]))))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        arr_11 [i_1] [i_2] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_2 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 2) 
                        {
                            arr_15 [i_0 - 1] [i_1] = ((signed char) max(((short)-28059), ((short)28058)));
                            arr_16 [i_0 + 1] [i_0 + 1] [i_1] [(unsigned short)20] [3U] = ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? ((+(max((((/* implicit */unsigned int) (short)28053)), (arr_6 [i_1] [i_1]))))) : (max((((var_6) ? (((/* implicit */unsigned int) var_11)) : (var_3))), ((((_Bool)0) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(signed char)1] [i_1] [i_1] [i_1] [i_3] [(signed char)1] [i_1]))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */short) min((var_15), ((short)20469)));
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 79327511)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1] [6ULL] [(_Bool)1] [6ULL] [i_5] [(signed char)4]))) : (arr_7 [(_Bool)1])))) ? (((var_0) ? (arr_6 [i_1] [12U]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-28057))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -1)))))))))));
                            var_17 = ((/* implicit */_Bool) ((arr_12 [16] [i_0 - 1] [i_1] [i_2 - 2] [i_2 - 2] [i_2]) % ((-(arr_9 [(_Bool)1])))));
                            var_18 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) var_6)) % (((/* implicit */int) var_9)))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_19 *= ((/* implicit */unsigned char) var_2);
                            arr_22 [i_0] [i_1] [i_1] [i_0 - 1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) max(((~(var_10))), (arr_6 [i_6] [i_2 + 1])))), (var_5)));
                        }
                        arr_23 [i_1] [i_1] [i_1] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_1] [i_1] [i_2 - 1] [i_3])) ? (((((/* implicit */int) (short)28059)) % (((/* implicit */int) var_0)))) : (((/* implicit */int) var_9))))) % (arr_7 [i_1]));
                    }
                    for (int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)-231))));
                        var_21 = ((/* implicit */unsigned long long int) ((short) arr_1 [i_0]));
                        var_22 = var_6;
                    }
                    for (short i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((var_3) % (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))) % (var_5)));
                        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1] [i_0 + 1])) % (((/* implicit */int) (short)2044)))))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        /* LoopSeq 4 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                for (long long int i_12 = 0; i_12 < 24; i_12 += 3) 
                {
                    {
                        var_25 = (-(((/* implicit */int) (signed char)-18)));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 3) 
                        {
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_13] [(short)18] [i_13])) ? (arr_31 [i_9] [6] [6]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)101)))));
                            arr_43 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */long long int) arr_35 [i_13] [i_9] [i_11]);
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_14 = 3; i_14 < 23; i_14 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned int) (~(arr_39 [i_9] [i_9] [i_10] [i_10] [i_14 - 1])));
                            arr_46 [i_10] [i_10] [i_9] [16LL] [10] |= ((/* implicit */unsigned int) ((arr_29 [i_9]) ? (((/* implicit */int) (short)2049)) : (((int) 2440875013U))));
                            arr_47 [i_9] [i_10] [i_11] [i_9] [i_12] [i_14] = ((/* implicit */unsigned long long int) ((int) 2440875027U));
                            var_28 = ((/* implicit */long long int) (-(((/* implicit */int) arr_45 [i_14 - 3] [i_14 - 1] [i_9] [i_14 - 2] [i_14 - 1]))));
                        }
                        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_10] [i_11] [(signed char)10])) ? (arr_32 [i_10] [i_10] [(_Bool)1]) : (arr_32 [i_10] [i_10] [(short)6]))))));
                    }
                } 
            } 
            arr_48 [i_9] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */unsigned long long int) arr_30 [i_10])) % (var_12))));
            /* LoopNest 3 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (short i_16 = 0; i_16 < 24; i_16 += 4) 
                {
                    for (short i_17 = 0; i_17 < 24; i_17 += 2) 
                    {
                        {
                            var_30 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_44 [i_16] [i_16] [i_15] [i_16] [i_15]))));
                            var_31 = ((/* implicit */int) var_2);
                        }
                    } 
                } 
            } 
            var_32 = ((/* implicit */int) min((var_32), (((int) var_10))));
        }
        for (unsigned int i_18 = 0; i_18 < 24; i_18 += 3) 
        {
            arr_58 [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_4)))) ? ((~(var_4))) : (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_9] [i_9] [i_18] [i_18])))));
            /* LoopNest 2 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (unsigned long long int i_20 = 1; i_20 < 23; i_20 += 2) 
                {
                    {
                        arr_64 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) arr_57 [i_20 + 1]);
                        arr_65 [i_9] [i_9] [i_9] [i_20] = var_13;
                    }
                } 
            } 
            var_33 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))));
            var_34 *= ((/* implicit */unsigned long long int) arr_36 [(_Bool)1] [i_9] [(_Bool)1]);
            var_35 = ((/* implicit */int) var_4);
        }
        for (long long int i_21 = 3; i_21 < 21; i_21 += 1) 
        {
            arr_68 [i_9] [i_9] [i_9] = ((/* implicit */short) (+(((/* implicit */int) arr_53 [i_21 - 1] [i_21] [i_21 - 2]))));
            arr_69 [i_9] [i_9] [10] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))));
        }
        for (unsigned char i_22 = 0; i_22 < 24; i_22 += 4) 
        {
            arr_72 [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_9] [i_22] [i_9])) ? ((-(var_10))) : (((var_0) ? (var_10) : (var_3)))));
            /* LoopSeq 4 */
            for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
            {
                var_36 ^= ((/* implicit */_Bool) (~(((/* implicit */int) arr_34 [i_23] [i_9] [i_23 + 1]))));
                /* LoopNest 2 */
                for (signed char i_24 = 0; i_24 < 24; i_24 += 1) 
                {
                    for (short i_25 = 0; i_25 < 24; i_25 += 2) 
                    {
                        {
                            var_37 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_51 [i_22] [i_23 + 1] [(short)2] [i_25]))));
                            arr_80 [i_9] [i_22] [i_22] [i_9] [i_9] = ((/* implicit */short) 1854092283U);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_26 = 0; i_26 < 24; i_26 += 3) 
                {
                    for (signed char i_27 = 1; i_27 < 23; i_27 += 1) 
                    {
                        {
                            arr_86 [i_27] [i_27] [i_27 - 1] [i_9] [i_27] [i_27 - 1] = ((((/* implicit */_Bool) -2184640714176630249LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-91))) : (1854092283U));
                            arr_87 [i_9] = (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-28060)) % (((/* implicit */int) (signed char)-101))))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_9] [i_22] [20U] [20U] [i_23 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)28070))) : (3090397751850726717LL))))));
                var_39 ^= ((/* implicit */short) ((unsigned long long int) arr_85 [i_23] [i_23 + 1] [i_23 + 1] [i_23 + 1]));
            }
            for (short i_28 = 4; i_28 < 22; i_28 += 2) 
            {
                var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_31 [i_28 + 1] [i_28] [i_28 - 2])))))));
                arr_90 [i_28] [i_9] [i_9] [(unsigned char)18] = ((/* implicit */short) (+(arr_85 [i_28 - 3] [i_22] [0U] [i_22])));
                /* LoopNest 2 */
                for (unsigned int i_29 = 0; i_29 < 24; i_29 += 3) 
                {
                    for (signed char i_30 = 0; i_30 < 24; i_30 += 3) 
                    {
                        {
                            arr_97 [i_9] [i_22] [i_9] [i_22] [(signed char)12] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_40 [i_9] [i_9] [i_9] [i_29] [i_22])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [8LL] [i_22] [i_22] [i_22] [i_22]))) : (16014538291281886567ULL)))));
                            var_41 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_9] [i_9] [i_29]))) % (1854092280U))) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            arr_98 [i_30] [i_9] [2U] [2U] [i_9] [2U] = ((/* implicit */signed char) ((arr_66 [i_28 - 2] [i_28 - 1] [i_22]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_66 [i_28 + 1] [i_28 - 3] [i_22]))));
                            arr_99 [i_9] [i_9] [i_28 - 4] [i_9] [i_30] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-28060))));
                        }
                    } 
                } 
            }
            for (_Bool i_31 = 1; i_31 < 1; i_31 += 1) 
            {
                var_42 = ((/* implicit */_Bool) var_4);
                /* LoopNest 2 */
                for (unsigned char i_32 = 0; i_32 < 24; i_32 += 4) 
                {
                    for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                    {
                        {
                            arr_110 [i_9] [i_22] [i_22] [i_31 - 1] [i_31 - 1] [i_32] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
                            arr_111 [i_33] [i_9] [i_32] [i_31 - 1] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (13130475024253186702ULL)));
                        }
                    } 
                } 
            }
            for (unsigned char i_34 = 1; i_34 < 23; i_34 += 3) 
            {
                var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_109 [i_22] [16U] [i_22] [i_22] [i_22]))) % (-3090397751850726717LL))) : (((var_9) ? (-5237726230665441119LL) : (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_9] [i_9] [i_9] [i_9]))))))))));
                var_44 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) % (((/* implicit */int) arr_52 [i_9] [i_22] [i_22] [i_34 - 1]))))) % ((-(var_10)))));
            }
        }
        arr_114 [i_9] = ((/* implicit */unsigned long long int) ((_Bool) var_9));
        /* LoopSeq 2 */
        for (unsigned int i_35 = 3; i_35 < 23; i_35 += 4) 
        {
            arr_117 [(short)8] [(short)8] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_74 [i_9] [6LL])) ? ((~(-3090397751850726705LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            var_45 = ((/* implicit */short) ((int) arr_93 [i_35] [i_35 + 1] [i_9] [i_35 - 2] [i_35 - 1] [i_35 - 1]));
        }
        for (unsigned long long int i_36 = 0; i_36 < 24; i_36 += 2) 
        {
            arr_120 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) var_9)))));
            var_46 *= ((/* implicit */unsigned int) ((int) 2440875009U));
        }
    }
    for (long long int i_37 = 3; i_37 < 18; i_37 += 1) 
    {
        arr_123 [i_37 - 2] [i_37] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_37] [i_37] [i_37] [i_37] [i_37]))))))));
        var_47 = ((/* implicit */unsigned int) arr_38 [i_37]);
    }
    var_48 = min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)105)), (var_2)))), (var_4)))), (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (13078124029340209750ULL))), (((/* implicit */unsigned long long int) var_5)))));
}
