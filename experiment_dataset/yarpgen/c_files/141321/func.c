/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141321
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) 4076263824U);
        var_12 = ((/* implicit */short) ((long long int) (-(((/* implicit */int) (signed char)74)))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_3 = 1; i_3 < 7; i_3 += 1) 
                {
                    arr_11 [i_0] [i_3] [i_0] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_3 - 1] [i_3] [i_3]))));
                    arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [i_3 + 3] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [i_3 + 1] [i_2]))) : (var_5)));
                    arr_13 [i_3] = ((/* implicit */unsigned int) arr_1 [i_0]);
                    /* LoopSeq 1 */
                    for (long long int i_4 = 1; i_4 < 10; i_4 += 2) 
                    {
                        arr_17 [(unsigned short)5] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) 5963220136693196837ULL);
                        var_13 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3] [i_1] [i_2] [i_3] [i_4 + 1]))) : (4294966272U))));
                    }
                }
                for (int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    arr_20 [i_5] [(unsigned char)5] [i_5] [i_5] [i_5] [0ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)63093)) / (((/* implicit */int) arr_15 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) 1514564888)) ? (((/* implicit */int) arr_15 [i_5] [i_5])) : (((/* implicit */int) var_0)))) : (((((/* implicit */int) var_2)) / (((/* implicit */int) (unsigned short)65535))))));
                    arr_21 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((var_2) ? (4076263807U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_2] [i_5]))))) & ((~(3390659910U)))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        {
                            arr_27 [i_7] [i_7] [3] [i_2] [i_7] [i_7] = 218703485U;
                            var_14 = ((/* implicit */unsigned char) -5029928357088587075LL);
                            arr_28 [i_0] [i_7] [i_2] [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_0] [i_7])) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_9] [i_1] [i_2])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_1] [i_9])))));
                            arr_33 [i_0] [(unsigned char)3] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 218703471U)) ? (4076263832U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)67)))))) / (((5816861160419243671ULL) + (5816861160419243671ULL)))));
                            arr_34 [2] [3LL] [2] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 1115934931)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (12629882913290307945ULL)))));
                        }
                    } 
                } 
            }
            arr_35 [i_0] [i_0] [3U] = ((/* implicit */int) (~(arr_16 [i_0] [i_1] [i_1] [i_0] [(unsigned short)10] [i_1])));
        }
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_3)))))));
    }
    var_17 &= ((/* implicit */short) var_7);
}
