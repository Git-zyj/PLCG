/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179519
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) min((((long long int) 4294967295U)), (((/* implicit */long long int) ((((((/* implicit */int) var_3)) >> (((((/* implicit */int) arr_1 [i_0])) - (72))))) == (((/* implicit */int) var_11)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) arr_2 [i_0 + 1] [i_0 + 1] [i_1]))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                for (short i_3 = 3; i_3 < 20; i_3 += 3) 
                {
                    {
                        arr_9 [i_0 + 1] [i_3] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) ((unsigned long long int) max((arr_1 [i_1 + 1]), (((/* implicit */unsigned char) (_Bool)1)))));
                        var_18 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((int) 14240574580283456102ULL))), (arr_7 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3])));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (short i_4 = 1; i_4 < 21; i_4 += 3) 
        {
            arr_13 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 288230101273804800ULL)) ? (((/* implicit */int) arr_11 [i_0 + 1])) : (((/* implicit */int) arr_8 [i_0] [i_4] [i_4] [i_4] [i_4] [i_4]))))) ? (((4206169493426095513ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) 4294967295U))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                        /* LoopSeq 4 */
                        for (unsigned long long int i_7 = 2; i_7 < 19; i_7 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_0] [i_4 - 1] [i_5] [i_6] [(short)16] [i_7] &= ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_4 + 1] [8LL] [i_5])) ? (4294967279U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 1] [i_4 - 1] [4] [(signed char)2]))));
                            var_20 = ((/* implicit */int) arr_17 [i_0] [i_4] [i_5] [i_7]);
                            arr_22 [i_0] [i_0 + 1] [i_0] [i_6] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12582347034552766283ULL)) ? (((/* implicit */int) arr_1 [21ULL])) : (((/* implicit */int) var_11))));
                        }
                        for (unsigned long long int i_8 = 2; i_8 < 19; i_8 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) arr_20 [i_8 + 1] [i_0] [14ULL] [i_5] [i_0 + 1] [5] [i_0]);
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4 - 1]))) ^ (4294967292U))))));
                        }
                        for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 1) /* same iter space */
                        {
                            arr_30 [i_6] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [(short)5] [21] [i_4 - 1] [20LL] [i_4 - 1] [i_4]))) < (arr_20 [i_0] [i_0] [11] [i_5] [i_5] [i_6] [i_6])));
                            arr_31 [i_0] [i_0] [i_6] [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
                            arr_32 [i_0] [i_4] [i_4 - 1] [i_0] [i_6] [i_9] [i_6] = ((/* implicit */signed char) (~(arr_19 [i_6] [i_0 + 1])));
                            arr_33 [i_6] = ((/* implicit */_Bool) ((4294967280U) | (((/* implicit */unsigned int) arr_14 [i_4 + 1] [i_4 - 1] [i_4] [i_4 - 1]))));
                        }
                        for (unsigned long long int i_10 = 2; i_10 < 19; i_10 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */_Bool) (unsigned char)0);
                            var_24 = ((/* implicit */short) arr_3 [i_0]);
                            var_25 = (~(((/* implicit */int) arr_1 [i_0 + 1])));
                            var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_27 [i_10] [i_6]))));
                        }
                        arr_37 [i_6] = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_4 + 1])) & (((/* implicit */int) arr_11 [i_4 + 1]))));
                    }
                } 
            } 
        }
    }
    var_27 = ((/* implicit */unsigned short) var_2);
    var_28 = ((/* implicit */short) var_11);
    var_29 = ((/* implicit */short) var_7);
}
