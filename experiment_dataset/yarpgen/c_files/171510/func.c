/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171510
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0]))))) * (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_4)))));
        var_14 = ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (_Bool)1))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (short)-32764))));
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) 1228195738U))));
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1)))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)130))) : (arr_5 [i_2])))));
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (_Bool)1);
        }
        for (signed char i_3 = 3; i_3 < 14; i_3 += 4) 
        {
            var_19 = ((/* implicit */_Bool) (unsigned char)26);
            arr_10 [i_1] [i_1] &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)-23)))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3])) && (((/* implicit */_Bool) var_12))))))));
            arr_11 [i_3] [i_3] = ((/* implicit */short) (-(1206051800U)));
        }
        arr_12 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)196))));
        var_20 = ((/* implicit */long long int) (unsigned char)118);
        arr_13 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_1])) <= (((/* implicit */int) arr_6 [i_1]))));
    }
    for (signed char i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            for (short i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            arr_27 [i_4] [i_5] [i_4] [i_7] [i_7] [i_8] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned int) arr_19 [i_7])), (arr_26 [i_7] [i_7] [i_8] [i_4] [i_4])))))));
                            arr_28 [i_8] [i_8] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_8]))));
                            var_21 *= ((/* implicit */short) ((_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_7])) ? (var_4) : (var_13)))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            arr_31 [i_9] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) ((arr_18 [i_7] [i_6]) % (arr_18 [i_4] [i_7])));
                            var_22 |= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_30 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) & (((/* implicit */int) arr_19 [i_6])))) == (((((/* implicit */_Bool) arr_19 [i_4])) ? (((/* implicit */int) arr_6 [i_4])) : (((/* implicit */int) arr_30 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))));
                            var_23 ^= ((/* implicit */short) (+(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)42)), ((unsigned char)150))))));
                        }
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_9))));
                        var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((5408222045916024737ULL), (((/* implicit */unsigned long long int) ((_Bool) arr_9 [i_4] [i_5] [i_5])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 12704065498559193627ULL)))) : (min((arr_1 [i_4]), (((/* implicit */long long int) (!(var_5))))))));
                        arr_32 [i_4] [i_5] [i_5] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_4])) ? (((/* implicit */int) arr_19 [i_6])) : (((/* implicit */int) var_6))))), (arr_18 [i_4] [i_6]));
                    }
                } 
            } 
        } 
        var_26 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((long long int) (_Bool)1))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_2)))))) % (var_8)))));
        /* LoopSeq 4 */
        for (unsigned int i_10 = 0; i_10 < 16; i_10 += 4) 
        {
            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) 5742678575150357996ULL))));
            arr_35 [i_4] [i_4] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) min(((short)14), (((/* implicit */short) arr_17 [i_10]))))), (arr_34 [(_Bool)1] [(_Bool)1])))) ? (((((/* implicit */_Bool) ((short) -6216291955725901587LL))) ? (((/* implicit */int) arr_0 [i_10])) : ((-(((/* implicit */int) arr_21 [i_4] [i_4] [i_4] [i_4])))))) : ((~(((/* implicit */int) arr_24 [i_4] [i_4] [i_4] [i_10]))))));
            /* LoopNest 2 */
            for (short i_11 = 3; i_11 < 15; i_11 += 2) 
            {
                for (unsigned int i_12 = 2; i_12 < 15; i_12 += 2) 
                {
                    {
                        var_28 &= ((/* implicit */unsigned char) arr_37 [i_12] [i_10] [i_10] [i_4]);
                        arr_41 [i_11] [i_11] = ((/* implicit */long long int) arr_33 [i_11 - 2] [i_12 - 2] [i_12 + 1]);
                        var_29 = (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) (!(var_5)))))) : ((-(((/* implicit */int) arr_17 [i_4]))))));
                    }
                } 
            } 
            arr_42 [i_4] [i_4] [i_4] = ((/* implicit */short) var_5);
        }
        for (short i_13 = 3; i_13 < 15; i_13 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (int i_15 = 0; i_15 < 16; i_15 += 3) 
                {
                    {
                        arr_54 [i_13] = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned long long int) arr_1 [i_14])) >= (arr_5 [i_4]))) && ((_Bool)1))) || (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_26 [i_4] [i_13 - 3] [i_13] [i_14] [i_15])) ? (var_7) : (((/* implicit */unsigned long long int) -6227868597135881762LL)))))))));
                        var_31 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_33 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_4] [i_13]))) : (13038522027793526855ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                    }
                } 
            } 
            var_32 = ((/* implicit */_Bool) max((var_32), (((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_4] [i_4] [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-20))) : (var_8)))))))));
        }
        /* vectorizable */
        for (short i_16 = 3; i_16 < 15; i_16 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 4) 
            {
                for (unsigned char i_18 = 1; i_18 < 15; i_18 += 1) 
                {
                    for (signed char i_19 = 1; i_19 < 15; i_19 += 1) 
                    {
                        {
                            var_33 = ((((((/* implicit */_Bool) var_4)) ? (8160397633138441785LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */int) (short)-16384)) : (((/* implicit */int) (unsigned char)154))))));
                            var_34 = ((/* implicit */_Bool) var_12);
                        }
                    } 
                } 
            } 
            var_35 ^= ((/* implicit */signed char) ((unsigned int) (_Bool)0));
        }
        for (short i_20 = 3; i_20 < 15; i_20 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_21 = 0; i_21 < 16; i_21 += 4) 
            {
                var_36 ^= ((/* implicit */unsigned long long int) min((((/* implicit */short) ((signed char) arr_21 [i_20 - 3] [i_20 + 1] [i_20 + 1] [i_21]))), (arr_0 [i_4])));
                arr_69 [i_4] [i_4] [i_21] = ((/* implicit */short) (((+(((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) ((((/* implicit */int) arr_0 [i_20 - 1])) >= (((/* implicit */int) arr_49 [i_20 + 1] [i_20 - 2] [i_4] [i_20 - 2])))))));
            }
            for (signed char i_22 = 1; i_22 < 12; i_22 += 1) 
            {
                var_37 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)1022))))), (((unsigned long long int) min((arr_9 [i_22] [i_22] [i_22]), ((_Bool)1))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_23 = 1; i_23 < 15; i_23 += 4) 
                {
                    var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_58 [i_4] [i_4] [i_22]))))) || (((/* implicit */_Bool) var_4)))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_24 = 0; i_24 < 16; i_24 += 2) 
                    {
                        arr_79 [i_4] [i_22] [i_20] [i_22] [i_23 + 1] [i_20] [i_22] = ((/* implicit */short) 1377156818865796910ULL);
                        var_39 = ((/* implicit */_Bool) var_12);
                        arr_80 [i_22] = ((/* implicit */short) (~(var_1)));
                        var_40 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_45 [i_20 - 1] [i_22 + 3] [i_23 + 1]))));
                    }
                    for (short i_25 = 1; i_25 < 14; i_25 += 3) 
                    {
                        arr_85 [i_22] [i_20] [i_20] [i_22 - 1] [i_20] [i_25] = ((/* implicit */unsigned int) (~(var_0)));
                        var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) ((signed char) var_0)))));
                    }
                    for (signed char i_26 = 0; i_26 < 16; i_26 += 2) 
                    {
                        var_42 ^= ((/* implicit */signed char) (+(((/* implicit */int) arr_39 [i_22 - 1]))));
                        var_43 = ((/* implicit */short) 4294967295U);
                        arr_88 [i_4] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */int) arr_52 [i_20] [i_20 - 2] [i_22 + 2] [i_23 + 1])) : (((/* implicit */int) arr_52 [i_4] [i_20 + 1] [i_22 + 4] [i_23 + 1]))));
                        var_44 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_12))));
                    }
                    for (unsigned long long int i_27 = 2; i_27 < 13; i_27 += 4) 
                    {
                        var_45 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) - (arr_77 [i_4] [i_4] [i_23])));
                        var_46 = ((/* implicit */unsigned char) arr_83 [i_20 + 1]);
                    }
                }
                for (short i_28 = 2; i_28 < 12; i_28 += 1) 
                {
                    arr_94 [i_22] = ((/* implicit */short) ((var_13) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_4] [i_22 + 4] [i_28 + 1] [i_28 + 1] [i_20 - 1] [i_22 - 1]))) >= (arr_15 [i_20 + 1]))) ? (arr_15 [i_20 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_23 [i_4] [i_22 + 3] [i_28 + 3] [i_28 + 3] [i_20 - 1] [i_4]), (arr_23 [i_4] [i_22 + 4] [i_28 - 2] [i_28 - 2] [i_20 - 2] [i_4]))))))))));
                    var_48 = ((/* implicit */unsigned int) min((var_48), (((/* implicit */unsigned int) (-(var_2))))));
                    var_49 = ((_Bool) (+((~(((/* implicit */int) (short)(-32767 - 1)))))));
                }
                /* LoopNest 2 */
                for (short i_29 = 0; i_29 < 16; i_29 += 2) 
                {
                    for (long long int i_30 = 1; i_30 < 14; i_30 += 4) 
                    {
                        {
                            arr_99 [i_4] [i_4] [i_4] [i_4] [i_22] = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_50 [i_20] [i_20])) ? (((/* implicit */int) var_6)) : (arr_36 [i_4] [i_4] [i_4] [i_4])))))));
                            arr_100 [i_4] [i_22] [i_4] [i_22] [i_4] [i_4] [i_4] = ((((/* implicit */long long int) ((unsigned int) min((((/* implicit */short) arr_74 [i_20] [i_20 - 1])), (arr_0 [11U]))))) | (arr_57 [i_4] [i_4] [i_4]));
                        }
                    } 
                } 
            }
            var_50 -= ((/* implicit */unsigned long long int) ((((_Bool) arr_68 [i_20 - 1] [i_20 - 1] [i_20 - 1] [(_Bool)1])) || (((/* implicit */_Bool) (+(7782316874943179827LL))))));
            var_51 = ((/* implicit */unsigned int) ((max((((/* implicit */int) ((var_1) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) arr_6 [i_20])) ? (((/* implicit */int) (short)8604)) : (((/* implicit */int) arr_45 [i_4] [i_20] [i_20 + 1])))))) < (((((/* implicit */int) ((short) arr_58 [i_4] [i_4] [i_20 + 1]))) / (((/* implicit */int) ((_Bool) arr_36 [i_20] [i_20] [i_20] [(short)13])))))));
            var_52 = ((/* implicit */unsigned long long int) max((var_52), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_20 [i_20 - 3])) : (((/* implicit */int) arr_20 [i_20 + 1]))))), (min((max((13065464619419142209ULL), (((/* implicit */unsigned long long int) arr_44 [i_4] [i_4])))), (min((var_1), (13065464619419142221ULL)))))))));
        }
        var_53 -= ((/* implicit */short) (-(((/* implicit */int) ((short) arr_19 [i_4])))));
    }
    for (signed char i_31 = 0; i_31 < 16; i_31 += 4) /* same iter space */
    {
        var_54 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_13))));
        var_55 ^= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)30338)))))));
        arr_105 [i_31] = ((/* implicit */unsigned long long int) ((unsigned int) (short)-22089));
        arr_106 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) -3191766703013555985LL);
    }
    var_56 = ((/* implicit */_Bool) var_12);
    var_57 = ((/* implicit */int) ((unsigned long long int) ((short) (!(((/* implicit */_Bool) var_10))))));
}
