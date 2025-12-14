/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182563
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_5 [i_0] [i_0])))) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) 3074894143U)) || (((/* implicit */_Bool) 2188087652U))))))) : (((/* implicit */int) arr_0 [i_0]))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((-3024337154226495878LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17043)))))) ? (((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_1 [i_1])))) : ((-(((/* implicit */int) arr_1 [i_0]))))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_2])) - (((/* implicit */int) arr_0 [i_0]))))) : (((var_14) % (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2])))))));
                    var_20 = ((/* implicit */unsigned int) arr_0 [i_0]);
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) >= (arr_7 [i_0] [(unsigned short)12] [(unsigned short)12]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_0 [i_1]))))) : (arr_7 [i_0] [i_1] [i_2])))), (arr_2 [21LL] [i_1]))))));
                }
                for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        var_22 += ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)33852)) << (((((/* implicit */int) (unsigned short)48504)) - (48493))))) >> (((max((max((var_16), (arr_2 [i_0] [i_1]))), (((/* implicit */long long int) arr_0 [i_3])))) - (674952378573318570LL)))));
                        var_23 = ((/* implicit */signed char) arr_4 [i_3]);
                        var_24 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (arr_9 [i_0] [i_0] [i_3] [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (max((((/* implicit */long long int) arr_4 [i_1])), (var_16))))) > (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0] [i_1])))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_12 [i_0] [i_0] [i_3] [(signed char)11]))));
                            arr_19 [i_6] [i_5] [i_3] [i_1] [i_0] [i_0] = ((/* implicit */long long int) arr_7 [i_3] [15U] [i_6]);
                        }
                        for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned int) min((var_25), (arr_6 [i_5] [i_3] [i_0])));
                            var_26 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_12 [i_0] [i_3] [i_5] [(unsigned short)4])))) << (((((((/* implicit */_Bool) arr_8 [(unsigned short)19] [(signed char)7] [(signed char)7] [i_7])) ? (arr_8 [i_3] [i_1] [i_3] [6U]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) - (1913483652U)))));
                            var_27 += ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_5] [i_0]))))) && (((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned short) arr_3 [i_1] [i_0])))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_8 = 1; i_8 < 20; i_8 += 3) 
                        {
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_8] [i_8 + 2] [i_8])))))));
                            var_29 = ((/* implicit */unsigned int) (~(-3483807702489394951LL)));
                            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) (+(((((/* implicit */int) (signed char)109)) + (((/* implicit */int) (unsigned short)17043)))))))));
                            var_31 *= ((/* implicit */signed char) ((((((/* implicit */long long int) var_11)) % (arr_5 [i_5] [(signed char)12]))) << (((((var_16) & (((/* implicit */long long int) ((/* implicit */int) var_7))))) - (674952378573318547LL)))));
                        }
                        for (signed char i_9 = 2; i_9 < 21; i_9 += 4) 
                        {
                            arr_26 [i_9] [i_5] [i_3] [i_0] [i_0] = ((/* implicit */unsigned short) var_12);
                            arr_27 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_3] [i_3])) ? (arr_22 [i_0] [i_0] [i_5] [i_3] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_1] [i_3] [i_3] [i_5] [i_0] [i_9])))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5]))) - (arr_15 [i_3] [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_3] [i_1])) ? (arr_15 [i_0] [i_3]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_1] [i_3] [i_5] [i_9])))))))) : (((((/* implicit */_Bool) var_0)) ? (var_14) : (((/* implicit */long long int) (+(arr_4 [i_5]))))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        for (signed char i_11 = 1; i_11 < 21; i_11 += 1) 
                        {
                            {
                                var_32 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((-(((/* implicit */int) arr_25 [i_1] [i_3])))) << (((((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1]))) - (var_14))) + (1512301451545276430LL))))))));
                                arr_33 [1LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_11 - 1] [i_1] [i_3])) ? (arr_6 [i_11 - 1] [i_0] [i_11 - 1]) : (arr_6 [i_11 + 1] [i_1] [i_3])))) ? (((((/* implicit */int) (unsigned short)50844)) << (0U))) : (min((((/* implicit */int) ((((/* implicit */long long int) arr_31 [10LL] [i_1] [i_1] [i_10] [i_11 - 1] [(unsigned short)8])) < (var_0)))), (((((/* implicit */int) var_2)) - (((/* implicit */int) var_7))))))));
                                var_33 &= ((/* implicit */signed char) (-(((((((/* implicit */_Bool) arr_17 [i_11 + 1] [i_10] [i_3] [i_1] [i_0])) ? (arr_24 [i_11] [i_3] [11LL]) : (((/* implicit */long long int) arr_20 [i_11] [(unsigned short)1] [i_10] [i_3] [i_0] [i_0])))) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_11 - 1] [i_11 - 1])))))));
                                var_34 = max((-3483807702489394937LL), (((/* implicit */long long int) 17U)));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (long long int i_12 = 0; i_12 < 22; i_12 += 3) 
                {
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 4) 
                    {
                        for (signed char i_14 = 3; i_14 < 20; i_14 += 4) 
                        {
                            {
                                var_35 += ((/* implicit */unsigned short) max(((+(arr_5 [i_14 + 1] [i_14 - 2]))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) <= (arr_30 [i_0] [i_1] [i_12])))) <= (((/* implicit */int) arr_21 [i_0])))))));
                                var_36 = ((/* implicit */unsigned int) max((var_36), (((((((var_8) >> (((((/* implicit */int) arr_3 [i_0] [i_0])) - (88))))) << (((((arr_30 [i_0] [i_12] [11LL]) + (((/* implicit */long long int) var_1)))) + (1684770685409582356LL))))) & ((~(arr_38 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                                arr_41 [i_12] = ((/* implicit */unsigned short) arr_28 [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_37 = ((/* implicit */signed char) max(((+((-(var_13))))), (((/* implicit */unsigned int) var_4))));
    var_38 = ((/* implicit */unsigned short) (((!(((((/* implicit */int) var_12)) <= (((/* implicit */int) var_15)))))) ? (var_14) : (((/* implicit */long long int) var_8))));
    var_39 = min((((/* implicit */long long int) var_11)), (var_16));
}
