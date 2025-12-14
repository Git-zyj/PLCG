/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112583
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_13 = arr_1 [i_0] [i_0];
        var_14 = ((/* implicit */long long int) (-(((/* implicit */int) var_10))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_1))) / (((arr_1 [i_0] [(unsigned char)16]) / (arr_1 [i_0] [i_0])))));
        var_16 *= ((/* implicit */signed char) var_8);
        var_17 -= ((/* implicit */unsigned char) ((long long int) arr_0 [i_0] [i_0]));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) var_12);
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-19966)))), (((/* implicit */int) var_10)))), (((/* implicit */int) (unsigned short)12851)))))));
        var_20 = ((/* implicit */unsigned short) ((arr_1 [i_1] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    }
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            for (signed char i_4 = 4; i_4 < 12; i_4 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        var_21 = ((/* implicit */_Bool) (short)27485);
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-19966), (((/* implicit */short) arr_13 [i_4 - 1] [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 - 3])))))) - (max((((/* implicit */unsigned long long int) var_5)), (1891007065932165054ULL)))));
                        var_23 &= ((((24U) << (((((/* implicit */int) (unsigned short)62826)) - (62804))))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2] [(signed char)10] [i_3] [i_4 - 1])) || (((/* implicit */_Bool) arr_9 [i_2] [i_3] [(_Bool)1] [i_4 - 2]))))));
                        var_24 *= ((/* implicit */long long int) ((-902498775876577559LL) > (((/* implicit */long long int) arr_3 [i_2]))));
                    }
                    var_25 = ((min((6315676510204701558LL), (((/* implicit */long long int) var_5)))) != (max((((/* implicit */long long int) ((arr_4 [(short)0]) >= (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned char)0])))))), (((long long int) var_2)))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            {
                                arr_19 [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) arr_5 [i_2]))));
                                arr_20 [i_7] [i_6] [4LL] [i_3] [i_2] = ((/* implicit */unsigned int) max((((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))) % ((-(-4772086643416950790LL))))), (((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (0LL)))));
                                var_26 = ((/* implicit */int) 6282269568404754280LL);
                                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (unsigned short)63787))) ? (((((/* implicit */int) arr_10 [i_2])) * (((/* implicit */int) (short)-23574)))) : (((/* implicit */int) var_3))));
                            }
                        } 
                    } 
                    var_28 -= ((/* implicit */unsigned int) ((min((arr_12 [i_4 + 1] [(_Bool)1] [i_4 - 4] [i_4 - 3] [i_4 - 4]), (arr_12 [i_4 - 1] [i_4] [i_4 - 3] [i_4 - 2] [i_4 - 1]))) ? (((arr_12 [i_4 - 2] [i_4 - 2] [i_4 - 4] [i_4 - 2] [i_4 + 1]) ? (((/* implicit */int) arr_12 [i_4 - 4] [i_4 - 4] [i_4 + 1] [i_4 - 4] [i_4 - 1])) : (((/* implicit */int) (unsigned char)245)))) : (((/* implicit */int) arr_12 [i_4 - 1] [i_4] [i_4 - 3] [i_4 + 1] [i_4 - 2]))));
                }
            } 
        } 
        var_29 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) (short)26630))))) ? (min((((/* implicit */long long int) arr_12 [i_2] [7LL] [i_2] [7LL] [i_2])), (var_2))) : (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2] [(short)8])) << (((arr_1 [i_2] [i_2]) + (5534660490657588306LL))))))));
    }
    /* LoopSeq 2 */
    for (long long int i_8 = 0; i_8 < 21; i_8 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned long long int) arr_0 [i_8] [i_8]);
        var_31 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (max((-7157549038317640631LL), (((/* implicit */long long int) arr_22 [i_8])))) : (min((-6315676510204701571LL), (9LL))))), (((/* implicit */long long int) (((_Bool)1) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))))))));
    }
    for (long long int i_9 = 0; i_9 < 21; i_9 += 2) /* same iter space */
    {
        var_32 *= ((/* implicit */unsigned int) var_6);
        /* LoopSeq 1 */
        for (signed char i_10 = 0; i_10 < 21; i_10 += 4) 
        {
            var_33 += ((/* implicit */signed char) 902498775876577575LL);
            var_34 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((var_5) ? (arr_26 [i_9] [i_10]) : ((-(6315676510204701549LL)))))), (min((((/* implicit */unsigned long long int) ((6LL) | (-8213476959352058248LL)))), (8479448076995378403ULL)))));
            var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 6ULL)) ? (max((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) & (((/* implicit */int) (unsigned char)0))))), (arr_25 [i_9] [i_10]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1105)))));
            /* LoopSeq 3 */
            for (unsigned short i_11 = 0; i_11 < 21; i_11 += 2) /* same iter space */
            {
                var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((long long int) ((long long int) min((((/* implicit */unsigned short) var_8)), (arr_29 [i_9]))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_12 = 0; i_12 < 21; i_12 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        var_37 = ((/* implicit */unsigned char) (~(((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_0)) - (100)))))));
                        var_38 = ((/* implicit */long long int) ((int) arr_22 [i_11]));
                    }
                    var_39 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_9])) ? (((((/* implicit */_Bool) (unsigned short)511)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) arr_21 [i_9])))) : ((-(((/* implicit */int) var_8))))));
                    arr_40 [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_9])) ? (((/* implicit */int) arr_22 [i_9])) : (((/* implicit */int) (unsigned char)106))));
                    var_40 = ((/* implicit */signed char) var_9);
                }
                for (unsigned int i_14 = 0; i_14 < 21; i_14 += 2) 
                {
                    var_41 = ((((/* implicit */long long int) ((/* implicit */int) arr_42 [i_14] [(signed char)6] [(signed char)6] [i_9]))) - (max((((((/* implicit */long long int) ((/* implicit */int) arr_29 [6LL]))) + (arr_26 [(short)4] [i_9]))), (((2305843009213693951LL) + (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                    var_42 = ((/* implicit */unsigned char) (~(982524953912270251ULL)));
                }
                var_43 = ((/* implicit */unsigned char) (-(7992646217813917952LL)));
            }
            for (unsigned short i_15 = 0; i_15 < 21; i_15 += 2) /* same iter space */
            {
                /* LoopSeq 3 */
                for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                {
                    var_44 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((signed char) 0)))) ? (((((-866118788) - (((/* implicit */int) (unsigned char)16)))) % (((/* implicit */int) (signed char)37)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 737440740617314465LL)))))));
                    var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_9] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-5850158669326924775LL)));
                }
                /* vectorizable */
                for (unsigned long long int i_17 = 1; i_17 < 20; i_17 += 2) 
                {
                    var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_51 [i_9] [i_10] [i_17 - 1] [i_17 + 1])) ? (arr_51 [i_9] [(unsigned short)9] [i_17 - 1] [i_17]) : (((/* implicit */int) (short)-22336))));
                    var_47 = var_0;
                }
                for (signed char i_18 = 0; i_18 < 21; i_18 += 2) 
                {
                    var_48 = ((/* implicit */_Bool) ((arr_41 [i_18] [i_15] [i_15] [i_10] [i_9] [(short)19]) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)117))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) var_9))))) / (1088979207994361048LL)))));
                    /* LoopSeq 4 */
                    for (short i_19 = 0; i_19 < 21; i_19 += 4) /* same iter space */
                    {
                        arr_60 [i_9] [i_10] [i_15] [0U] [i_19] [i_18] = ((/* implicit */unsigned char) max((((/* implicit */int) var_0)), (max((max((var_6), (((/* implicit */int) arr_55 [i_9] [(signed char)19] [i_9])))), (((/* implicit */int) var_3))))));
                        arr_61 [i_18] = var_3;
                    }
                    for (short i_20 = 0; i_20 < 21; i_20 += 4) /* same iter space */
                    {
                        var_49 = ((/* implicit */short) 13830295552745740915ULL);
                        var_50 *= ((/* implicit */unsigned char) arr_27 [i_15]);
                        var_51 = ((/* implicit */_Bool) min((((/* implicit */int) arr_63 [i_9] [i_9] [i_18])), (((((/* implicit */int) arr_28 [i_9])) - (((/* implicit */int) arr_28 [i_9]))))));
                    }
                    for (short i_21 = 0; i_21 < 21; i_21 += 4) /* same iter space */
                    {
                        var_52 = ((/* implicit */long long int) ((((/* implicit */int) ((9563002552000706265ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_18] [(short)11])))))) + (((/* implicit */int) (unsigned short)36678))));
                        var_53 = (-(((/* implicit */int) ((((/* implicit */long long int) 4194048)) < (var_7)))));
                    }
                    for (short i_22 = 0; i_22 < 21; i_22 += 4) /* same iter space */
                    {
                        var_54 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) == (((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) var_6)) : (var_7)))))) < (((/* implicit */int) min(((short)-13082), (min((((/* implicit */short) var_3)), (arr_63 [i_15] [i_15] [(unsigned char)9]))))))));
                        var_55 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)151)) ? (18446744073709551591ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)86))))));
                        arr_70 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] |= ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_69 [i_9] [i_10] [i_15] [i_18] [i_22]))) ? (((/* implicit */int) ((signed char) arr_69 [i_15] [i_15] [i_15] [i_18] [i_22]))) : (((/* implicit */int) ((signed char) arr_69 [i_9] [i_9] [i_9] [i_9] [7LL])))));
                    }
                    var_56 = ((/* implicit */signed char) arr_24 [i_10] [i_15]);
                    var_57 = ((/* implicit */short) (((-(((/* implicit */int) arr_0 [i_15] [i_18])))) > (((/* implicit */int) arr_0 [i_9] [i_10]))));
                }
                var_58 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_2))) - (((((/* implicit */int) arr_27 [i_9])) * (((/* implicit */int) arr_45 [i_9] [i_9]))))));
                var_59 = ((/* implicit */unsigned short) arr_30 [i_15] [i_15] [2LL]);
                var_60 = ((/* implicit */long long int) ((_Bool) arr_49 [i_9] [i_10] [i_9]));
            }
            for (signed char i_23 = 0; i_23 < 21; i_23 += 2) 
            {
                /* LoopSeq 2 */
                for (long long int i_24 = 0; i_24 < 21; i_24 += 3) 
                {
                    var_61 = ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) arr_28 [i_9])) ? (-902498775876577559LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)56))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_63 [17U] [14LL] [i_23])) ? (((/* implicit */int) arr_42 [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_75 [i_9]))))))), (902498775876577565LL)));
                    var_62 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)189))));
                    var_63 &= 986657023U;
                }
                for (int i_25 = 0; i_25 < 21; i_25 += 3) 
                {
                    var_64 |= ((/* implicit */short) arr_53 [i_23] [i_23]);
                    var_65 = ((/* implicit */long long int) min((var_65), (-8580815521525459707LL)));
                    arr_78 [(_Bool)1] [i_25] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) min((arr_54 [i_9]), (((/* implicit */unsigned int) arr_68 [i_9] [(unsigned short)19] [i_10] [i_23] [(unsigned char)17]))))))));
                }
                var_66 = ((/* implicit */long long int) arr_25 [i_9] [i_9]);
            }
        }
        var_67 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)239)), (-1458208325886683938LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1048575U)))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_55 [i_9] [i_9] [i_9]), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_9]))) >= (0LL)))))))) : (min((-1601398405451029011LL), (((/* implicit */long long int) (signed char)(-127 - 1)))))));
    }
    var_68 = ((/* implicit */unsigned long long int) min((var_68), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)6309)))))));
}
