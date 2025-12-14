/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149548
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
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((unsigned short) var_2)))));
    var_14 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((max((765358121), (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2])))) - ((~(arr_1 [i_0 + 2] [i_0 + 2]))))))));
        arr_3 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_10)) ? ((~(((/* implicit */int) (unsigned short)21638)))) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) var_7)) << (((/* implicit */int) (_Bool)1))))));
        arr_4 [i_0] = ((/* implicit */_Bool) 2563748465924582939ULL);
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
        {
            arr_8 [i_1] [i_0] = ((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1]);
            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((unsigned long long int) arr_7 [i_1] [i_0 + 2] [i_0])))));
            var_17 = ((/* implicit */long long int) (((!((_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))));
            var_18 |= ((/* implicit */unsigned int) ((_Bool) 2263779569928434601ULL));
        }
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                for (signed char i_4 = 2; i_4 < 19; i_4 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_3))));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned int) (short)-13039);
                            var_21 = ((/* implicit */int) min(((-(min((5273589786091173524ULL), (((/* implicit */unsigned long long int) var_7)))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_5)) / (((949608396U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46674))))))))));
                            arr_21 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_16 [i_5 + 1] [i_4 + 2])))) ? (((unsigned int) arr_6 [i_5 + 1] [i_4 - 2] [i_0 + 1])) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_16 [i_0 + 1] [i_5]) + (var_4))))))))));
                        }
                        var_22 ^= ((/* implicit */unsigned int) ((long long int) var_5));
                        arr_22 [i_0] [i_2] [i_3] [i_2] &= 3539827950U;
                        var_23 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (signed char)-61)), (((((/* implicit */_Bool) min((3805149939U), (((/* implicit */unsigned int) arr_6 [i_4] [i_2] [i_0]))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_1))) : (max((((/* implicit */unsigned long long int) var_2)), (arr_12 [i_0 + 2] [i_2] [i_0 + 2] [i_0 + 2])))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */short) max((((/* implicit */long long int) var_9)), (((long long int) ((var_4) + (((/* implicit */int) (short)-19927)))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                arr_25 [i_0 - 1] [i_6] [i_0 - 1] [i_0 + 2] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_5 [i_0 + 2])) ? (((/* implicit */unsigned int) arr_5 [i_0 + 1])) : (arr_10 [i_0 + 2] [i_0 + 2] [i_0 + 2]))));
                arr_26 [i_6] [i_2] [i_2] [i_2] = ((/* implicit */short) ((unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) arr_17 [i_2] [i_2] [i_0 + 1] [i_0 + 1])) : (-2030528093)))) / ((+(var_0))))));
                var_25 ^= ((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) ((_Bool) var_5))))));
            }
            arr_27 [i_0 + 1] [i_0] [i_2] = ((/* implicit */signed char) min((arr_18 [i_0] [i_0] [i_2] [i_0] [i_0]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_24 [i_0 + 1] [i_0 - 1] [i_0 + 2])))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)18008))));
            arr_31 [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0 + 1])) - ((-(((2563748465924582941ULL) * (((/* implicit */unsigned long long int) 511LL))))))));
            var_27 ^= ((/* implicit */_Bool) ((((unsigned int) 0U)) / (((/* implicit */unsigned int) 752198960))));
        }
        for (unsigned int i_8 = 1; i_8 < 20; i_8 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_9 = 0; i_9 < 21; i_9 += 1) 
            {
                var_28 ^= ((/* implicit */unsigned short) var_5);
                var_29 = ((/* implicit */unsigned int) max((var_29), (((((/* implicit */_Bool) ((((/* implicit */int) (short)32747)) ^ (((/* implicit */int) (unsigned short)18868))))) ? (arr_10 [i_9] [i_0] [i_0]) : (((/* implicit */unsigned int) -2030528093))))));
                /* LoopSeq 3 */
                for (unsigned int i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    var_30 &= ((/* implicit */long long int) 309891228U);
                    var_31 = ((/* implicit */unsigned int) max((var_31), (997272765U)));
                    arr_40 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2030528063)) ? (arr_5 [i_10]) : (arr_5 [i_10])));
                    arr_41 [i_0 + 2] [i_0 + 2] [i_8] [i_0 + 2] [i_8] [i_0 + 2] = ((/* implicit */unsigned short) arr_0 [i_9]);
                }
                for (long long int i_11 = 1; i_11 < 20; i_11 += 4) 
                {
                    /* LoopSeq 4 */
                    for (int i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        var_32 = ((/* implicit */long long int) ((_Bool) arr_46 [i_9] [i_11 + 1] [i_8] [i_0 + 1] [i_12] [i_9]));
                        var_33 += ((/* implicit */unsigned int) arr_37 [i_9] [i_11 - 1] [8] [i_0 + 1]);
                        var_34 += ((/* implicit */unsigned int) ((var_0) + (((/* implicit */unsigned long long int) ((long long int) var_4)))));
                        arr_47 [i_0] [i_8 + 1] [i_0] [i_0] [i_8] = ((/* implicit */int) 8388607U);
                    }
                    for (unsigned int i_13 = 0; i_13 < 21; i_13 += 4) /* same iter space */
                    {
                        var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) (!(((/* implicit */_Bool) 2939170233U)))))));
                        arr_51 [i_8] [i_8] [i_0] [i_8] [i_0] = ((/* implicit */signed char) (!((_Bool)0)));
                        arr_52 [i_8] [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1] = ((arr_23 [i_0 + 2] [i_11 + 1] [i_0 - 1]) / (((/* implicit */int) arr_37 [i_0 + 2] [i_8 - 1] [i_8] [i_8 + 1])));
                    }
                    for (unsigned int i_14 = 0; i_14 < 21; i_14 += 4) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned int) min((var_36), (1732756096U)));
                        arr_55 [i_0] [i_0] [i_8] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned short)46668))))));
                    }
                    for (unsigned int i_15 = 0; i_15 < 21; i_15 += 4) /* same iter space */
                    {
                        arr_60 [i_0] [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (arr_28 [i_9] [i_9] [i_9]))) << (((2030528111) - (2030528089)))));
                        arr_61 [i_0] [i_8] [i_9] [i_11] [i_0] = ((/* implicit */int) ((signed char) 2030528093));
                        var_37 = ((/* implicit */int) min((var_37), ((~(((/* implicit */int) arr_49 [i_15] [i_8 + 1] [i_9] [i_11 + 1] [i_15] [i_8] [i_11]))))));
                    }
                    var_38 ^= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) -817269938)) ? (((/* implicit */int) (short)-12295)) : (((/* implicit */int) (short)-2472)))));
                }
                for (signed char i_16 = 0; i_16 < 21; i_16 += 3) 
                {
                    var_39 |= ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) / (arr_5 [i_0])));
                    arr_64 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) var_7))) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)29158))) != (61401502U))))));
                }
                var_40 = ((/* implicit */signed char) ((int) ((arr_6 [i_9] [i_0] [i_0]) << (((arr_30 [i_9]) - (2003050892))))));
            }
            arr_65 [10] |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_11)), (arr_5 [i_8 + 1])))), (15882995607784968677ULL)));
        }
    }
}
