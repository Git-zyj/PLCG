/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134556
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
    var_17 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) var_2)) : (min((((/* implicit */int) var_8)), (var_11)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) min((arr_3 [i_0] [i_1]), (((arr_3 [i_0] [21ULL]) | (arr_3 [i_0] [i_1])))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    var_19 += ((/* implicit */short) min((9223372036854775807LL), (((/* implicit */long long int) ((signed char) -2096566471)))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_5 [i_0]), (arr_5 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) >= (arr_5 [i_0]))))) : (((arr_5 [i_0]) - (arr_5 [i_0])))));
                }
                /* LoopSeq 3 */
                for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 2; i_5 < 23; i_5 += 2) 
                        {
                            var_20 = ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) var_7)), (16355380284260325751ULL))));
                            var_21 = ((/* implicit */unsigned short) ((min((arr_15 [(signed char)7] [i_5] [i_5 + 2] [i_5 - 1] [(signed char)7] [16U] [12ULL]), (arr_15 [i_5] [i_5] [i_5 + 2] [i_5 - 1] [20ULL] [i_5] [20ULL]))) | (((/* implicit */int) (unsigned short)46444))));
                            var_22 = (-(((/* implicit */int) var_2)));
                            arr_17 [i_0] [i_0] [i_3] [i_0] [24] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) var_4)))))) <= ((~(var_0)))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((min((var_1), (((/* implicit */long long int) (unsigned short)48169)))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))) | (var_0)));
                        }
                        arr_19 [i_0] [i_1] [i_1] [6ULL] = ((/* implicit */long long int) var_14);
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 1; i_6 < 24; i_6 += 2) /* same iter space */
                    {
                        arr_22 [i_0] [(unsigned char)7] [i_3] [i_3] = ((/* implicit */short) ((_Bool) ((unsigned short) (unsigned char)206)));
                        /* LoopSeq 2 */
                        for (signed char i_7 = 1; i_7 < 24; i_7 += 1) 
                        {
                            arr_27 [i_0] [(unsigned short)21] [i_3] [(signed char)10] = ((/* implicit */unsigned int) (-(((((/* implicit */long long int) (-(939524096U)))) + ((((_Bool)1) ? (-164874956444836750LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))));
                            var_23 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) var_12))))));
                        }
                        for (int i_8 = 1; i_8 < 22; i_8 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */unsigned int) arr_20 [i_0])), (1004641638U))));
                            var_25 |= ((/* implicit */unsigned long long int) (-((+(((((/* implicit */int) (unsigned short)28320)) - (((/* implicit */int) (short)4254))))))));
                        }
                    }
                    for (unsigned short i_9 = 1; i_9 < 24; i_9 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */short) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) <= (min((var_16), (((/* implicit */unsigned int) (unsigned char)232)))))));
                        var_27 = ((/* implicit */int) var_12);
                        var_28 = ((/* implicit */int) 3290325658U);
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 1; i_10 < 24; i_10 += 2) /* same iter space */
                    {
                        var_29 += ((/* implicit */int) (short)4239);
                        arr_37 [i_0] = ((/* implicit */long long int) arr_6 [8ULL]);
                    }
                    arr_38 [(_Bool)1] [14ULL] [(_Bool)1] [24] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_3] [i_3])) ? (var_0) : (((/* implicit */unsigned long long int) (-(arr_32 [16U] [i_0] [(signed char)8] [i_3]))))))) ? (min((164874956444836754LL), (-55119679029891986LL))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                }
                for (unsigned char i_11 = 1; i_11 < 23; i_11 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 25; i_12 += 2) 
                    {
                        for (short i_13 = 0; i_13 < 25; i_13 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) arr_40 [17] [i_11 + 2] [15U])) <= (((/* implicit */int) arr_40 [19] [i_11 - 1] [8U]))))), (max((((/* implicit */int) var_6)), (var_11)))));
                                var_31 += ((/* implicit */int) (short)4241);
                                arr_47 [i_0] = ((/* implicit */unsigned short) var_6);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_14 = 0; i_14 < 25; i_14 += 2) 
                    {
                        var_32 |= ((/* implicit */unsigned short) arr_8 [(unsigned short)18] [(unsigned short)18] [i_11]);
                        var_33 = (-(max((var_10), (max((var_11), (((/* implicit */int) arr_48 [i_0] [i_0] [i_11 + 1] [i_0])))))));
                    }
                    var_34 |= ((/* implicit */unsigned short) var_15);
                    /* LoopSeq 3 */
                    for (long long int i_15 = 0; i_15 < 25; i_15 += 3) 
                    {
                        var_35 = arr_30 [i_11 - 1] [i_11 - 1] [i_11] [i_11 + 1] [i_11 - 1];
                        var_36 = ((((/* implicit */int) arr_31 [(short)0] [i_1] [(short)0] [i_15])) <= ((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) <= (var_15)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_16 = 2; i_16 < 23; i_16 += 2) 
                    {
                        var_37 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_26 [i_11] [i_1] [i_11] [i_16 + 1]))))));
                        var_38 ^= ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))));
                        /* LoopSeq 1 */
                        for (signed char i_17 = 0; i_17 < 25; i_17 += 2) 
                        {
                            arr_59 [i_0] [i_0] [i_0] [i_0] [(unsigned char)15] = ((((((/* implicit */long long int) arr_29 [(unsigned short)9])) + (var_7))) >= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_29 [i_0])) : (arr_12 [i_1] [i_1] [i_1] [i_1]))));
                            var_39 = ((/* implicit */short) ((var_1) <= ((-(var_9)))));
                            var_40 = ((/* implicit */unsigned int) var_12);
                        }
                        var_41 = ((/* implicit */short) ((unsigned char) arr_3 [i_1] [i_1]));
                        arr_60 [i_0] [i_1] [i_11] [i_16] = 1004641621U;
                    }
                    for (long long int i_18 = 0; i_18 < 25; i_18 += 1) 
                    {
                        var_42 += ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned char)66)) ? (2790753768U) : (939524085U)))));
                        arr_63 [20U] [20U] [i_0] [2U] = ((/* implicit */int) min((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_62 [9LL] [i_0] [i_0] [i_0]))) - (var_7)))) ? (((((/* implicit */_Bool) var_16)) ? (arr_11 [i_0] [i_0]) : (((/* implicit */long long int) arr_3 [i_1] [(unsigned short)8])))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                        var_43 += ((/* implicit */signed char) min((((/* implicit */long long int) (_Bool)0)), (-1372193118126975642LL)));
                        var_44 += ((/* implicit */long long int) max(((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))))), (((/* implicit */int) ((((/* implicit */int) var_3)) <= (min((var_10), (((/* implicit */int) var_4)))))))));
                    }
                }
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    var_45 = ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
                    var_46 += var_3;
                    var_47 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (min((min((4ULL), (((/* implicit */unsigned long long int) 4294967290U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_0] [(unsigned short)0] [i_0])))))))));
                }
            }
        } 
    } 
}
