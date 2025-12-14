/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145878
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    var_16 = ((/* implicit */short) (!((!(((/* implicit */_Bool) 1020))))));
                    arr_6 [i_0] [i_1] [i_0] [i_2] &= (~((+(-1020))));
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (-((~(((/* implicit */int) arr_0 [i_1])))))))));
                    var_18 -= ((/* implicit */long long int) (+(((/* implicit */int) (!(arr_1 [10LL]))))));
                    var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])))))));
                }
                /* LoopSeq 3 */
                for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_9)))))))));
                        arr_15 [i_0] [i_1] [i_3] [i_1] [(unsigned char)19] = ((/* implicit */short) (-((+(-1005)))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        arr_20 [9U] [i_1] [2LL] [i_3] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 0U))))))))));
                        arr_21 [15U] [i_1] [(unsigned short)8] [(short)14] = ((/* implicit */int) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) var_15)))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            {
                                arr_29 [i_0] [i_1] [i_6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_1] [3ULL] [3ULL]))))))))));
                                arr_30 [(_Bool)0] [i_1] [i_1] [i_1] [i_1] [(short)18] = (+(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_0]))))))));
                                var_21 = ((/* implicit */unsigned char) (+((+((-(arr_18 [i_0] [i_1] [i_3] [(signed char)7] [i_6] [(signed char)7])))))));
                                var_22 = ((/* implicit */long long int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) (short)(-32767 - 1))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        arr_33 [i_0] [i_1] [12ULL] [3LL] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) var_0)))))))));
                        arr_34 [i_0] [i_1] [i_0] [(signed char)20] = ((/* implicit */int) (!(((/* implicit */_Bool) (+((~(2257521010U))))))));
                        var_23 = (-((+((+(((/* implicit */int) arr_24 [i_0] [i_0] [i_8] [i_0])))))));
                    }
                    var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_9))))))))));
                    arr_35 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (~((~((-(((/* implicit */int) var_8))))))));
                }
                for (long long int i_9 = 0; i_9 < 24; i_9 += 3) 
                {
                    arr_40 [i_0] [i_1] [16U] [i_9] = ((/* implicit */int) (!((!((!(((/* implicit */_Bool) var_15))))))));
                    arr_41 [i_0] [i_0] &= ((/* implicit */unsigned int) (-((-((-(((/* implicit */int) var_1))))))));
                    arr_42 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+((~((-(var_12)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 24; i_11 += 4) 
                        {
                            {
                                arr_49 [3U] [i_10] [i_1] [i_10] = ((/* implicit */long long int) (+((-((~(((/* implicit */int) arr_8 [i_0] [i_9]))))))));
                                arr_50 [i_0] [i_10] [i_1] [i_1] [i_0] [(short)19] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) 350129744U)))))))));
                            }
                        } 
                    } 
                    arr_51 [i_0] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 4) 
                {
                    var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))))))));
                    var_26 -= ((/* implicit */unsigned long long int) (-((+((+(arr_14 [3] [i_0] [3])))))));
                    /* LoopSeq 1 */
                    for (int i_13 = 0; i_13 < 24; i_13 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_14 = 0; i_14 < 24; i_14 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                            arr_61 [i_1] = ((/* implicit */int) (+((-((+(arr_13 [i_0] [14U] [i_0] [i_0] [i_0])))))));
                            var_28 = ((/* implicit */int) (-((+((+(arr_48 [i_0] [(unsigned short)15] [i_12])))))));
                        }
                        /* vectorizable */
                        for (long long int i_15 = 0; i_15 < 24; i_15 += 3) 
                        {
                            var_29 += ((/* implicit */long long int) (~((~(arr_39 [4ULL] [4ULL] [i_0] [i_13])))));
                            arr_65 [4U] [9ULL] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)197)))))));
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))))));
                            var_31 ^= ((/* implicit */unsigned long long int) (~((+(-1020)))));
                            var_32 = ((/* implicit */unsigned long long int) (-((-(2984042008308271893LL)))));
                        }
                        for (unsigned int i_16 = 0; i_16 < 24; i_16 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((-(var_10)))))))))));
                            arr_68 [(signed char)2] [(signed char)2] [(unsigned char)12] [(signed char)2] [i_0] [i_0] &= (~((-(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
                            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) var_3))))))))))));
                            arr_69 [i_1] = ((/* implicit */_Bool) (+((~((-(((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) (-((+((-(4ULL))))))))));
                        }
                        arr_70 [i_1] = ((/* implicit */int) (~((-((~(arr_52 [i_13] [i_12] [i_1] [i_0])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 1) 
                        {
                            var_36 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 11ULL)))))));
                            var_37 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                        }
                    }
                    /* LoopSeq 2 */
                    for (int i_18 = 0; i_18 < 24; i_18 += 4) 
                    {
                        var_38 -= ((/* implicit */long long int) (~((+((-(((/* implicit */int) var_11))))))));
                        var_39 = ((/* implicit */short) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_3 [i_0] [i_18])))))))));
                    }
                    /* vectorizable */
                    for (short i_19 = 0; i_19 < 24; i_19 += 3) 
                    {
                        var_40 |= ((/* implicit */long long int) (~((~(arr_54 [4LL] [i_1] [i_1])))));
                        arr_79 [(unsigned char)18] [i_1] [i_12] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(0LL))))));
                    }
                    var_41 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~((-(-2147483625))))))));
                }
                var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) (~((-((+(((/* implicit */int) (unsigned short)65535)))))))))));
            }
        } 
    } 
    var_43 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
}
