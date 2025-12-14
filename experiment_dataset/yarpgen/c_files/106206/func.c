/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106206
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_7 [i_0] [i_1 - 1] [i_0]), (((/* implicit */unsigned int) var_2))))), (4568927840027822249ULL)))) ? ((~((+(-910758722))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)31)) ? (50331648U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))) : (-1562415021)))));
                    var_12 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_1]), (((/* implicit */unsigned long long int) 3103936001U))))) ? (((/* implicit */unsigned long long int) 0U)) : (max((((/* implicit */unsigned long long int) var_11)), (var_8)))))) ? (min((((/* implicit */unsigned long long int) var_2)), (arr_0 [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_7 [i_0 + 3] [i_1 + 1] [i_1]) : (arr_7 [i_0 + 3] [i_1 + 1] [i_1]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_13 ^= ((/* implicit */int) var_6);
                                arr_15 [i_0] [i_0] = ((/* implicit */int) (~((+(3894885161U)))));
                                arr_16 [i_0] [i_4] [i_3] [i_0] [i_1 - 2] [i_0] = (_Bool)1;
                                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (min((arr_7 [i_3] [i_3] [i_1]), (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)147), (var_5)))))))) ? (arr_0 [i_0 + 2]) : (((((/* implicit */_Bool) ((unsigned long long int) arr_14 [i_0 + 3] [i_1] [i_2] [i_3] [i_4]))) ? (((13666243171149880014ULL) & (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_2)), ((short)19052))))))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (short)32767))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        arr_20 [i_0 - 1] [i_0 + 3] [i_0 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 365792615U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) -4541140554097599460LL)) ? (((/* implicit */long long int) var_7)) : (arr_2 [i_1] [i_1 - 1])))));
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_3)))))));
                    }
                    for (unsigned char i_6 = 3; i_6 < 13; i_6 += 4) 
                    {
                        arr_23 [i_0] [i_1 - 2] [i_6] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */int) arr_21 [i_0] [i_0 + 3] [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) arr_21 [i_0] [i_0 + 3] [i_0 + 2] [i_0 + 2]))))), (4181541467U)));
                        arr_24 [i_0] [i_1 + 2] [i_1 + 2] [i_6 + 1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)8))))) ? (((((/* implicit */_Bool) var_3)) ? (-4870617694077976295LL) : (((/* implicit */long long int) -58556915)))) : (((/* implicit */long long int) min((((/* implicit */int) var_2)), (var_7)))))), (((/* implicit */long long int) (-(((0U) * (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
                        arr_25 [i_0] [i_1 - 2] [i_0] [i_6] [i_6 - 2] [i_6 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9470506051079867828ULL)) ? (((((/* implicit */_Bool) arr_22 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (arr_0 [i_0 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)84), (var_5))))))) : (((/* implicit */unsigned long long int) arr_4 [i_0 + 1] [i_1] [i_2] [i_6 + 1]))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        arr_29 [i_7] [i_7] [i_2] [i_0] [i_1 + 2] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_17 [i_0] [i_1] [i_2] [i_7])), (arr_19 [i_0] [i_1 + 2] [i_2] [i_7])))) ? (((/* implicit */int) (_Bool)1)) : (min((((/* implicit */int) var_6)), (arr_11 [i_0] [i_1] [i_2] [i_0] [i_7] [i_2])))))) ? (max((((((/* implicit */unsigned long long int) arr_26 [i_0] [i_0] [i_1] [i_1] [i_0] [i_7])) ^ (0ULL))), (((((/* implicit */_Bool) (unsigned char)255)) ? (var_8) : (((/* implicit */unsigned long long int) -210735173)))))) : (((/* implicit */unsigned long long int) 8012287404969426805LL))));
                        var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */_Bool) 4294967295U)) ? (arr_26 [i_0 + 3] [i_1] [i_2] [i_2] [i_1] [i_7]) : (((/* implicit */int) var_6))))));
                    }
                    for (int i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        var_18 *= ((/* implicit */unsigned int) arr_13 [i_0 + 3] [i_1] [i_1] [i_2] [i_8]);
                        var_19 = ((/* implicit */signed char) 11959940472398549741ULL);
                    }
                }
                /* LoopSeq 2 */
                for (long long int i_9 = 4; i_9 < 13; i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 15; i_11 += 1) 
                        {
                            {
                                arr_42 [i_0 + 3] [i_0] [i_9 - 1] [i_9 - 1] [i_11] [i_11] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) arr_32 [i_0 + 2] [i_1 - 2])), (0ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_36 [i_0 + 1] [i_1] [i_10] [i_1]))) / (-1853267459213951504LL)))))))));
                                arr_43 [i_0] [i_0] [i_9] [i_10] [i_0] [i_10] [i_1] |= ((/* implicit */unsigned char) arr_21 [i_1] [i_1] [i_1] [i_10]);
                                var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3639472201333644132ULL)) ? (var_7) : (((/* implicit */int) min(((unsigned short)3), (var_1))))))) | (min((((((/* implicit */_Bool) (unsigned char)122)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))))), (5ULL)))));
                                var_21 = ((/* implicit */unsigned char) max((arr_7 [i_0] [i_11] [i_0]), ((~((~(var_4)))))));
                            }
                        } 
                    } 
                    arr_44 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))), (((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (arr_18 [i_0 + 2] [i_0] [i_1] [i_9])))) + (min((var_8), (((/* implicit */unsigned long long int) 4239631669U))))))));
                }
                for (long long int i_12 = 4; i_12 < 13; i_12 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((((/* implicit */_Bool) (((_Bool)1) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 398203915960966935ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) 3966326357U)) ? (arr_45 [i_0 + 1] [i_1 + 1] [i_12 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_0] [i_12]))))))) / (min((((/* implicit */unsigned long long int) max((536866816U), (arr_7 [i_0] [i_1] [i_1])))), (((var_0) ? (((/* implicit */unsigned long long int) arr_11 [i_12] [i_0] [i_1] [i_1] [i_0] [i_0])) : (17975495363876539368ULL)))))))));
                    arr_47 [i_0] [i_0] [i_0] = 2147483647;
                    arr_48 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */int) var_3)), ((~(((/* implicit */int) var_2)))))) : (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_10)))))));
                    var_23 = ((/* implicit */unsigned int) (unsigned char)196);
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        for (int i_14 = 0; i_14 < 15; i_14 += 4) 
                        {
                            {
                                arr_53 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_4)))));
                                var_24 *= ((/* implicit */signed char) (+(min((((((/* implicit */unsigned int) arr_26 [i_0] [i_0] [i_0] [i_13] [i_13] [i_0])) * (3012938905U))), (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
                                arr_54 [i_0 - 1] [i_1 - 1] [i_1] [i_12] [i_13] [i_0] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [i_0] [i_12] [i_13] [i_0]))))) ? (max((((/* implicit */unsigned int) var_0)), (2082469149U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_37 [i_0] [i_1 + 1] [i_0]))))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                                var_25 ^= ((/* implicit */unsigned char) arr_0 [i_12 - 1]);
                                arr_55 [i_0 + 2] [i_1] [i_12] [i_0] [i_12] = ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) (short)1016))))))) ? (((/* implicit */unsigned int) min(((+(((/* implicit */int) (unsigned char)129)))), (((/* implicit */int) (!(((/* implicit */_Bool) 554153860399104ULL)))))))) : (max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_40 [i_0] [i_1 - 1] [i_12 + 2] [i_13] [i_0]))))), (((((/* implicit */_Bool) 16206162105956384321ULL)) ? (arr_10 [i_0 + 1] [i_1] [i_12 - 3] [i_12 - 3] [i_14] [i_12]) : (arr_7 [i_0] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                }
                arr_56 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)15))) <= (0ULL)))), (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)0), (((/* implicit */unsigned char) var_0))))))))) : (max((((unsigned long long int) arr_7 [i_0] [i_1] [i_0])), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))))));
                arr_57 [i_0] [i_0] [i_0] = ((/* implicit */int) var_4);
                var_26 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)0)), (((min((((/* implicit */long long int) var_11)), (arr_4 [i_0] [i_0] [i_0] [i_1]))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (var_6)))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_15 = 0; i_15 < 22; i_15 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_16 = 0; i_16 < 22; i_16 += 4) 
        {
            arr_62 [i_15] [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_15])) ? (arr_59 [i_15]) : (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_15] [i_16] [i_16])))))) ? (min((var_8), (((/* implicit */unsigned long long int) (unsigned char)164)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
            arr_63 [i_15] = ((/* implicit */unsigned short) (~(((arr_61 [i_15]) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_60 [i_15] [i_15] [i_15])))))))));
            /* LoopNest 2 */
            for (short i_17 = 1; i_17 < 19; i_17 += 2) 
            {
                for (short i_18 = 0; i_18 < 22; i_18 += 4) 
                {
                    {
                        arr_68 [i_18] [i_17 + 1] [i_16] [i_16] [i_15] = ((/* implicit */int) arr_59 [i_15]);
                        arr_69 [i_15] [i_16] [i_17] = ((/* implicit */int) var_0);
                    }
                } 
            } 
        }
        for (signed char i_19 = 0; i_19 < 22; i_19 += 3) 
        {
            var_27 = var_9;
            /* LoopNest 2 */
            for (unsigned long long int i_20 = 1; i_20 < 21; i_20 += 2) 
            {
                for (unsigned int i_21 = 1; i_21 < 20; i_21 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_22 = 4; i_22 < 18; i_22 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 2307088191U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (-379362574) : (((/* implicit */int) arr_58 [i_19]))))) : (((((/* implicit */_Bool) (unsigned short)5338)) ? (var_4) : (((/* implicit */unsigned int) var_7)))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                            var_29 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_74 [i_15] [i_19] [i_22])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (9182399920965617774ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (((/* implicit */signed char) arr_66 [i_22] [i_21] [i_20] [i_19] [i_19] [i_15])))))))), ((+(arr_75 [i_20 + 1] [i_21 + 2] [i_21 + 1] [i_22 + 3] [i_22])))));
                            arr_79 [6ULL] [i_19] [i_19] [i_19] [i_19] &= ((/* implicit */unsigned char) (((~((~(var_8))))) <= (((/* implicit */unsigned long long int) max((((/* implicit */int) min(((unsigned short)65535), ((unsigned short)65535)))), ((-(((/* implicit */int) arr_67 [i_15])))))))));
                            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) (!(var_0))))));
                            arr_80 [i_21] [i_20 - 1] [i_22] [i_21 - 1] [i_22] = ((/* implicit */_Bool) ((arr_70 [i_15] [i_15]) ? (arr_75 [i_15] [i_19] [i_20] [i_15] [i_22 - 3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)64)) : (-1546456204)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))))));
                        }
                        /* vectorizable */
                        for (int i_23 = 4; i_23 < 18; i_23 += 1) /* same iter space */
                        {
                            var_31 += ((/* implicit */signed char) (unsigned char)25);
                            var_32 = ((/* implicit */long long int) (+(((/* implicit */int) var_10))));
                            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 23U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_4)) / (40544457703869770LL))))));
                        }
                        var_34 = ((/* implicit */int) max((var_34), (min((((((/* implicit */_Bool) arr_64 [i_20 + 1] [i_21 + 1] [i_21] [i_21 + 2])) ? (arr_64 [i_20 - 1] [i_21 + 2] [i_20 - 1] [i_21 + 1]) : (arr_64 [i_20 + 1] [i_21 + 2] [i_21 + 2] [i_21]))), (((((/* implicit */_Bool) 1100389612U)) ? (((/* implicit */int) (short)1794)) : (((/* implicit */int) var_10))))))));
                        var_35 = ((/* implicit */int) ((arr_65 [i_15] [i_19] [i_21]) & (((/* implicit */unsigned int) ((/* implicit */int) ((8733580735342519484ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)82)))))))));
                        var_36 = ((/* implicit */unsigned short) max((var_7), (((/* implicit */int) var_3))));
                        arr_84 [i_15] [i_19] [i_20] [i_21 - 1] = ((/* implicit */int) min((((/* implicit */unsigned char) arr_70 [i_15] [i_19])), ((unsigned char)76)));
                    }
                } 
            } 
        }
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
        {
            arr_87 [i_15] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) / ((+(arr_86 [i_15] [i_15] [i_15])))));
            var_37 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (4247206120U)))) ? (((((/* implicit */_Bool) arr_73 [i_24] [i_24] [i_15] [i_15])) ? (((/* implicit */int) var_3)) : (-2058055798))) : (((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) (short)1801)))))))), ((((!(((/* implicit */_Bool) arr_75 [i_15] [i_24] [i_15] [i_24] [i_15])))) ? (((/* implicit */unsigned long long int) min((4294967295U), (arr_65 [i_15] [i_15] [i_24])))) : (max((((/* implicit */unsigned long long int) -1213018998)), (arr_75 [i_15] [i_15] [i_24] [i_24] [i_24])))))));
        }
        /* vectorizable */
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
        {
            var_38 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2599082287394498450LL)) ? (((/* implicit */int) arr_58 [i_15])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_8)) ? (18446744073709551591ULL) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63)))));
            var_39 |= ((/* implicit */unsigned long long int) 2007887341);
            arr_91 [i_15] [i_15] = ((((((/* implicit */int) (unsigned char)242)) | (((/* implicit */int) var_5)))) & (((((arr_89 [i_25] [i_15]) + (2147483647))) >> (((1318008104) - (1318008103))))));
            arr_92 [i_15] [i_15] [i_25] = ((/* implicit */long long int) (-(arr_71 [i_15] [i_25] [i_25])));
        }
        arr_93 [i_15] [i_15] = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) arr_86 [i_15] [i_15] [i_15])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-106))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_26 = 0; i_26 < 18; i_26 += 4) 
    {
        for (unsigned short i_27 = 2; i_27 < 17; i_27 += 3) 
        {
            {
                var_40 += ((/* implicit */int) (unsigned char)213);
                var_41 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2904130607637403020LL)) ? (4080U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)14233)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)0)), (var_11))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_96 [i_27] [i_27 + 1])))))) ? (((/* implicit */int) arr_70 [i_26] [i_26])) : (((/* implicit */int) (_Bool)1)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
    {
        for (unsigned int i_29 = 1; i_29 < 15; i_29 += 2) 
        {
            for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
            {
                {
                    arr_106 [i_28] [i_28] [i_28] = ((/* implicit */long long int) (_Bool)1);
                    var_42 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (134217728)))), ((~(3584970086U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_81 [i_28] [i_30])), (arr_96 [i_28] [i_28]))))))) : (((/* implicit */int) max((var_2), (((/* implicit */signed char) arr_66 [i_28] [i_28] [i_29] [i_28] [i_30] [i_30])))))));
                    var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_5)) ? (var_7) : (((((/* implicit */_Bool) arr_94 [i_28] [i_28])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))))))))));
                    var_44 = ((/* implicit */short) ((min((((/* implicit */int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)47568)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_102 [i_30] [i_30] [i_30])))))) >> (((2487858956U) - (2487858943U)))));
                }
            } 
        } 
    } 
}
