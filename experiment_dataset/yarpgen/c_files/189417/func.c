/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189417
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
    for (signed char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_12 ^= (_Bool)0;
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0 + 2] [i_0 + 1]) : ((-9223372036854775807LL - 1LL)))))));
        var_14 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-996972110775642924LL)));
    }
    for (long long int i_1 = 1; i_1 < 16; i_1 += 1) 
    {
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) var_3))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_9 [i_1 + 1] [i_1 + 1] [i_3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)15))));
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) 1794081650)) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) (signed char)43)))))))));
                    arr_10 [i_1] = ((/* implicit */_Bool) min((max((((/* implicit */long long int) ((var_3) ? (((/* implicit */int) (_Bool)1)) : (var_5)))), (-1675413551126516731LL))), (((/* implicit */long long int) max((min(((signed char)-15), (var_4))), (((/* implicit */signed char) var_3)))))));
                    arr_11 [i_1] [i_1] [13] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (!(var_6)))) << (((((/* implicit */int) var_6)) >> (((var_0) - (4587212012318298238LL)))))))), (min((((/* implicit */long long int) (+(var_1)))), (max((var_0), (((/* implicit */long long int) var_9))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 11; i_6 += 2) 
            {
                for (unsigned char i_7 = 1; i_7 < 9; i_7 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) var_8)) % (((((/* implicit */int) (unsigned char)122)) << (((((/* implicit */int) (unsigned char)104)) - (99))))))))));
                        arr_26 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) || ((!(((/* implicit */_Bool) var_0))))));
                    }
                } 
            } 
            var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)18)) ? (arr_5 [i_5]) : (var_10)));
            arr_27 [i_5] = ((2305825417027649536LL) >> (((var_1) + (126636963))));
            /* LoopSeq 4 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                var_19 = ((((/* implicit */long long int) ((((((/* implicit */int) var_4)) + (2147483647))) >> (((2305825417027649528LL) - (2305825417027649499LL)))))) - ((((_Bool)1) ? (2305825417027649536LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))));
                var_20 = (+(((((/* implicit */_Bool) (signed char)-15)) ? (9223372036854775794LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */_Bool) 996972110775642907LL);
                arr_33 [i_4] [i_9] [i_9] [i_9] = ((/* implicit */int) (signed char)42);
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (+(((((/* implicit */_Bool) var_10)) ? (-4974905483554713963LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                var_23 = ((/* implicit */_Bool) var_11);
                arr_36 [i_4] [i_5] [i_4] [i_10] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)76)) : (((/* implicit */int) var_4)))) < (((/* implicit */int) var_9))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */_Bool) (unsigned char)82);
                /* LoopSeq 1 */
                for (long long int i_12 = 1; i_12 < 10; i_12 += 4) 
                {
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_4] [i_12 + 2])) ? (var_5) : (((/* implicit */int) var_8)))))));
                    var_26 += ((/* implicit */long long int) (signed char)108);
                }
                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (9223372036854775794LL)))) ? ((~(((/* implicit */int) var_8)))) : ((+(((/* implicit */int) (unsigned char)81)))))))));
            }
            arr_44 [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) var_0)) && ((_Bool)1));
        }
        /* LoopSeq 4 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_47 [i_4] [i_13] = -9223372036854775784LL;
            arr_48 [8LL] [8LL] [i_13] = ((((/* implicit */_Bool) arr_5 [i_4])) ? (((/* implicit */int) var_6)) : (-2127448501));
            var_28 = (+(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (9223372036854775807LL))));
        }
        for (long long int i_14 = 0; i_14 < 12; i_14 += 1) 
        {
            var_29 = ((/* implicit */long long int) max((var_29), (((((/* implicit */_Bool) var_4)) ? (arr_12 [i_14] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
            arr_51 [i_14] [i_14] = ((/* implicit */long long int) var_8);
            var_30 ^= ((/* implicit */long long int) var_5);
        }
        for (int i_15 = 0; i_15 < 12; i_15 += 2) 
        {
            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) (~(arr_1 [i_4] [i_15]))))));
            /* LoopNest 3 */
            for (unsigned char i_16 = 0; i_16 < 12; i_16 += 4) 
            {
                for (signed char i_17 = 3; i_17 < 11; i_17 += 1) 
                {
                    for (signed char i_18 = 0; i_18 < 12; i_18 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (+(var_1))))));
                            arr_65 [i_17] [i_17] [i_16] [i_15] [i_17] = ((/* implicit */unsigned char) ((var_9) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) arr_38 [i_4]))));
            arr_66 [i_15] = ((/* implicit */long long int) var_4);
            var_34 += ((/* implicit */_Bool) var_0);
        }
        for (int i_19 = 2; i_19 < 10; i_19 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
            {
                for (long long int i_21 = 0; i_21 < 12; i_21 += 4) 
                {
                    for (unsigned char i_22 = 0; i_22 < 12; i_22 += 4) 
                    {
                        {
                            arr_80 [i_4] [i_19] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_19] [i_22] = ((((/* implicit */_Bool) arr_42 [i_20 - 1] [i_20 - 1] [i_20 - 1] [3LL] [i_20])) ? (var_1) : (((/* implicit */int) var_3)));
                            var_35 = ((/* implicit */int) ((var_3) || (((_Bool) var_0))));
                        }
                    } 
                } 
            } 
            arr_81 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_68 [i_19] [i_19 - 2] [(_Bool)1])) : (((((/* implicit */int) (unsigned char)203)) % (((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 1 */
            for (int i_23 = 3; i_23 < 11; i_23 += 3) 
            {
                var_36 -= ((/* implicit */int) var_2);
                var_37 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-127)) ? (-6798424844957780657LL) : (((/* implicit */long long int) var_1))));
                var_38 = ((/* implicit */int) var_3);
                /* LoopNest 2 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    for (unsigned char i_25 = 0; i_25 < 12; i_25 += 4) 
                    {
                        {
                            arr_90 [i_4] [i_19 + 1] [i_23 - 2] [(unsigned char)9] = ((/* implicit */unsigned char) var_11);
                            var_39 = ((/* implicit */signed char) ((((((/* implicit */int) var_3)) * (((/* implicit */int) var_2)))) % (var_1)));
                        }
                    } 
                } 
            }
            arr_91 [i_19] &= ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_69 [i_19] [i_19 + 1] [i_19 + 1]));
        }
        arr_92 [i_4] = ((((/* implicit */_Bool) ((640599300) % (((/* implicit */int) (_Bool)1))))) ? (6798424844957780657LL) : (((/* implicit */long long int) ((/* implicit */int) arr_54 [4LL] [i_4]))));
    }
    var_40 = ((/* implicit */signed char) ((var_10) * (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    var_41 = ((/* implicit */_Bool) ((signed char) ((signed char) var_10)));
}
