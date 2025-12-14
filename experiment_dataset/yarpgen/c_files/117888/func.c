/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117888
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
    var_18 *= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((var_14) > (((/* implicit */unsigned long long int) 171532563))))), (((int) (unsigned short)25348))))) && (((/* implicit */_Bool) ((unsigned short) max((-1310468859), (((/* implicit */int) (signed char)120))))))));
    var_19 = ((/* implicit */unsigned long long int) 3084414172U);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_1] [i_0 - 1] = ((/* implicit */short) ((_Bool) (+(((var_4) >> (((((/* implicit */int) var_17)) - (31))))))));
                    var_20 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_5))))) < (-344842567186160237LL)))), (min((var_6), (max((((/* implicit */int) arr_1 [i_0 - 1])), (var_16)))))));
                    arr_10 [i_0 - 1] [i_1] [i_1] [i_0 - 1] = ((/* implicit */unsigned long long int) var_3);
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned int) ((unsigned short) (+(((/* implicit */int) (unsigned short)65523)))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 3; i_3 < 8; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 14169173084089783041ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_7]))) : (-344842567186160234LL)));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_3) ? (138973765U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4] [i_6] [i_7])))))) || (((/* implicit */_Bool) ((2185597898584055669ULL) ^ (17564726095913250074ULL))))));
                            var_23 = ((/* implicit */unsigned int) (unsigned short)25348);
                            var_24 = (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)40188)) || (((/* implicit */_Bool) 138973770U))))));
                            var_25 = ((/* implicit */short) ((unsigned long long int) (+(arr_15 [i_3 + 2] [i_3 + 2] [i_3 + 2]))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned char) var_10);
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_13))));
                            arr_34 [i_3] [i_4] [i_8] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2085)) ? (((/* implicit */int) var_17)) : (var_2)))) ? (((var_6) | (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)-123)) : (var_6)))));
                        }
                    } 
                } 
            } 
            arr_35 [i_3] [i_3] [(unsigned char)2] = ((/* implicit */signed char) ((unsigned long long int) arr_2 [i_3 + 1]));
            /* LoopSeq 3 */
            for (unsigned char i_11 = 1; i_11 < 9; i_11 += 1) 
            {
                var_28 |= ((/* implicit */unsigned short) ((arr_36 [i_3] [i_11 + 2] [i_11] [i_11]) - (((/* implicit */int) arr_22 [i_3] [i_3] [i_3] [i_3 + 3] [i_3] [i_11]))));
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 1) 
                {
                    for (short i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */long long int) ((var_12) - (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)25328)))))));
                            var_30 = ((/* implicit */int) var_17);
                            var_31 = arr_41 [i_11 + 2] [i_4] [i_3 - 3] [i_11 + 2] [4ULL];
                            var_32 ^= ((/* implicit */short) (+(((/* implicit */int) arr_30 [i_13] [i_12] [i_3] [i_4] [i_3]))));
                        }
                    } 
                } 
            }
            for (long long int i_14 = 0; i_14 < 11; i_14 += 1) 
            {
                var_33 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-2097)) : (((/* implicit */int) arr_5 [i_3] [i_4] [i_14])))) + (2147483647))) >> (((((1310468858) + (((/* implicit */int) var_15)))) - (1310468906)))));
                var_34 |= ((/* implicit */signed char) (+(((/* implicit */int) var_17))));
                var_35 |= ((/* implicit */unsigned long long int) arr_20 [i_3] [i_3 - 3] [i_14] [i_14]);
                arr_47 [i_3] &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (156690164) : (((/* implicit */int) arr_12 [i_3]))))) >= (((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_14] [i_4] [i_3])))))));
                var_36 |= ((/* implicit */signed char) (+((+(((/* implicit */int) var_17))))));
            }
            for (signed char i_15 = 1; i_15 < 8; i_15 += 1) 
            {
                var_37 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_15] [i_3 - 2] [i_15 + 2])) > (((/* implicit */int) arr_6 [i_3] [i_3 - 1] [i_15 + 3]))));
                var_38 = ((/* implicit */short) (+(((4168701600U) << (((((/* implicit */int) var_15)) - (24)))))));
                /* LoopSeq 2 */
                for (int i_16 = 0; i_16 < 11; i_16 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        arr_58 [i_3] [i_3] [i_4] [i_3] [i_3] [i_17] [i_17] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_53 [i_3 - 2])) ? (((/* implicit */int) arr_53 [i_3 + 2])) : (((/* implicit */int) var_17))));
                        var_39 |= ((/* implicit */unsigned short) ((int) (signed char)15));
                    }
                    for (short i_18 = 0; i_18 < 11; i_18 += 1) 
                    {
                        var_40 |= ((/* implicit */_Bool) ((short) (short)(-32767 - 1)));
                        arr_61 [i_3 - 2] [i_4] [i_15 - 1] [i_3 - 2] [i_3 - 2] = ((/* implicit */_Bool) ((((((/* implicit */int) var_13)) < (((/* implicit */int) var_17)))) ? ((+(8722653325488947754ULL))) : (((((/* implicit */_Bool) arr_51 [i_4] [i_4] [i_15] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32760))) : (var_14)))));
                    }
                    for (unsigned int i_19 = 4; i_19 < 10; i_19 += 1) 
                    {
                        var_41 -= ((/* implicit */long long int) var_15);
                        var_42 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)40188))))) || (((((/* implicit */int) var_10)) < (((/* implicit */int) var_17))))));
                    }
                    var_43 = arr_3 [13LL] [13LL] [13LL];
                }
                for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                {
                    arr_66 [5ULL] = ((/* implicit */int) arr_51 [i_3 - 1] [i_4] [i_3 - 1] [i_4]);
                    var_44 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)13))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12803))) >= (var_14))))) : (((arr_43 [i_15 + 1] [i_20]) / (((/* implicit */long long int) -1754434904))))));
                    /* LoopSeq 4 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_45 &= ((/* implicit */long long int) (((~(4277570989619768574ULL))) >> (((((/* implicit */int) (signed char)-115)) + (141)))));
                        arr_69 [i_3 - 1] [i_4] [i_4] [i_20] [i_21] = ((/* implicit */unsigned long long int) arr_38 [i_3 - 1] [i_4]);
                        arr_70 [i_3] [(short)9] [i_3 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)119))))) ? (((7825939796353363390ULL) * (14169173084089783042ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) >= (14169173084089783023ULL)))))));
                        var_46 = ((/* implicit */unsigned long long int) var_13);
                    }
                    for (long long int i_22 = 0; i_22 < 11; i_22 += 1) 
                    {
                        arr_75 [i_4] [i_20] [i_15 + 1] [i_4] [i_3] [i_3] = ((/* implicit */unsigned long long int) (((((+(var_2))) + (2147483647))) >> ((((+(((/* implicit */int) var_15)))) - (46)))));
                        arr_76 [i_15] [i_4] [i_15] [i_15] [i_22] [i_3] [i_22] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) -374996695)) > (arr_68 [i_22] [i_20 + 1] [i_15] [i_3] [i_4] [i_3])))) >> (((117077936) - (117077926)))));
                    }
                    for (unsigned short i_23 = 0; i_23 < 11; i_23 += 1) 
                    {
                        var_47 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4277570989619768562ULL)) ? (0ULL) : (arr_52 [i_3 - 2] [i_4] [i_3 - 2] [i_4])))) ? (((14169173084089783059ULL) + (((/* implicit */unsigned long long int) arr_19 [i_4] [i_4] [i_4] [i_23])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_73 [i_3 + 2] [i_4] [i_15 + 1] [i_4] [i_3 + 2] [i_23] [i_23])) - (arr_63 [i_3] [i_4] [i_23] [i_23] [i_23] [i_3] [(_Bool)1]))))));
                        var_48 ^= ((/* implicit */short) ((int) ((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-31215))))));
                        arr_79 [i_23] [i_3 + 3] = arr_77 [i_3];
                    }
                    for (int i_24 = 2; i_24 < 7; i_24 += 1) 
                    {
                        arr_82 [i_24] [i_4] [i_4] [i_20 + 1] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65522)) ? (((/* implicit */int) arr_20 [i_3 - 3] [i_4] [i_15] [i_4])) : (((/* implicit */int) arr_39 [i_24 + 1] [i_20] [i_15] [i_4]))));
                        arr_83 [i_3] [i_4] [i_15] [i_4] [i_4] [i_3] [i_15] = ((/* implicit */short) (+(((int) arr_51 [i_3] [i_15 - 1] [i_15 - 1] [i_15 - 1]))));
                    }
                }
                var_49 ^= ((/* implicit */short) ((((_Bool) arr_22 [i_3] [i_3] [i_4] [i_4] [i_4] [i_4])) ? (((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) (short)10597)) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 344842567186160213LL)) >= (arr_52 [i_3] [i_15] [i_15] [(_Bool)1]))))));
            }
        }
        arr_84 [i_3] |= ((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_3]))));
    }
    var_50 ^= ((/* implicit */_Bool) var_12);
}
