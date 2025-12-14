/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138864
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
    var_19 = ((/* implicit */_Bool) max((((/* implicit */int) var_17)), (((((/* implicit */_Bool) ((var_16) << (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_18))))));
    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) -6235212409375841203LL)), (((unsigned long long int) var_7))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) != (arr_4 [i_0] [i_0]))))) * (arr_3 [i_0])));
            var_21 -= ((/* implicit */short) 9378278909898911501ULL);
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_3 = 2; i_3 < 19; i_3 += 3) 
                {
                    for (long long int i_4 = 1; i_4 < 20; i_4 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_1] [i_4] [i_0] [i_0] = ((/* implicit */int) ((unsigned short) 689901835U));
                            var_22 -= ((/* implicit */unsigned char) ((var_15) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3 - 2] [(signed char)12] [(signed char)12])))));
                            arr_15 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned int) (-(arr_13 [i_0] [i_0 - 1] [i_0 + 1] [i_1 - 1] [i_4 - 1])));
                        }
                    } 
                } 
                var_23 ^= ((/* implicit */signed char) var_14);
                var_24 = ((/* implicit */unsigned long long int) var_18);
            }
        }
        var_25 |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_0 - 1]))));
        arr_16 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_14)) & (850039425462630926ULL)));
    }
    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 3) 
        {
            var_26 *= ((/* implicit */unsigned char) arr_7 [i_5]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                arr_24 [i_7] [i_6] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((arr_0 [i_5]) == (((/* implicit */unsigned int) var_3))));
                /* LoopSeq 3 */
                for (signed char i_8 = 0; i_8 < 14; i_8 += 3) 
                {
                    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((arr_2 [i_7] [i_6 - 2]) == (arr_2 [(signed char)5] [i_6 - 2]))))));
                    arr_27 [i_7] [i_7] = ((/* implicit */long long int) ((((((/* implicit */int) var_18)) == (((/* implicit */int) arr_6 [i_7] [i_6] [i_7])))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_8] [i_6])) || (((/* implicit */_Bool) 17596704648246920690ULL)))))));
                    var_28 = ((/* implicit */long long int) max((var_28), (4092384634824379349LL)));
                }
                for (long long int i_9 = 1; i_9 < 13; i_9 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_10 = 0; i_10 < 14; i_10 += 2) 
                    {
                        var_29 ^= ((/* implicit */unsigned int) -5858780149741356744LL);
                        arr_34 [i_5] [i_6] [i_5] [i_9 + 1] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */int) var_10)) * (((/* implicit */int) ((_Bool) var_16)))));
                        arr_35 [i_10] [i_6] [i_7] [i_7] [i_7] [i_6] [i_5] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_7]))) > (var_7)));
                    }
                    for (signed char i_11 = 2; i_11 < 12; i_11 += 3) 
                    {
                        arr_39 [i_6] [i_5] [i_9] [i_5] |= ((/* implicit */_Bool) (+(1747547628U)));
                        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)3)) ? (arr_4 [i_6 + 1] [i_9 + 1]) : (arr_4 [i_6 + 3] [i_9 - 1]))))));
                        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 2134295580)) ? (var_5) : (((/* implicit */unsigned long long int) arr_32 [i_7] [i_9] [i_7] [i_7] [i_6] [i_5]))))))));
                        var_32 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_5] [i_6 - 1] [i_7] [i_5] [i_11])) ? (((/* implicit */int) (unsigned char)137)) : (((/* implicit */int) arr_30 [i_5] [i_6] [i_7] [i_9] [i_11]))));
                        arr_40 [i_5] [i_5] [i_7] [i_7] [i_11] = ((/* implicit */signed char) arr_38 [i_5] [i_6] [i_6 - 1] [i_7] [i_9] [i_11] [i_11]);
                    }
                    /* LoopSeq 2 */
                    for (short i_12 = 0; i_12 < 14; i_12 += 3) /* same iter space */
                    {
                        arr_43 [i_5] [i_7] [i_6] [i_6] [i_7] [i_9] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned long long int) arr_22 [i_7] [i_9 + 1] [i_7]))));
                        var_33 = ((/* implicit */_Bool) (short)5334);
                    }
                    for (short i_13 = 0; i_13 < 14; i_13 += 3) /* same iter space */
                    {
                        var_34 |= (!(((/* implicit */_Bool) arr_7 [i_5])));
                        var_35 |= ((/* implicit */signed char) 4294967295U);
                        var_36 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_5)));
                        arr_46 [i_7] [(signed char)10] [i_7] = ((/* implicit */unsigned int) var_7);
                    }
                    /* LoopSeq 1 */
                    for (long long int i_14 = 2; i_14 < 11; i_14 += 4) 
                    {
                        arr_49 [i_14] [i_14] |= ((/* implicit */unsigned int) ((7964487234415529479ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9686)))));
                        var_37 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_37 [i_5] [i_5] [11U] [i_9] [i_9] [i_14])) : (var_5))) <= (((/* implicit */unsigned long long int) ((arr_21 [i_5]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_16))))));
                        arr_50 [i_5] [i_5] [i_5] [i_5] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (arr_42 [i_14] [i_14 + 2] [(unsigned short)0] [i_14 + 2] [i_14 - 2])));
                        var_38 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_6 + 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6 + 2]))) : (var_5)));
                    }
                    arr_51 [i_7] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 3192839922U)) <= (1152921504606846976ULL)));
                }
                for (signed char i_15 = 0; i_15 < 14; i_15 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 2; i_16 < 13; i_16 += 3) 
                    {
                        var_39 &= ((/* implicit */unsigned long long int) var_9);
                        var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) ((long long int) (short)29729)))));
                        var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) ((arr_55 [i_16 - 2] [i_16] [i_16] [i_16] [i_16 + 1] [i_16]) / (((long long int) 12226507137670418736ULL)))))));
                    }
                    var_42 = ((/* implicit */unsigned int) arr_21 [1LL]);
                }
            }
            var_43 += ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_30 [i_5] [i_6] [i_6] [i_6] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_5] [i_6] [i_6] [i_6 + 4] [i_6]))) : (arr_3 [i_5]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_17 = 0; i_17 < 14; i_17 += 4) 
            {
                var_44 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) 3192839928U)) * (var_0))) >> (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5]))) : (-8531815982639714521LL))) + (25942LL)))));
                arr_60 [i_5] = var_15;
                var_45 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_16)) == (((var_13) + (((/* implicit */unsigned long long int) arr_41 [i_5] [i_5] [i_5]))))));
                arr_61 [(unsigned char)4] [(unsigned char)4] [(unsigned char)4] = ((/* implicit */signed char) 1152921504606847001ULL);
            }
        }
        /* vectorizable */
        for (unsigned long long int i_18 = 0; i_18 < 14; i_18 += 2) 
        {
            arr_64 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((arr_18 [i_5] [i_18]) != (var_5)));
            var_46 ^= ((((/* implicit */int) var_4)) << (((var_5) - (6041138277473105741ULL))));
            arr_65 [11LL] [11LL] = ((/* implicit */unsigned int) ((short) 10U));
        }
        var_47 *= ((/* implicit */short) var_2);
    }
    for (unsigned short i_19 = 2; i_19 < 10; i_19 += 3) 
    {
        arr_68 [i_19] [i_19] = ((/* implicit */unsigned char) (((~(max((var_3), (((/* implicit */int) var_17)))))) <= ((-(((/* implicit */int) (unsigned char)55))))));
        var_48 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)6)) * (((/* implicit */int) (_Bool)0))));
        var_49 = ((/* implicit */unsigned int) ((_Bool) ((arr_36 [i_19 - 2]) <= (((/* implicit */long long int) var_3)))));
    }
}
