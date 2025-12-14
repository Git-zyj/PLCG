/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116264
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
    var_15 += ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) min(((short)-9123), (((/* implicit */short) var_13))))) ? (((/* implicit */unsigned long long int) var_8)) : (var_7)))));
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((long long int) ((((((/* implicit */_Bool) (short)8191)) ? (var_4) : (var_4))) % (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-76)))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 2] [i_1 + 2]))));
            var_17 = ((/* implicit */unsigned long long int) var_4);
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                arr_8 [i_2] [i_2] [i_2] [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((signed char) var_10))) : (((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 2] [i_1 - 2]))));
                /* LoopSeq 4 */
                for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_10))));
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        var_19 = ((/* implicit */short) (~(((/* implicit */int) (short)-9118))));
                        var_20 = ((/* implicit */_Bool) (short)-9118);
                        var_21 = ((/* implicit */unsigned short) (short)9117);
                        arr_14 [i_0] [i_0] [i_4] [i_3] [i_4] = ((/* implicit */unsigned int) arr_1 [i_1 + 1]);
                        arr_15 [i_0] [i_1 + 2] [i_2] [i_2] [i_3] [i_3] [i_2] = ((/* implicit */unsigned long long int) var_9);
                    }
                    var_22 = ((/* implicit */short) (~(((/* implicit */int) (short)9126))));
                    arr_16 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_0] [i_1 - 1] [i_3]))) ? (((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1 - 2])))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    arr_21 [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-12356))));
                    var_23 ^= ((/* implicit */long long int) ((short) arr_17 [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 1]));
                    arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 2] [i_1 + 2]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        var_24 = ((((/* implicit */_Bool) arr_24 [i_1 - 2] [i_1 - 2] [i_1 - 2])) ? (arr_24 [i_1 - 2] [i_1] [i_2]) : (arr_24 [i_1 + 1] [i_1] [i_6]));
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((-171402674616630263LL) > (((/* implicit */long long int) 668975585)))))));
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (var_5)));
                        arr_26 [i_0] [i_0] [i_2] [i_5] [i_0] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_1 + 2] [i_2]))));
                    }
                    for (int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        var_27 = ((/* implicit */signed char) (~(var_8)));
                        var_28 |= ((((/* implicit */_Bool) (+(arr_25 [i_7] [i_5] [i_0] [i_0] [i_0])))) ? ((-(var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1 - 2] [i_1 - 2] [i_7]))));
                    }
                    var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 14490088892508473519ULL))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 1; i_9 < 21; i_9 += 2) 
                    {
                        var_30 = ((/* implicit */short) ((((/* implicit */int) (short)-18568)) != (((/* implicit */int) (short)9115))));
                        arr_34 [i_0] [i_1 + 2] [i_2] [i_8] = ((/* implicit */unsigned long long int) 388903870845073613LL);
                        arr_35 [i_0] = ((/* implicit */int) (~(arr_0 [i_9 - 1] [i_9 - 1])));
                    }
                    var_31 = ((/* implicit */long long int) ((((_Bool) var_3)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0]))) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_1 - 2])))));
                    arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) ((arr_0 [i_0] [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) : (var_0)));
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        var_32 = ((/* implicit */long long int) ((short) 452560016699663840LL));
                        arr_39 [i_10] [i_8] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) var_14);
                    }
                }
                for (unsigned int i_11 = 1; i_11 < 18; i_11 += 3) 
                {
                    var_33 += ((/* implicit */_Bool) var_7);
                    arr_43 [i_0] [i_1] [i_11] [i_11 + 4] = ((/* implicit */short) (_Bool)1);
                    /* LoopSeq 1 */
                    for (long long int i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        var_34 = ((/* implicit */long long int) var_4);
                        var_35 = ((/* implicit */short) ((unsigned short) (-(((/* implicit */int) (unsigned short)49929)))));
                        var_36 = ((/* implicit */short) (~(var_9)));
                        var_37 &= arr_33 [i_11 + 4] [i_11 + 3] [i_11] [i_11 - 1] [i_11 + 4] [i_11 + 4];
                    }
                    var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0]))));
                }
                /* LoopSeq 3 */
                for (int i_13 = 4; i_13 < 21; i_13 += 4) /* same iter space */
                {
                    arr_50 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_28 [i_0] [i_1] [i_13 + 1] [i_13 + 1] [i_2]);
                    var_39 = ((/* implicit */int) var_5);
                    var_40 = ((/* implicit */_Bool) (short)-18562);
                }
                for (int i_14 = 4; i_14 < 21; i_14 += 4) /* same iter space */
                {
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-5103260641723272257LL) | (((/* implicit */long long int) 3252926978U))))) ? (arr_37 [i_0] [i_1] [i_1] [i_1] [i_2] [i_1]) : (((((/* implicit */_Bool) arr_47 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) arr_27 [i_1] [i_1] [i_0] [i_14 - 1] [i_14] [i_2]))))));
                    arr_54 [i_0] [i_1 + 2] [i_2] [i_0] = ((/* implicit */short) ((signed char) (_Bool)1));
                    var_42 = ((/* implicit */signed char) 131071U);
                    arr_55 [i_0] [i_1] [i_2] [i_14] [i_14] [i_1] = ((/* implicit */short) arr_28 [i_1] [i_1] [i_1 + 2] [i_1] [i_1]);
                    /* LoopSeq 1 */
                    for (unsigned short i_15 = 0; i_15 < 22; i_15 += 1) 
                    {
                        arr_59 [i_0] [i_0] [i_2] [i_14 + 1] [i_14] [i_0] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1 - 2] [i_14 - 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1]))));
                        var_43 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) + (var_8))));
                        arr_60 [i_0] [i_0] [i_0] [i_14] [i_15] = var_0;
                        arr_61 [i_0] [i_0] [i_0] [i_0] [i_14 + 1] [i_14 - 1] &= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (short)-9099)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
                        arr_62 [i_2] [i_14 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])))))) : (((((/* implicit */_Bool) 89861910628869554ULL)) ? (arr_20 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32758)))))));
                    }
                }
                for (int i_16 = 4; i_16 < 21; i_16 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (int i_17 = 3; i_17 < 20; i_17 += 4) 
                    {
                        var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5)))))));
                        arr_68 [i_17] [i_1 - 2] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) (signed char)-80);
                        var_45 = ((/* implicit */short) ((((/* implicit */_Bool) arr_64 [i_0] [i_17 - 3] [i_2] [i_16 + 1])) ? (((/* implicit */int) arr_64 [i_2] [i_17 - 3] [i_2] [i_16 + 1])) : (((/* implicit */int) arr_64 [i_0] [i_17 - 3] [i_2] [i_16 + 1]))));
                        var_46 = ((/* implicit */signed char) var_8);
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 2) 
                    {
                        var_47 = ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
                        arr_72 [i_16] [i_16] [i_2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_52 [i_18] [i_16 - 3] [i_16 - 4] [i_16 - 4] [i_1 + 2] [i_1 + 2])) ? (((/* implicit */int) arr_28 [i_16 - 3] [i_16 - 2] [i_16 - 2] [i_16] [i_1 + 2])) : (((/* implicit */int) arr_52 [i_18] [i_16 - 2] [i_16 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]))));
                        arr_73 [i_18] [i_16] [i_2] [i_1 + 2] [i_0] = ((unsigned long long int) arr_44 [i_16 - 4] [i_1] [i_1] [i_16 - 1] [i_16 - 2] [i_16 + 1]);
                    }
                    for (unsigned short i_19 = 0; i_19 < 22; i_19 += 1) 
                    {
                        var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_8) != (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_2] [i_2])))))) ^ (((/* implicit */int) var_12))));
                        var_49 = ((/* implicit */int) 226574458U);
                        var_50 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -937908689)) ? (((((/* implicit */_Bool) arr_6 [i_1] [i_2])) ? (1916868921) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))) : (-25)));
                        arr_78 [i_0] [i_19] = ((/* implicit */int) ((arr_20 [i_16 - 3]) + (((/* implicit */unsigned long long int) var_3))));
                    }
                    arr_79 [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_51 [i_0] [i_0])) ? (var_7) : (arr_25 [i_16] [i_2] [i_2] [i_1] [i_0])))));
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_20 = 0; i_20 < 22; i_20 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        arr_85 [i_0] [i_1 + 1] [i_1 + 2] [i_20] [i_20] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 2]))));
                        arr_86 [i_21] = ((/* implicit */signed char) arr_7 [i_0]);
                    }
                    arr_87 [i_0] [i_1] [i_1 + 1] [i_1] [i_2] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_13) ? (18446744073709551594ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9126)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_80 [i_0] [i_2])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_2])))))) : (var_7)));
                    var_51 &= ((/* implicit */long long int) ((var_9) >> (((((/* implicit */int) arr_6 [i_1 - 2] [i_1 - 2])) + (119)))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_22 = 1; i_22 < 19; i_22 += 2) 
                    {
                        var_52 = ((/* implicit */long long int) (~(((/* implicit */int) ((short) arr_89 [i_1])))));
                        arr_92 [i_0] [i_1 + 2] [i_1 + 1] [i_2] [i_2] [i_20] [i_2] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_47 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (var_5) : (((/* implicit */unsigned long long int) arr_12 [i_22 + 2]))));
                    }
                    for (long long int i_23 = 0; i_23 < 22; i_23 += 1) 
                    {
                        var_53 = ((/* implicit */unsigned int) min((var_53), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_14)) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37693)))))))));
                        arr_95 [i_0] [i_0] [i_2] [i_20] = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)4095)) >= (((/* implicit */int) var_1)))) ? (arr_33 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (arr_41 [i_1] [i_1] [i_1] [i_1] [i_1 - 1] [i_20])))))));
                    }
                }
                for (unsigned long long int i_24 = 0; i_24 < 22; i_24 += 4) /* same iter space */
                {
                    var_54 = ((/* implicit */long long int) min((var_54), (((/* implicit */long long int) (((-(11027721684677344358ULL))) >> (((var_0) - (291104967))))))));
                    arr_98 [i_0] [i_1 - 2] [i_2] [i_0] = ((/* implicit */signed char) var_13);
                    arr_99 [i_24] [i_24] [i_24] [i_24] = ((((((/* implicit */_Bool) (short)633)) ? (1916868921) : (((/* implicit */int) (_Bool)1)))) >= ((~(((/* implicit */int) (short)-13258)))));
                    var_55 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((arr_25 [i_0] [i_1] [i_1] [i_2] [i_24]) / (((/* implicit */unsigned long long int) arr_66 [i_0] [i_1 - 2] [i_2] [i_2] [i_24])))) : (arr_38 [i_0] [i_0] [i_2] [i_24] [i_24])));
                }
                for (short i_25 = 0; i_25 < 22; i_25 += 2) 
                {
                    arr_102 [i_0] [i_1] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_13);
                    var_56 = ((/* implicit */signed char) (-(((int) 6U))));
                }
                arr_103 [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_1 + 1] [i_1 - 2] [i_1] [i_1] [i_1]))));
            }
        }
        for (unsigned long long int i_26 = 0; i_26 < 22; i_26 += 4) 
        {
            var_57 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 7728391390002063330ULL)))))));
            var_58 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_26] [i_0]))) / (arr_84 [i_0] [i_26] [i_26] [i_26] [i_26] [i_0])))) ? (-2561479919561810538LL) : (((/* implicit */long long int) (~(((/* implicit */int) (short)-13245)))))));
        }
        /* LoopNest 3 */
        for (int i_27 = 0; i_27 < 22; i_27 += 2) 
        {
            for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) 
            {
                for (signed char i_29 = 1; i_29 < 20; i_29 += 1) 
                {
                    {
                        var_59 = ((/* implicit */unsigned int) min((var_59), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_44 [i_0] [i_27] [i_28 + 1] [i_28 + 1] [i_0] [i_29 - 1])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)13258))))))));
                        var_60 = ((/* implicit */int) var_10);
                    }
                } 
            } 
        } 
        var_61 += ((/* implicit */short) ((((/* implicit */_Bool) (short)-16520)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-13258))));
    }
    var_62 |= ((/* implicit */unsigned int) var_5);
    var_63 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_4)) : (var_14)));
}
