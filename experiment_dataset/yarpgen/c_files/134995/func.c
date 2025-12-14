/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134995
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
    var_16 = var_10;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            {
                var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 4395899027456LL)) ? (((((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (arr_1 [i_0])))) << (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_4 [i_1] [i_1] [i_0]))));
                var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) arr_4 [(unsigned short)13] [i_1] [i_1])))))), (min((((/* implicit */unsigned long long int) arr_0 [i_1])), (min((var_6), (var_5)))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
                {
                    arr_7 [i_0] [i_0] &= ((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) max((-4395899027459LL), (((/* implicit */long long int) ((((/* implicit */int) var_2)) << (((arr_5 [i_1 + 1] [i_2]) - (9447004641408930971ULL)))))))))));
                    var_19 &= ((/* implicit */signed char) ((_Bool) ((4395899027456LL) - (((/* implicit */long long int) 3847130773U)))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned short) var_7);
                            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_0 [i_0])))))));
                            var_22 = var_5;
                        }
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_23 &= ((/* implicit */signed char) ((unsigned int) (unsigned short)3093));
                            var_24 = ((/* implicit */unsigned short) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_3])) ? (536866816U) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [23LL] [23LL] [i_1 - 3])) / (((/* implicit */int) arr_3 [i_1 - 3])))))));
                        var_26 |= ((unsigned long long int) var_6);
                        var_27 &= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */short) var_9)), (var_2)))), (arr_13 [i_3] [i_3] [i_2] [i_2] [i_1] [i_0] [i_3])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((arr_5 [(signed char)23] [i_2]) <= (arr_13 [i_0] [i_1] [i_2] [i_1] [i_0] [i_3] [i_2])))), (var_8)))) : (max((arr_9 [i_1] [i_1 + 1] [i_1 - 1]), ((~(arr_9 [i_3] [i_2] [i_1])))))));
                        var_28 = (-(3847130764U));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_29 |= ((/* implicit */unsigned int) (-(var_7)));
                        var_30 = ((/* implicit */int) arr_1 [12ULL]);
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)0)))));
                            var_32 = ((/* implicit */unsigned short) ((_Bool) arr_16 [i_1 - 3] [i_1 + 1] [i_1] [i_1 - 2]));
                        }
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            var_33 |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((var_5) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_2]))))))) & (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) / (288212783965667328LL)))));
                            arr_22 [i_8] [i_6] [i_6] [i_1] [i_0] = ((/* implicit */unsigned int) arr_13 [i_1 - 2] [i_1 - 2] [i_1] [i_1 - 2] [i_1 - 2] [i_1] [i_6]);
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (arr_13 [i_1] [i_1] [i_1] [i_1 - 3] [i_1 - 2] [i_1 - 2] [i_6]) : (var_6)));
                            var_35 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
                        }
                    }
                    /* vectorizable */
                    for (long long int i_9 = 1; i_9 < 22; i_9 += 1) 
                    {
                        arr_25 [i_0] [i_0] [i_2] [0U] = ((/* implicit */int) ((short) 447836526U));
                        var_36 = ((/* implicit */unsigned short) ((arr_17 [i_0] [i_0] [i_1] [i_2] [i_2] [i_9]) < ((~(((/* implicit */int) (signed char)7))))));
                        var_37 = ((/* implicit */signed char) ((_Bool) var_12));
                        var_38 = ((/* implicit */unsigned int) (-(arr_16 [i_1 - 1] [i_1 - 2] [i_1] [i_1 - 2])));
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
                {
                    var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_12 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */long long int) arr_14 [i_0] [i_10] [i_10] [i_1] [i_10] [i_10])) : (arr_12 [i_0])))) : (arr_16 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 3])));
                    var_40 = ((/* implicit */unsigned char) ((1283361770U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)68)))));
                    var_41 = ((/* implicit */int) ((unsigned long long int) arr_24 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]));
                }
                /* LoopSeq 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_42 = arr_6 [i_0];
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_12 = 2; i_12 < 22; i_12 += 2) 
                    {
                        var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_1 - 3] [i_12] [i_12] [i_12 - 1] [i_12 - 2] [i_12 - 2])) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [(unsigned short)8] [(_Bool)1]))) | (arr_8 [i_12] [i_11] [i_1] [i_0])))) : (((arr_26 [i_12] [i_11] [i_0] [i_0]) >> (((arr_9 [i_12] [i_11] [i_1]) - (607557455248385249ULL)))))));
                        var_44 = ((/* implicit */_Bool) ((short) arr_10 [i_12 - 1] [i_12 - 2] [i_1 + 1] [i_1 - 3]));
                        var_45 = ((/* implicit */unsigned short) arr_29 [i_1 - 2] [i_12 - 1]);
                        var_46 -= ((/* implicit */unsigned short) var_8);
                        /* LoopSeq 2 */
                        for (long long int i_13 = 0; i_13 < 24; i_13 += 1) /* same iter space */
                        {
                            arr_36 [i_1] [i_13] = ((/* implicit */long long int) arr_4 [i_1] [i_12 + 1] [i_1 - 2]);
                            arr_37 [i_13] [i_12] [i_11] [i_1] [i_0] &= ((/* implicit */_Bool) arr_27 [i_0] [i_1 - 1] [8]);
                            var_47 = ((/* implicit */long long int) arr_6 [i_0]);
                        }
                        for (long long int i_14 = 0; i_14 < 24; i_14 += 1) /* same iter space */
                        {
                            var_48 *= ((/* implicit */_Bool) ((arr_14 [i_1] [i_1] [i_1 + 1] [i_1] [i_14] [i_14]) | (arr_14 [i_0] [i_0] [i_1 - 1] [i_1] [i_11] [i_11])));
                            arr_40 [i_0] [i_0] [i_14] [i_0] [i_14] [i_12] = ((/* implicit */short) arr_31 [i_0] [i_0]);
                            var_49 = ((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_12 - 2] [i_1] [i_14]);
                            var_50 &= ((/* implicit */long long int) var_0);
                        }
                    }
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_51 = ((/* implicit */unsigned long long int) arr_11 [i_0]);
                    arr_43 [i_15] [i_1] [i_1] = ((/* implicit */unsigned short) arr_35 [i_15] [i_1] [i_1 - 3] [i_1 + 1] [i_15]);
                }
            }
        } 
    } 
    var_52 = var_7;
}
