/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18051
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
    var_11 ^= ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 6; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (short i_4 = 1; i_4 < 8; i_4 += 4) 
                            {
                                var_12 = ((/* implicit */unsigned char) arr_14 [i_4] [i_3] [i_0] [i_1] [i_0]);
                                var_13 = min((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) 5603742202650377886ULL)) ? (1152921504606846976LL) : (-1152921504606846986LL))));
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) >= ((+(arr_12 [i_4 - 1] [i_4])))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_15 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1152921504606846977LL)) ? (arr_16 [i_2] [i_5] [i_3] [i_3] [i_5]) : (arr_12 [i_0] [i_0 + 3])))) ? (((/* implicit */int) ((unsigned char) arr_13 [i_2] [i_1] [i_0] [i_1] [i_3] [i_2] [i_1]))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 2345647939U))))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_13 [i_0] [i_0] [i_0] [6U] [6U] [i_0] [i_5]), (((/* implicit */unsigned long long int) var_7))))))))));
                                var_16 = ((/* implicit */unsigned int) (((-(1152921504606846985LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_5 [i_0 + 2] [i_0 + 2]))))));
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                            {
                                var_17 = ((/* implicit */int) arr_5 [i_2] [i_6]);
                                arr_22 [i_0 + 1] [i_0 + 1] [(unsigned char)2] [i_2] = ((/* implicit */short) ((var_2) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                                var_18 = ((/* implicit */signed char) max(((((!(((/* implicit */_Bool) var_3)))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_3] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-1152921504606846986LL)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0 + 2] [i_2 + 1] [i_3])))))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) ? (((unsigned int) (unsigned char)179)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))))))));
                            }
                            var_20 = ((/* implicit */short) min((((/* implicit */long long int) arr_4 [i_0] [i_0])), (((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (((((/* implicit */_Bool) arr_7 [i_2])) ? (1152921504606846995LL) : (-1152921504606846983LL)))))));
                            /* LoopSeq 3 */
                            for (long long int i_7 = 2; i_7 < 7; i_7 += 2) 
                            {
                                var_21 = ((/* implicit */long long int) max((var_21), (-1152921504606846957LL)));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) < (-1152921504606846977LL)));
                                var_23 ^= ((/* implicit */unsigned int) var_4);
                            }
                            for (short i_8 = 3; i_8 < 8; i_8 += 1) 
                            {
                                var_24 -= ((/* implicit */unsigned short) 4486007441326080ULL);
                                var_25 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_10)), ((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_3 [i_2] [i_1] [i_3])))))));
                            }
                            for (unsigned short i_9 = 1; i_9 < 9; i_9 += 4) 
                            {
                                arr_30 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (4486007441326080ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])))) << (((4486007441326080ULL) - (4486007441326062ULL)))))) ? (max((max((((/* implicit */unsigned long long int) arr_28 [i_0] [i_1] [(short)5] [i_3] [(short)5] [i_2])), (var_3))), (((/* implicit */unsigned long long int) min((-1152921504606846977LL), (arr_27 [i_0] [i_0] [i_2] [i_3] [i_9])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_2 - 1] [i_2 - 1] [i_9 - 1])) ? (arr_10 [i_0 + 4] [i_2 - 1] [i_2] [i_9 - 1]) : (arr_10 [i_0 + 4] [i_2 - 1] [i_2] [i_9 + 1])))));
                            }
                            var_27 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) var_8))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 4; i_11 < 8; i_11 += 2) 
                    {
                        {
                            var_28 = (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_34 [i_1] [i_11 - 4]))))));
                            var_29 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) ((1152921504606846977LL) >> (((var_3) - (141776248386927409ULL)))))))));
                            var_30 = max((((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((1152921504606846970LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))))) : (((497151499495935402LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)75))))))), (arr_12 [i_0] [i_0]));
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1152921504606847000LL)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) - (((((/* implicit */_Bool) -1152921504606846977LL)) ? (1152921504606846964LL) : (-1152921504606846972LL))))) : (-1152921504606846992LL)));
                        }
                    } 
                } 
                var_32 = ((/* implicit */unsigned int) max((((/* implicit */int) ((_Bool) ((arr_15 [i_0] [i_0] [i_0] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3319))))))), (max((((/* implicit */int) var_4)), (((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_10))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
    {
        for (long long int i_13 = 0; i_13 < 16; i_13 += 4) 
        {
            for (short i_14 = 2; i_14 < 13; i_14 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_15 = 2; i_15 < 15; i_15 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) 18446744073709551588ULL))));
                        var_34 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_41 [i_14])) : (((/* implicit */int) var_8)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                    }
                    /* vectorizable */
                    for (short i_16 = 0; i_16 < 16; i_16 += 2) 
                    {
                        arr_47 [i_13] [i_13] [i_13] [(unsigned char)0] = ((/* implicit */unsigned short) (~(arr_40 [i_14] [i_14 - 2] [i_14 + 2])));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 2) 
                        {
                            var_35 = ((/* implicit */unsigned int) var_8);
                            var_36 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_12 - 1])) ? (arr_37 [i_12 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                            arr_52 [i_12] [i_12] [i_12] [(short)10] [i_12] [i_12] [i_12] = ((/* implicit */signed char) 1152921504606846982LL);
                        }
                        for (unsigned short i_18 = 0; i_18 < 16; i_18 += 2) 
                        {
                            arr_56 [i_14] [i_16] [i_14] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) (unsigned short)36123);
                            arr_57 [i_16] [i_16] [i_16] [i_12] [i_13] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_55 [i_12] [i_12 - 1] [i_16] [i_16] [i_16])) << (((arr_40 [i_12] [i_12 - 1] [i_12]) + (1069232146)))));
                            var_37 = ((/* implicit */_Bool) ((2U) >> (((arr_49 [i_14 + 2] [i_14] [i_14 - 1] [i_12 - 1] [i_12 - 1]) + (5409055922882987406LL)))));
                        }
                        for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 4) 
                        {
                            arr_61 [(_Bool)1] [i_13] [i_13] = ((/* implicit */int) -1152921504606846978LL);
                            arr_62 [i_12] [i_13] [i_14] [i_16] [10] [i_13] [i_12] = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_19] [i_19] [i_19]))) : (1874824154712632438ULL));
                            var_38 ^= var_0;
                        }
                        /* LoopSeq 4 */
                        for (short i_20 = 0; i_20 < 16; i_20 += 4) 
                        {
                            arr_67 [i_12] [i_13] [i_13] [i_14] [i_16] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((unsigned char) arr_53 [i_14] [i_14 - 2] [i_14] [i_14 + 2] [i_14 - 1] [i_14 - 1] [i_14 + 3]));
                            var_39 &= ((/* implicit */long long int) 2U);
                            var_40 = ((/* implicit */int) ((1152921504606846976LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9)))));
                        }
                        for (unsigned long long int i_21 = 0; i_21 < 16; i_21 += 1) /* same iter space */
                        {
                            var_41 = ((/* implicit */short) (+(arr_35 [i_12])));
                            var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_21] [i_16] [i_14 - 2] [i_13] [i_12]))))) >> (((((((/* implicit */_Bool) arr_54 [i_12] [i_12] [6LL])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))) - (9552))))))));
                            var_43 *= ((/* implicit */unsigned int) -1152921504606846999LL);
                        }
                        for (unsigned long long int i_22 = 0; i_22 < 16; i_22 += 1) /* same iter space */
                        {
                            arr_72 [i_12] [i_13] [i_13] [i_14 - 2] [(unsigned char)8] [i_22] = ((/* implicit */int) 2749246113953420056ULL);
                            arr_73 [i_12] [i_13] [i_14] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */unsigned long long int) 497151499495935394LL)) ^ (arr_69 [2LL] [2LL] [i_13] [i_13] [i_13] [8] [i_22])))));
                            var_44 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)14))));
                            var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)6)) ? (arr_45 [i_16] [i_13] [i_13] [i_12 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6)))));
                            var_46 = ((/* implicit */long long int) var_8);
                        }
                        for (unsigned long long int i_23 = 0; i_23 < 16; i_23 += 1) /* same iter space */
                        {
                            var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1152921504606846966LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)72))) : (16460205050586775440ULL)));
                            var_48 -= ((/* implicit */_Bool) (+(arr_39 [i_12] [i_12])));
                            var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) % (((/* implicit */unsigned long long int) 1152921504606846985LL)))))));
                            var_50 = ((/* implicit */_Bool) arr_58 [i_12] [i_13] [i_12]);
                        }
                    }
                    for (unsigned char i_24 = 0; i_24 < 16; i_24 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_25 = 2; i_25 < 15; i_25 += 4) 
                        {
                            var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) arr_40 [i_12] [i_12] [i_12]))));
                            var_52 = ((/* implicit */unsigned short) arr_55 [i_12] [i_24] [i_24] [i_24] [i_12]);
                            arr_82 [1ULL] [i_13] [i_13] [i_14] [i_13] [i_13] [i_13] = max((((/* implicit */long long int) (+(((/* implicit */int) arr_48 [i_12 - 1] [i_25 + 1]))))), (((max((1152921504606846965LL), (arr_70 [i_14]))) & (((long long int) -1152921504606846994LL)))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned short i_26 = 0; i_26 < 16; i_26 += 3) 
                        {
                            var_53 = ((/* implicit */_Bool) var_6);
                            var_54 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_10)))) ? (arr_43 [i_12] [i_13] [i_14] [i_26]) : (min((var_2), (arr_43 [i_24] [i_14 - 2] [i_13] [i_12])))));
                            var_55 &= ((/* implicit */short) arr_45 [i_12 - 1] [i_13] [i_12 - 1] [i_24]);
                            var_56 = ((/* implicit */short) max((((/* implicit */int) max((arr_46 [i_14] [i_24]), (((/* implicit */unsigned short) arr_48 [i_14 + 1] [i_12 - 1]))))), (((((/* implicit */_Bool) min((arr_50 [i_12]), (((/* implicit */unsigned short) var_9))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((short) var_5)))))));
                        }
                        for (unsigned long long int i_27 = 0; i_27 < 16; i_27 += 4) /* same iter space */
                        {
                            var_57 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_0)) ? (arr_78 [i_14 - 2] [i_24]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : ((~(max((((/* implicit */unsigned long long int) (signed char)-6)), (arr_54 [i_24] [i_24] [i_13])))))));
                            var_58 = ((/* implicit */unsigned long long int) (_Bool)0);
                            var_59 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) | (((/* implicit */int) arr_58 [i_12] [i_13] [i_14])))) & (((/* implicit */int) var_7))))) ? (min((-1152921504606846986LL), (((/* implicit */long long int) (unsigned char)40)))) : (((/* implicit */long long int) 1866821311U))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_28 = 0; i_28 < 16; i_28 += 4) /* same iter space */
                        {
                            arr_90 [i_28] [i_28] [i_24] [i_13] [i_13] [i_12] = ((/* implicit */long long int) (~(((/* implicit */int) var_9))));
                            var_60 = ((/* implicit */unsigned int) arr_84 [i_12] [i_12] [i_12] [i_12] [i_12]);
                        }
                        var_61 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_55 [i_12] [i_12] [i_12] [i_12] [i_12])), (arr_53 [i_12] [5ULL] [i_13] [7] [i_24] [i_24] [i_24])));
                    }
                    var_62 += ((/* implicit */signed char) (~(min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) arr_79 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])) : (((/* implicit */int) var_7))))))));
                }
            } 
        } 
    } 
    var_63 = ((/* implicit */long long int) var_7);
    var_64 &= ((/* implicit */unsigned char) max(((+(((/* implicit */int) (!(var_5)))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) var_5))))))))));
}
