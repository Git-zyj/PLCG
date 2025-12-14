/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137939
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) ((int) ((int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_4 [i_0])) : (var_16)))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_15 [i_1 + 1] [i_0] [i_1] [i_1] [i_1] [i_1 + 1] = ((/* implicit */long long int) var_16);
                                var_19 = -1288753269422951392LL;
                                arr_16 [i_0] [i_0] = ((/* implicit */unsigned int) (-(var_2)));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) -7510198764463226675LL)), (0ULL)));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        for (int i_6 = 2; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (~((((~(arr_7 [i_0] [i_1] [i_2]))) + (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1545750547U)))))))))));
                                arr_23 [i_0] [i_1 + 2] [i_2 - 1] [i_6] [i_6] [i_6] = arr_4 [i_2];
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7510198764463226675LL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)4))))), ((~(var_4)))));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 3; i_8 < 19; i_8 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */signed char) (-(max((((/* implicit */long long int) ((unsigned short) (_Bool)1))), (max((((/* implicit */long long int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_9 [i_0])))))));
                            var_24 |= ((/* implicit */_Bool) arr_11 [i_0] [i_2 - 1] [i_0] [i_0] [i_8]);
                            var_25 = ((/* implicit */signed char) var_9);
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_0] [i_7] [i_8])) ? (((unsigned int) ((372449410U) & (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) 0U)))) != (min((7510198764463226671LL), (-7510198764463226672LL)))))))));
                        }
                        for (unsigned int i_9 = 3; i_9 < 19; i_9 += 1) /* same iter space */
                        {
                            var_27 *= var_8;
                            arr_33 [i_0] [i_1] [i_2 - 1] [i_7] [i_9] [i_7] [i_0] = (+(((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_9))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0]))))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_10 = 1; i_10 < 18; i_10 += 2) 
                        {
                            var_28 = ((/* implicit */short) ((int) arr_17 [i_1] [i_2 - 1] [i_7] [i_10 - 1] [i_10] [i_10]));
                            arr_37 [i_0] [i_10] [i_2] [i_0] [i_10 + 2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -7510198764463226675LL)) ? (8928006737352115033ULL) : (((/* implicit */unsigned long long int) 33554432U))));
                            var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(var_8))))));
                        }
                    }
                }
                for (unsigned char i_11 = 1; i_11 < 18; i_11 += 2) 
                {
                    var_30 = ((/* implicit */long long int) var_8);
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 1; i_12 < 19; i_12 += 2) 
                    {
                        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                        {
                            {
                                var_31 ^= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_24 [i_0] [i_1 + 2] [i_12])) ? (arr_24 [i_0] [i_1 + 2] [i_11 + 2]) : (arr_24 [i_1 + 2] [i_1 + 2] [i_12])))));
                                arr_45 [i_0] [i_12] [i_13] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_44 [i_13 + 1] [i_12 + 1])) ? (((/* implicit */long long int) var_9)) : (arr_11 [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 - 1] [i_12 - 1]))), (((/* implicit */long long int) ((var_9) >= (((var_7) * (var_9))))))));
                            }
                        } 
                    } 
                    var_32 = min(((+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-30))) | (var_9))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_11 + 2] [i_11])) || (((/* implicit */_Bool) arr_38 [i_0] [i_11 + 1] [i_1 + 1] [i_0]))))));
                    arr_46 [i_0] [i_0] [i_11] = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) arr_19 [i_0] [i_1] [i_0] [i_0] [i_0])), (arr_20 [i_1 - 1] [i_11 + 1]))), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)16384)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)2016))))))));
                    var_33 ^= (~(var_1));
                }
                var_34 -= ((/* implicit */unsigned short) arr_34 [i_0] [i_0] [i_0] [i_0] [i_1 + 1] [i_1] [i_1 - 1]);
                arr_47 [i_0] [i_1 + 2] = min((-7510198764463226675LL), (((/* implicit */long long int) -1815578342)));
                var_35 = ((/* implicit */long long int) min(((~(3268499306869491069ULL))), (((/* implicit */unsigned long long int) -1963953199))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_14 = 0; i_14 < 17; i_14 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_15 = 0; i_15 < 17; i_15 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (long long int i_16 = 1; i_16 < 15; i_16 += 2) 
            {
                var_36 = ((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) var_3)))));
                arr_55 [i_14] = ((((/* implicit */int) arr_10 [i_15] [i_15] [i_16 + 1] [i_16 - 1])) + (((/* implicit */int) arr_32 [i_16] [i_16] [i_16 + 2] [i_14] [i_16 + 2])));
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 2; i_17 < 15; i_17 += 4) 
                {
                    for (short i_18 = 0; i_18 < 17; i_18 += 3) 
                    {
                        {
                            var_37 -= ((/* implicit */long long int) arr_22 [i_14] [i_17] [i_16 + 1] [i_16] [i_16] [i_17 + 1] [i_18]);
                            arr_60 [i_14] [i_15] [i_16] [i_17] [i_18] = ((unsigned short) (short)(-32767 - 1));
                            var_38 |= ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) (signed char)23)))));
                            arr_61 [i_14] [i_15] [i_16] [i_14] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (arr_13 [i_14] [i_17 - 2] [i_18] [i_16 + 2]) : (arr_13 [i_14] [i_17 + 1] [i_16] [i_16 + 2])));
                        }
                    } 
                } 
            }
            for (unsigned short i_19 = 0; i_19 < 17; i_19 += 2) 
            {
                var_39 = ((/* implicit */_Bool) (+((+(((/* implicit */int) var_5))))));
                arr_65 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (((7510198764463226671LL) & (7510198764463226663LL)))));
                /* LoopSeq 2 */
                for (short i_20 = 0; i_20 < 17; i_20 += 1) 
                {
                    var_40 = ((/* implicit */unsigned short) (-(((long long int) 1560728893U))));
                    arr_70 [i_14] [i_14] [i_19] [i_20] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_14] [i_15] [i_15] [i_19] [i_20])) ? (var_16) : (((/* implicit */int) arr_18 [i_14]))))) ? (((/* implicit */long long int) var_9)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_9)) : (arr_24 [i_14] [i_15] [i_19])))));
                }
                for (long long int i_21 = 0; i_21 < 17; i_21 += 2) 
                {
                    arr_74 [i_21] [i_19] [i_14] [i_15] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_49 [i_19] [i_14]))));
                    var_41 = var_12;
                    arr_75 [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])) ? (arr_68 [i_21] [i_19] [i_15] [i_14]) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (var_15)))));
                    var_42 = ((/* implicit */long long int) var_7);
                }
            }
            for (long long int i_22 = 0; i_22 < 17; i_22 += 2) 
            {
                arr_78 [i_14] [i_15] [i_15] [i_14] = ((/* implicit */signed char) ((int) 0U));
                var_43 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (var_0)));
            }
            arr_79 [i_14] [i_15] = ((/* implicit */unsigned short) var_7);
        }
        for (unsigned short i_23 = 0; i_23 < 17; i_23 += 1) /* same iter space */
        {
            var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) var_16))));
            arr_82 [i_14] [i_23] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_17))) * (arr_52 [i_23] [i_23] [i_14]))) | (((/* implicit */unsigned int) var_16))));
            var_45 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_16)) ? (arr_52 [i_14] [i_14] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
        }
        var_46 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) arr_48 [i_14])) ^ ((~(2731332950U)))));
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 17; i_24 += 4) 
        {
            for (long long int i_25 = 1; i_25 < 16; i_25 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_26 = 0; i_26 < 17; i_26 += 1) 
                    {
                        for (long long int i_27 = 2; i_27 < 14; i_27 += 2) 
                        {
                            {
                                arr_94 [i_14] [i_14] [i_24] [i_25 - 1] [i_26] [i_14] = ((/* implicit */signed char) (+(((var_11) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_27] [i_27 - 1] [i_27] [i_27] [i_27]))) : (-7510198764463226672LL)))));
                                var_47 ^= 4955962928056034185LL;
                                var_48 = ((/* implicit */unsigned short) ((((long long int) 635317593U)) << ((((~(var_4))) - (9999067734987928764ULL)))));
                                arr_95 [i_14] [i_24] [i_25] [i_26] [i_27 + 3] = ((/* implicit */unsigned char) var_9);
                            }
                        } 
                    } 
                    arr_96 [i_14] = ((unsigned int) ((signed char) 635317610U));
                }
            } 
        } 
    }
}
