/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100896
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_12 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) var_0)) : (arr_1 [i_0]))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)11909))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_2 [i_0] [i_1] [i_2])))))))));
                    var_14 += min((((/* implicit */unsigned int) var_4)), (min((((/* implicit */unsigned int) (short)27804)), (max((((/* implicit */unsigned int) (unsigned char)0)), (var_2))))));
                    arr_7 [i_0] = ((/* implicit */unsigned int) ((((4100651863U) << (((/* implicit */int) (_Bool)0)))) != (((/* implicit */unsigned int) (~(((int) var_4)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_15 ^= var_5;
                                var_16 = ((/* implicit */signed char) var_1);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        /* LoopSeq 4 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_7 = 3; i_7 < 13; i_7 += 2) 
            {
                for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) ((unsigned char) 849139643U)))));
                            arr_24 [i_9] [i_6] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)247))));
                            var_18 = ((/* implicit */signed char) ((arr_20 [i_6 - 1] [i_6] [i_7 - 3] [i_7 - 2]) == (((/* implicit */unsigned int) (-(((/* implicit */int) var_11)))))));
                        }
                    } 
                } 
            } 
            arr_25 [(short)7] [i_6] [10U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)11909))));
            /* LoopSeq 1 */
            for (unsigned char i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                /* LoopSeq 3 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_19 &= var_1;
                    var_20 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) arr_20 [i_11] [i_10] [i_10] [i_5])))));
                    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 441970103U))));
                }
                for (unsigned char i_12 = 1; i_12 < 12; i_12 += 2) /* same iter space */
                {
                    arr_34 [i_6] = ((/* implicit */unsigned int) arr_6 [i_5] [i_5] [i_5]);
                    arr_35 [i_12] [i_6] [i_12] [i_12 + 1] [13U] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((unsigned int) -687845784)) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                }
                for (unsigned char i_13 = 1; i_13 < 12; i_13 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_20 [i_5] [i_6] [i_5] [i_5]))));
                    arr_39 [i_6] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) (short)663)) % (1601391154))));
                    arr_40 [i_6] [i_6] [i_6] [i_13 + 1] = ((((unsigned long long int) var_5)) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((-2062100970) == (((/* implicit */int) (signed char)-86)))))));
                }
                arr_41 [i_5] [i_6 - 1] [i_6] [i_5] &= ((/* implicit */_Bool) ((unsigned int) ((unsigned short) 3852997193U)));
                var_23 &= ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_3)))));
                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (-(((/* implicit */int) arr_27 [i_6 - 1] [i_6 - 1] [i_10] [i_6 - 1])))))));
                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_23 [i_10] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6])) : (1512147958)));
            }
            /* LoopSeq 1 */
            for (unsigned short i_14 = 2; i_14 < 14; i_14 += 2) 
            {
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) var_2))));
                var_27 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1758452360939244859LL))));
                /* LoopNest 2 */
                for (signed char i_15 = 4; i_15 < 14; i_15 += 2) 
                {
                    for (short i_16 = 0; i_16 < 15; i_16 += 2) 
                    {
                        {
                            arr_51 [7U] [i_6] [i_14] [i_15] [i_16] [i_16] [i_16] = ((/* implicit */long long int) arr_20 [i_14 + 1] [i_6] [i_14 + 1] [i_14 - 1]);
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) var_7))));
                            var_29 += ((/* implicit */int) ((unsigned long long int) (-(((/* implicit */int) arr_33 [i_5] [i_5] [i_15] [i_16])))));
                            var_30 *= ((/* implicit */short) (-(((((/* implicit */_Bool) var_11)) ? (2938895542U) : (var_2)))));
                        }
                    } 
                } 
                var_31 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) ((_Bool) var_10))) : (((/* implicit */int) ((1758452360939244859LL) != (((/* implicit */long long int) ((/* implicit */int) (short)-16708))))))));
            }
        }
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((73359356) << (((4294967295U) - (4294967294U)))))))))));
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 15; i_18 += 2) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 15; i_19 += 2) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 15; i_20 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) -1758452360939244848LL))));
                            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)113)) ? ((-(var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_17]))))))));
                            var_35 &= ((/* implicit */signed char) (~(2147483634)));
                            arr_60 [i_5] [11ULL] = ((/* implicit */unsigned char) (_Bool)1);
                        }
                    } 
                } 
            } 
            arr_61 [i_5] = (~(var_2));
        }
        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                for (unsigned char i_23 = 2; i_23 < 12; i_23 += 2) 
                {
                    for (short i_24 = 0; i_24 < 15; i_24 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_7)) - (29))))))));
                            var_37 ^= ((/* implicit */signed char) 1758452360939244843LL);
                            arr_73 [8ULL] [i_21] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_11))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_25 = 3; i_25 < 14; i_25 += 2) 
            {
                for (unsigned char i_26 = 2; i_26 < 14; i_26 += 2) 
                {
                    {
                        var_38 &= ((/* implicit */int) (unsigned short)37180);
                        arr_82 [(short)4] [i_21 - 1] [i_21 - 1] [i_25] [i_26 - 2] &= ((unsigned short) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_1)) + (8861)))));
                        arr_83 [i_5] [i_5] [(signed char)10] [i_25] [i_26 - 1] = ((/* implicit */signed char) (+(3970339828U)));
                        var_39 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) var_3))));
                        var_40 += ((/* implicit */int) ((unsigned char) arr_42 [i_25 + 1] [i_25 - 2] [i_25 + 1]));
                    }
                } 
            } 
            var_41 = ((/* implicit */int) min((var_41), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))));
            /* LoopNest 3 */
            for (int i_27 = 0; i_27 < 15; i_27 += 2) 
            {
                for (signed char i_28 = 0; i_28 < 15; i_28 += 2) 
                {
                    for (unsigned long long int i_29 = 0; i_29 < 15; i_29 += 2) 
                    {
                        {
                            var_42 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [9U] [i_27] [i_21 - 1] [i_5]))));
                            var_43 = ((/* implicit */unsigned char) ((signed char) (-(((/* implicit */int) (unsigned short)29304)))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_30 = 1; i_30 < 1; i_30 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_31 = 1; i_31 < 13; i_31 += 2) 
            {
                for (signed char i_32 = 0; i_32 < 15; i_32 += 2) 
                {
                    {
                        arr_101 [i_5] [i_30] [i_31 + 2] [i_32] = ((/* implicit */long long int) arr_19 [i_5] [i_5] [i_5] [i_5] [i_5]);
                        arr_102 [i_31] [i_31] [i_31] [i_31] &= ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned int i_33 = 0; i_33 < 15; i_33 += 2) /* same iter space */
            {
                var_44 &= ((((/* implicit */_Bool) ((unsigned int) arr_81 [i_5] [i_30] [i_30] [i_33]))) ? (((/* implicit */int) arr_33 [i_30 - 1] [i_30 - 1] [i_30 - 1] [i_30 - 1])) : ((-(((/* implicit */int) var_11)))));
                var_45 *= ((/* implicit */signed char) (-(((/* implicit */int) arr_2 [i_5] [i_5] [i_5]))));
                var_46 ^= ((/* implicit */signed char) ((unsigned int) arr_65 [i_30 - 1] [i_30 - 1] [i_30]));
            }
            for (unsigned int i_34 = 0; i_34 < 15; i_34 += 2) /* same iter space */
            {
                arr_109 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) var_7))))));
                var_47 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_10))));
            }
            for (unsigned int i_35 = 0; i_35 < 15; i_35 += 2) /* same iter space */
            {
                arr_112 [i_5] [i_5] [i_5] = (~(((((/* implicit */_Bool) 1208916719U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_30]))) : (1758452360939244859LL))));
                /* LoopSeq 1 */
                for (signed char i_36 = 4; i_36 < 12; i_36 += 2) 
                {
                    arr_116 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_9)));
                    arr_117 [i_5] [i_30 - 1] [i_35] [i_36] = ((/* implicit */int) ((short) arr_85 [i_36 - 4] [i_35] [(unsigned char)4] [(unsigned char)4]));
                }
            }
        }
        var_48 = ((/* implicit */signed char) ((long long int) (unsigned char)0));
    }
    /* LoopSeq 4 */
    for (int i_37 = 0; i_37 < 17; i_37 += 2) 
    {
        var_49 += ((/* implicit */unsigned short) arr_8 [i_37] [i_37] [i_37] [i_37] [i_37] [8]);
        /* LoopSeq 2 */
        for (signed char i_38 = 0; i_38 < 17; i_38 += 2) 
        {
            arr_126 [i_38] [i_38] [i_37] = ((/* implicit */unsigned long long int) (+((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48903))) : (var_9)))))));
            arr_127 [i_37] = ((/* implicit */int) var_11);
        }
        for (short i_39 = 4; i_39 < 15; i_39 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_40 = 0; i_40 < 1; i_40 += 1) 
            {
                for (int i_41 = 2; i_41 < 13; i_41 += 2) 
                {
                    for (short i_42 = 0; i_42 < 17; i_42 += 2) 
                    {
                        {
                            arr_137 [i_37] [(_Bool)0] [i_37] [(_Bool)0] [i_37] [(_Bool)0] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (2938895542U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) var_4))))), (min((((/* implicit */long long int) (~(var_2)))), ((~(arr_133 [i_37] [i_37] [i_37])))))));
                            arr_138 [i_37] [i_41 + 2] [i_40] [i_39] [i_37] = ((/* implicit */_Bool) arr_134 [i_39] [i_39] [i_39 - 3] [(short)5] [i_39 - 3] [i_39 + 1]);
                        }
                    } 
                } 
            } 
            arr_139 [i_37] [i_37] [i_39] = ((/* implicit */signed char) (((+(((((/* implicit */_Bool) var_3)) ? (73359356) : (((/* implicit */int) var_8)))))) == (((/* implicit */int) var_6))));
            var_50 = ((/* implicit */int) var_8);
            arr_140 [i_37] [(unsigned short)9] [(_Bool)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_123 [i_37])) || (((/* implicit */_Bool) 9223372036854775798LL))))), ((-(arr_118 [i_39]))))))));
        }
    }
    for (unsigned int i_43 = 0; i_43 < 11; i_43 += 2) 
    {
        arr_143 [i_43] = (+(min((min((3458723770965823451ULL), (((/* implicit */unsigned long long int) 3272627247U)))), (((/* implicit */unsigned long long int) arr_12 [i_43])))));
        var_51 = ((/* implicit */_Bool) min((var_51), (((/* implicit */_Bool) (-(((/* implicit */int) var_1)))))));
        var_52 &= ((/* implicit */unsigned char) arr_5 [3LL] [i_43] [i_43] [i_43]);
    }
    for (short i_44 = 0; i_44 < 15; i_44 += 2) 
    {
        var_53 ^= ((/* implicit */unsigned short) max((((/* implicit */int) ((short) max(((signed char)91), (arr_18 [i_44] [i_44] [i_44] [i_44]))))), ((+(((/* implicit */int) (unsigned char)117))))));
        var_54 = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_66 [i_44] [i_44] [i_44]) & (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-18877)) : (((/* implicit */int) arr_22 [i_44] [i_44] [i_44] [2ULL] [i_44] [i_44] [i_44])))))))));
        /* LoopSeq 2 */
        for (short i_45 = 0; i_45 < 15; i_45 += 2) /* same iter space */
        {
            var_55 += ((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((((/* implicit */int) var_10)) / (((/* implicit */int) var_3)))) : (arr_97 [i_44] [i_44])));
            arr_149 [i_44] [i_44] = min((min((((/* implicit */unsigned int) var_3)), (3970339828U))), ((~(var_2))));
        }
        for (short i_46 = 0; i_46 < 15; i_46 += 2) /* same iter space */
        {
            var_56 = ((/* implicit */long long int) ((min((((1194931390U) | (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) min((((/* implicit */short) var_8)), ((short)-3327)))))) / (((((/* implicit */_Bool) min((arr_8 [i_44] [i_44] [i_46] [i_46] [i_44] [i_46]), (((/* implicit */unsigned long long int) var_3))))) ? (((2097144U) ^ (var_0))) : (var_2)))));
            var_57 = ((/* implicit */short) max((var_57), (((/* implicit */short) 3086661037U))));
            var_58 = ((/* implicit */signed char) ((unsigned int) arr_147 [14]));
            var_59 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((arr_70 [i_44] [i_44]) | (((/* implicit */int) var_7))))))), (var_5)));
        }
    }
    for (unsigned int i_47 = 0; i_47 < 25; i_47 += 2) 
    {
        var_60 ^= ((/* implicit */signed char) ((int) 3458723770965823464ULL));
        var_61 = min((var_2), (((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_11))) <= (arr_153 [i_47]))) ? (((((/* implicit */_Bool) 441970111U)) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) (short)0)))) : (((((/* implicit */int) (unsigned char)223)) << (((((/* implicit */int) (unsigned char)252)) - (244)))))))));
    }
    var_62 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) (+(((/* implicit */int) (short)25537))))) - ((+(441970080U))))), (((/* implicit */unsigned int) ((short) (_Bool)0)))));
    var_63 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (short)15140))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) 441970122U))))))) : (((unsigned int) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */unsigned long long int) 3852997179U)) : (14988020302743728164ULL))))));
}
