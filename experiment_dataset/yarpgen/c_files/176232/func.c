/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176232
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_10 = ((/* implicit */unsigned short) var_0);
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) var_8))));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
                        {
                            var_12 = ((/* implicit */unsigned char) arr_7 [i_3] [i_2] [i_1]);
                            arr_14 [i_0] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) (short)0);
                            arr_15 [i_0] [i_3] = ((/* implicit */short) arr_8 [i_0] [3LL] [i_0] [i_4]);
                        }
                        for (long long int i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
                        {
                            var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_3]))));
                            var_14 = ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3] [i_2] [i_1]))) * (21LL)))));
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) arr_7 [5LL] [i_2] [i_3])) : (((/* implicit */int) var_6))));
                        }
                        for (long long int i_6 = 0; i_6 < 13; i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-31))) - (2134904591397269629ULL)));
                            var_16 = ((/* implicit */signed char) arr_3 [i_6] [i_3] [i_2]);
                        }
                        var_17 -= ((/* implicit */unsigned long long int) var_5);
                    }
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        for (signed char i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            {
                                arr_31 [i_0] [i_1] [10LL] [i_8] [i_9] = ((signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_7] [i_8] [i_9] [i_9])) ? (((/* implicit */int) arr_13 [i_9] [i_8] [i_7] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_7] [i_8] [i_1] [i_9]))));
                                var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) arr_10 [i_9] [i_9] [i_8] [2LL] [i_1] [i_0])))));
                                var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2134904591397269606ULL))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) -7946696469621267169LL);
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            {
                                arr_37 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)2)), (16311839482312281997ULL)));
                                arr_38 [i_7] [i_11] = ((16311839482312281968ULL) | ((-(min((var_0), (((/* implicit */unsigned long long int) (unsigned short)0)))))));
                                arr_39 [i_0] [i_1] [(short)12] [i_0] [i_11] [i_0] [i_0] = ((/* implicit */short) (~(((((((/* implicit */_Bool) arr_19 [i_11] [i_10] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-26))) : (arr_25 [i_0] [i_0] [1ULL] [i_0] [i_0]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_4))))))));
                            }
                        } 
                    } 
                    arr_40 [i_0] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-19)) < (((/* implicit */int) (unsigned char)226)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_7]))) : ((+((~(var_3)))))));
                }
                var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
                arr_41 [i_0] [i_0] = ((/* implicit */long long int) (signed char)-15);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) 2134904591397269636ULL);
}
