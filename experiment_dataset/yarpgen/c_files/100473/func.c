/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100473
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
    for (signed char i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_3] &= ((/* implicit */unsigned char) var_11);
                        var_16 -= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_7 [i_0] [i_0]))));
                        arr_10 [i_1] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) (~(1394650694)))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_4)))) | (((/* implicit */int) (!(((/* implicit */_Bool) (short)3209)))))));
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_2] [i_2])) & (((((/* implicit */_Bool) -1798655721)) ? (-1394650708) : (-1394650726)))));
                    }
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_2))) ? ((-(((/* implicit */int) (signed char)127)))) : (((/* implicit */int) ((((/* implicit */int) arr_16 [i_1 + 3] [i_2 - 2] [i_1 + 3] [i_5] [i_6] [i_6] [i_0 + 4])) >= (((/* implicit */int) var_10))))))))));
                                var_20 = ((/* implicit */short) ((((((((/* implicit */int) (short)4357)) + (((/* implicit */int) (unsigned short)41948)))) + (((((/* implicit */_Bool) 225620216506994566LL)) ? (((/* implicit */int) arr_14 [i_6] [i_6] [i_6] [i_6])) : (1394650694))))) / (((/* implicit */int) (short)-660))));
                                arr_18 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((max(((+(135146303906863093ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (-1394650704) : (1394650704)))))), (((/* implicit */unsigned long long int) (+(2147483647))))));
                                arr_19 [i_2] = ((/* implicit */unsigned char) ((min(((~(((/* implicit */int) (unsigned char)179)))), (((/* implicit */int) arr_17 [i_0] [i_1])))) <= (((((/* implicit */_Bool) -815958636)) ? (((/* implicit */int) arr_13 [5] [i_1] [i_2] [i_0 + 1] [i_6] [i_1 + 2])) : (((/* implicit */int) arr_2 [i_1 - 1]))))));
                            }
                        } 
                    } 
                    var_21 = (unsigned short)45568;
                }
                var_22 = ((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1 + 3] [i_1 - 2]);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_7 = 0; i_7 < 12; i_7 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_8 = 2; i_8 < 11; i_8 += 4) 
        {
            for (unsigned short i_9 = 1; i_9 < 11; i_9 += 4) 
            {
                {
                    arr_31 [i_7] [(unsigned char)7] [i_9] = ((/* implicit */unsigned short) (short)32767);
                    var_23 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                    var_24 = ((/* implicit */_Bool) ((((((((/* implicit */int) min(((short)(-32767 - 1)), ((short)32744)))) + (2147483647))) << ((((-(((/* implicit */int) arr_24 [i_8] [i_7])))) - (25880))))) ^ (min((min((-1394650713), (((/* implicit */int) var_15)))), (-1394650704)))));
                }
            } 
        } 
        var_25 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(757528603)))) && (((/* implicit */_Bool) -2147483647)))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_11), (((/* implicit */short) (!(((/* implicit */_Bool) var_6))))))))) : (-3808479048914103274LL)));
    }
    for (unsigned short i_10 = 3; i_10 < 17; i_10 += 1) 
    {
        arr_34 [i_10] = ((/* implicit */unsigned long long int) arr_32 [i_10]);
        var_26 ^= ((/* implicit */unsigned short) (short)32754);
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 16; i_11 += 2) 
        {
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                {
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_39 [i_10 - 3] [i_11 - 1] [i_12 - 1]) + (((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_11] [i_11]))) : (var_13)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (2914502144U))))));
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (short i_14 = 0; i_14 < 18; i_14 += 2) 
                        {
                            {
                                arr_45 [i_10] [i_11] [i_12] [i_12] [i_11] [i_10] = ((/* implicit */short) min((((/* implicit */int) arr_37 [i_10])), (((((/* implicit */int) var_10)) * (((/* implicit */int) arr_37 [i_10]))))));
                                var_28 *= ((/* implicit */short) ((unsigned long long int) (signed char)96));
                                var_29 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_1)), (1394650703)))), (1335422780097663608ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!((_Bool)1)))))))));
                                arr_46 [i_10] [i_10] [i_12 - 1] [i_13] [i_13] = ((/* implicit */int) 17111321293611888007ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned int i_15 = 0; i_15 < 17; i_15 += 2) 
    {
        var_30 = ((/* implicit */unsigned long long int) (signed char)-97);
        var_31 = ((/* implicit */signed char) ((short) 1335422780097663608ULL));
        /* LoopSeq 3 */
        for (unsigned int i_16 = 0; i_16 < 17; i_16 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_17 = 2; i_17 < 13; i_17 += 2) 
            {
                for (unsigned short i_18 = 1; i_18 < 15; i_18 += 4) 
                {
                    {
                        arr_58 [i_18] [i_17] [i_18] [i_18] [i_16] [i_15] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)78)) || (arr_53 [i_18 + 2] [i_18 - 1] [i_18 + 1] [i_17 - 1]))), (min(((!(((/* implicit */_Bool) arr_56 [i_15] [i_16] [i_16] [i_17] [i_18 - 1] [i_18])))), (((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) 17111321293611888008ULL))))))));
                        arr_59 [i_15] [i_18] [i_17 + 2] = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_1)))) | (((arr_54 [i_15] [i_15]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_14) : (((/* implicit */int) arr_40 [i_18 + 2])))))));
                        arr_60 [i_15] [i_15] [i_16] [i_17] [i_18] [i_18] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)2571))))));
                        arr_61 [i_15] [i_15] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_57 [i_15] [i_17 + 2] [i_18 - 1] [10U])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)156))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_57 [(short)3] [i_17 - 1] [i_18 - 1] [i_17 - 1])))))));
                    }
                } 
            } 
            arr_62 [i_15] [i_16] [i_15] = ((/* implicit */unsigned char) 1905510409U);
        }
        for (unsigned char i_19 = 0; i_19 < 17; i_19 += 3) 
        {
            /* LoopSeq 3 */
            for (long long int i_20 = 0; i_20 < 17; i_20 += 1) 
            {
                arr_67 [i_19] = ((/* implicit */unsigned long long int) min((var_5), (min((min((var_14), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)104)) && (((/* implicit */_Bool) -2147483647)))))))));
                var_32 = ((/* implicit */int) min((((/* implicit */unsigned int) -2147483647)), (((unsigned int) (~(((/* implicit */int) (unsigned short)65509)))))));
            }
            for (unsigned char i_21 = 0; i_21 < 17; i_21 += 3) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) /* same iter space */
                {
                    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((((((/* implicit */int) arr_43 [i_15] [(unsigned short)10] [i_19] [(unsigned short)10] [i_21] [i_22 - 1])) + (((/* implicit */int) arr_69 [i_15] [i_19] [i_21] [i_22])))) + (2147483647))) << (((3894421093236416318ULL) - (3894421093236416318ULL))))))));
                    arr_72 [i_19] [i_19] = ((/* implicit */signed char) arr_48 [i_22 - 1]);
                    var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((short) (-(((/* implicit */int) (signed char)86))))))));
                }
                for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) /* same iter space */
                {
                    arr_77 [i_15] [i_19] [i_15] [i_23] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) (signed char)121)) : ((-2147483647 - 1))))));
                    var_35 = ((/* implicit */_Bool) (-(min((-1394650713), (min((((/* implicit */int) (signed char)-30)), (-1394650713)))))));
                }
                var_36 = ((/* implicit */short) (-(((((/* implicit */_Bool) min(((short)32755), (((/* implicit */short) (signed char)107))))) ? ((~(var_14))) : (((/* implicit */int) min(((signed char)97), ((signed char)-121))))))));
                var_37 += ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (max((min((((/* implicit */int) (signed char)-122)), (-1394650713))), (((/* implicit */int) min(((unsigned short)31302), (((/* implicit */unsigned short) arr_57 [i_15] [i_19] [i_21] [i_19])))))))));
            }
            for (signed char i_24 = 2; i_24 < 14; i_24 += 1) 
            {
                var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_56 [i_15] [i_19] [i_24] [i_15] [i_19] [i_15]))))))) ? (((((/* implicit */_Bool) min((-1394650713), (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (short)-4986)) + (688807876))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)32758)) : (((/* implicit */int) (signed char)121)))))) : (((((/* implicit */_Bool) ((int) (unsigned short)0))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((_Bool) var_10)))))));
                var_39 = ((/* implicit */unsigned char) min((var_39), (min((((/* implicit */unsigned char) min((((((/* implicit */int) var_7)) == (((/* implicit */int) (unsigned short)26)))), ((!(((/* implicit */_Bool) var_15))))))), (var_1)))));
                /* LoopSeq 1 */
                for (short i_25 = 0; i_25 < 17; i_25 += 3) 
                {
                    var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((unsigned short) (signed char)10)))));
                    var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) ((((min((((((/* implicit */_Bool) (short)6319)) ? (((/* implicit */int) arr_78 [i_15] [i_19] [i_24] [(signed char)2])) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_4)))) + (2147483647))) >> (((((/* implicit */int) var_11)) - (7719))))))));
                    arr_82 [i_19] [i_24] [i_24] [i_19] [i_19] [i_19] = ((unsigned short) (signed char)-5);
                }
            }
            arr_83 [i_19] [i_19] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_50 [i_15]))))), (((min((14552322980473135298ULL), (((/* implicit */unsigned long long int) var_3)))) - (max((0ULL), (((/* implicit */unsigned long long int) -688807876))))))));
        }
        for (unsigned long long int i_26 = 0; i_26 < 17; i_26 += 4) 
        {
            arr_86 [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) max((1394650709), (2147483647))))) ^ ((+(((/* implicit */int) (!(((/* implicit */_Bool) 14552322980473135277ULL)))))))));
            /* LoopNest 2 */
            for (signed char i_27 = 1; i_27 < 16; i_27 += 1) 
            {
                for (short i_28 = 3; i_28 < 13; i_28 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_29 = 0; i_29 < 17; i_29 += 1) 
                        {
                            var_42 &= ((/* implicit */signed char) max((arr_54 [i_28] [(signed char)6]), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_70 [i_15] [i_26] [i_27] [i_28])) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)8)))))))));
                            var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) ((arr_39 [i_27 - 1] [i_27 + 1] [i_27 + 1]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_27 - 1] [i_27 + 1] [i_27 + 1])) ? (((/* implicit */int) var_8)) : (-688807885)))))))));
                        }
                        var_44 = ((/* implicit */unsigned short) ((min((max((3894421093236416339ULL), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_15] [i_15] [i_27])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-121))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                        var_45 = ((/* implicit */long long int) (signed char)101);
                        var_46 = var_12;
                    }
                } 
            } 
        }
    }
    var_47 = ((/* implicit */short) (signed char)121);
    /* LoopNest 2 */
    for (unsigned int i_30 = 0; i_30 < 22; i_30 += 2) 
    {
        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
        {
            {
                var_48 = ((/* implicit */short) ((((/* implicit */int) var_2)) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_100 [i_30] [i_31])))))));
                arr_101 [i_30] [i_31] = ((/* implicit */_Bool) -688807879);
            }
        } 
    } 
}
