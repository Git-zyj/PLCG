/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135508
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
    var_18 -= ((((((/* implicit */int) (!((_Bool)0)))) ^ (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_17))))))) >= (((/* implicit */int) var_2)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 &= ((/* implicit */signed char) ((((/* implicit */int) var_6)) >> ((((~(((/* implicit */int) var_13)))) + (12049)))));
        var_20 += ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_11))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((arr_0 [i_0]) << (((-2989962068911145213LL) + (2989962068911145235LL))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) != (-2989962068911145213LL)))))));
            var_21 = -9222647895734788995LL;
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_1] [i_0])))))));
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */int) ((2989962068911145212LL) != (2989962068911145212LL)))) >= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_17))) != (-4175297743853909410LL)))))))));
            var_24 *= ((-2989962068911145213LL) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) var_17)))))));
        }
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 2) 
    {
        arr_8 [i_2 - 2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) (_Bool)1)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) var_5))));
            var_26 += ((/* implicit */long long int) (-(arr_2 [i_2 - 2] [i_2 - 1])));
            var_27 += ((/* implicit */long long int) ((((((/* implicit */int) arr_9 [i_2 - 1])) ^ (((/* implicit */int) (short)5374)))) >= (((/* implicit */int) ((unsigned short) arr_9 [i_2 - 2])))));
        }
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            var_28 = ((/* implicit */_Bool) min((var_28), (var_16)));
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                var_29 *= ((/* implicit */unsigned int) (~(((((/* implicit */int) var_16)) & (((/* implicit */int) arr_15 [i_4] [i_4]))))));
                /* LoopSeq 1 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    var_30 += arr_15 [i_7] [i_4];
                    var_31 += ((_Bool) 16777215LL);
                    /* LoopSeq 2 */
                    for (long long int i_8 = 1; i_8 < 16; i_8 += 3) 
                    {
                        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((unsigned char) arr_23 [i_8 + 4] [i_8] [i_8 - 1] [i_8 + 2] [i_8 + 3])))));
                        arr_24 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_18 [i_7 - 1] [i_6] [i_4] [i_4])))));
                        var_33 -= ((/* implicit */long long int) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) != (16777215LL)))))));
                    }
                    for (short i_9 = 4; i_9 < 18; i_9 += 3) 
                    {
                        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_5] [i_5] [i_5] [i_7 - 1] [i_7 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : ((+(var_8))))))));
                        var_35 -= ((((arr_0 [i_5]) & (((/* implicit */unsigned long long int) arr_20 [i_4] [i_4] [i_4] [i_4])))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) var_7))))));
                        var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) (~(((/* implicit */int) var_3)))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        var_37 *= ((/* implicit */short) (+(((/* implicit */int) var_10))));
                        var_38 += ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_5)) : (362538555325517675LL))));
                    }
                }
                arr_31 [i_6] [i_6] [i_4] = ((/* implicit */unsigned short) (+(var_1)));
            }
        }
        for (unsigned int i_11 = 1; i_11 < 16; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (long long int i_13 = 0; i_13 < 20; i_13 += 3) 
                {
                    {
                        var_39 *= ((/* implicit */_Bool) arr_29 [i_4] [i_4] [i_12] [i_4] [i_11] [i_4]);
                        var_40 = ((((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_12] [i_12]))))) ? (var_11) : (((/* implicit */long long int) (-(3571028962U)))));
                        var_41 = var_11;
                        var_42 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_16)) << ((((+(var_8))) - (8768782448931992263ULL)))));
                        var_43 += ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (13343672608910165070ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_10))))));
                    }
                } 
            } 
            arr_39 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 12140486U)) != (var_11)));
        }
        var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) (~(((/* implicit */int) var_2)))))));
        var_45 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 9006649498927104LL))) || (((/* implicit */_Bool) -16777216LL))));
    }
    /* vectorizable */
    for (long long int i_14 = 0; i_14 < 20; i_14 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
        {
            var_46 += ((/* implicit */unsigned short) 16ULL);
            var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_19 [i_14] [i_15] [i_15])))))));
            var_48 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_14]))) % (8191LL)));
            /* LoopSeq 3 */
            for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_17 = 2; i_17 < 18; i_17 += 3) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 2) 
                    {
                        {
                            var_49 -= ((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_17 + 2] [i_17 + 1] [i_17 + 2])) != (((/* implicit */int) (signed char)110))));
                            var_50 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) arr_16 [i_14] [i_15] [i_14])))))) > (arr_28 [i_14] [i_15] [i_16] [i_17 - 2] [i_17 - 2] [i_17 - 1] [i_16])));
                            var_51 -= ((/* implicit */unsigned short) (~(arr_45 [i_17 + 1])));
                            var_52 -= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                        }
                    } 
                } 
                var_53 = ((/* implicit */short) (~(((/* implicit */int) var_7))));
            }
            for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 2) 
            {
                var_54 = ((/* implicit */_Bool) arr_16 [i_14] [i_15] [i_19]);
                /* LoopNest 2 */
                for (long long int i_20 = 1; i_20 < 16; i_20 += 2) 
                {
                    for (unsigned long long int i_21 = 3; i_21 < 19; i_21 += 2) 
                    {
                        {
                            var_55 *= ((/* implicit */unsigned short) arr_4 [i_14] [i_14]);
                            var_56 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_54 [i_21 - 1] [i_19] [i_19] [i_14]))) & (arr_52 [i_14] [i_15] [i_20 + 1] [i_21 - 3] [i_21])));
                            var_57 = ((/* implicit */long long int) max((var_57), (((/* implicit */long long int) (_Bool)1))));
                        }
                    } 
                } 
                var_58 = ((/* implicit */signed char) ((((/* implicit */int) var_14)) & (((/* implicit */int) var_17))));
                var_59 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_14] [i_14] [i_14] [i_14])))))));
                var_60 = ((/* implicit */long long int) (~((-(((/* implicit */int) var_14))))));
            }
            for (unsigned char i_22 = 0; i_22 < 20; i_22 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_23 = 2; i_23 < 19; i_23 += 3) 
                {
                    var_61 = var_1;
                    var_62 = ((/* implicit */_Bool) max((var_62), (((/* implicit */_Bool) (-(((/* implicit */int) ((var_1) >= (((/* implicit */long long int) ((/* implicit */int) (short)3185)))))))))));
                    var_63 *= ((/* implicit */short) (-(15048394902057543910ULL)));
                    var_64 = ((/* implicit */unsigned char) (~(arr_52 [i_14] [i_14] [i_15] [i_23] [i_23 + 1])));
                    var_65 = ((/* implicit */_Bool) min((var_65), (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_22] [i_22] [i_22] [i_23 - 2] [i_15]))) > (0LL)))) < (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_12 [i_22] [i_14])))))))));
                }
                for (long long int i_24 = 0; i_24 < 20; i_24 += 2) 
                {
                    var_66 = ((/* implicit */unsigned int) min((var_66), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_57 [i_14] [i_14] [i_24] [i_14] [i_14])) >= (((((/* implicit */unsigned long long int) -1LL)) ^ (13343672608910165077ULL))))))));
                    var_67 = ((/* implicit */unsigned int) max((var_67), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_63 [i_24] [i_15] [i_15])) ? (arr_29 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))))))));
                    var_68 += ((/* implicit */unsigned short) arr_17 [i_14] [i_15] [i_22] [i_24]);
                }
                var_69 *= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1)))))));
                arr_67 [i_14] [i_15] [i_22] = ((/* implicit */long long int) var_2);
                var_70 = ((/* implicit */_Bool) max((var_70), (((/* implicit */_Bool) (~(((/* implicit */int) arr_38 [i_14] [i_14] [i_14] [i_14] [i_14])))))));
            }
        }
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_26 = 0; i_26 < 20; i_26 += 3) 
            {
                var_71 *= ((/* implicit */unsigned char) ((long long int) 1891855429U));
                var_72 = ((/* implicit */_Bool) min((var_72), (((/* implicit */_Bool) (~(var_5))))));
                arr_74 [i_26] [i_14] [i_14] [i_14] &= ((/* implicit */unsigned short) ((long long int) arr_66 [i_25] [i_25] [i_25] [i_25]));
                var_73 = ((/* implicit */_Bool) max((var_73), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) & ((~(var_1))))))));
                var_74 -= ((/* implicit */unsigned short) (+(var_15)));
            }
            var_75 *= ((/* implicit */_Bool) arr_2 [i_14] [i_25]);
        }
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
        {
            var_76 -= ((/* implicit */unsigned long long int) ((5103071464799386545ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            var_77 = ((/* implicit */long long int) min((var_77), (((/* implicit */long long int) ((short) 16777231LL)))));
            var_78 -= ((/* implicit */unsigned long long int) (unsigned char)252);
        }
        for (signed char i_28 = 0; i_28 < 20; i_28 += 2) 
        {
            var_79 = ((/* implicit */_Bool) min((var_79), (((/* implicit */_Bool) ((arr_60 [i_14] [i_14] [i_14]) % (arr_41 [i_14]))))));
            var_80 ^= (unsigned short)16384;
            var_81 *= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 12572173240093720185ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)16371))))));
        }
        var_82 += ((/* implicit */short) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) >= (598322809040567593LL))));
    }
    var_83 = ((/* implicit */unsigned char) (short)-12227);
    /* LoopSeq 1 */
    for (short i_29 = 0; i_29 < 25; i_29 += 2) 
    {
        var_84 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)2047))))) ? ((+(((/* implicit */int) (unsigned short)2047)))) : (((/* implicit */int) ((-1LL) < (((/* implicit */long long int) ((/* implicit */int) var_16))))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
        var_85 = ((/* implicit */_Bool) min((var_85), (((/* implicit */_Bool) 0U))));
        /* LoopNest 2 */
        for (unsigned char i_30 = 0; i_30 < 25; i_30 += 3) 
        {
            for (unsigned char i_31 = 1; i_31 < 22; i_31 += 3) 
            {
                {
                    var_86 *= ((/* implicit */long long int) (+(((((/* implicit */int) min((((/* implicit */unsigned short) (short)5957)), (var_6)))) & (((/* implicit */int) (_Bool)0))))));
                    arr_90 [i_31] [i_31] = ((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & ((-9223372036854775807LL - 1LL))))));
                    var_87 = (+((+(arr_84 [i_31 - 1] [i_31 + 1] [i_31 - 1]))));
                    var_88 = ((/* implicit */long long int) max((var_88), (((/* implicit */long long int) arr_86 [i_31] [i_30]))));
                }
            } 
        } 
        var_89 += ((/* implicit */long long int) (+(((((/* implicit */int) arr_81 [i_29])) - (((/* implicit */int) var_2))))));
    }
}
