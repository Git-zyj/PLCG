/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127566
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
    var_10 = ((/* implicit */unsigned short) var_7);
    var_11 = ((/* implicit */unsigned long long int) (unsigned char)255);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_12 ^= ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)233)) - (((/* implicit */int) (unsigned char)17))));
    }
    for (int i_1 = 2; i_1 < 15; i_1 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            arr_6 [i_1] [i_2] = ((/* implicit */unsigned char) var_2);
            arr_7 [1] [1] = ((/* implicit */unsigned short) arr_3 [i_2]);
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                var_14 = ((((((/* implicit */_Bool) -1)) && (((/* implicit */_Bool) arr_9 [i_1] [i_2])))) || (((/* implicit */_Bool) arr_3 [i_3])));
                arr_11 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_3) << (((((/* implicit */int) arr_5 [i_1])) - (42)))))) && (((/* implicit */_Bool) arr_8 [i_1 + 1]))));
            }
            for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        {
                            arr_19 [i_1] [(signed char)2] [i_4] [i_6] [i_6] = ((/* implicit */unsigned char) -1952566846292962238LL);
                            var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_1 - 2] [i_1 + 1] [i_1 + 1]))));
                            arr_20 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)17)) && (((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [i_1 + 4] [i_1]))));
                        }
                    } 
                } 
                arr_21 [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)32761))) < (1044480U))) ? (((/* implicit */int) ((unsigned char) var_7))) : (arr_17 [i_4] [i_4] [i_4] [i_1 + 1] [i_1])));
            }
            arr_22 [0ULL] [0ULL] = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1 + 2])) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_1] [i_1])) || (var_9))))));
        }
        var_16 = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_15 [(unsigned char)3] [i_1])), (arr_3 [i_1])))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_16 [9ULL] [i_1] [9ULL] [i_1] [(unsigned char)13]))))) : (max((((/* implicit */long long int) arr_15 [i_1] [i_1])), (var_0))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) & (((/* implicit */int) (unsigned char)55)))))));
        /* LoopSeq 2 */
        for (int i_7 = 0; i_7 < 19; i_7 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */signed char) ((long long int) min(((+(((/* implicit */int) (signed char)-1)))), (((/* implicit */int) arr_16 [i_1 + 2] [(unsigned char)4] [i_1] [(unsigned char)1] [i_1 + 4])))));
            arr_26 [i_7] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_14 [i_1] [i_7] [i_7])) : (arr_17 [i_1] [14LL] [(unsigned char)16] [i_1 - 1] [i_1 - 2])))) / (arr_8 [i_1]))) >= (max((arr_12 [i_1 - 1] [i_1 - 2] [i_1 + 4] [i_1]), (((/* implicit */unsigned long long int) arr_14 [i_1] [i_1 + 2] [i_1 + 1]))))));
        }
        for (int i_8 = 0; i_8 < 19; i_8 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_0 [i_1] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_12 [i_1 + 2] [i_1] [i_8] [i_8])))))) : (arr_18 [i_1 + 3] [i_1 - 1] [i_1] [i_1 - 2] [i_1 + 3]))), (((/* implicit */long long int) ((unsigned char) arr_5 [i_1])))));
            /* LoopNest 2 */
            for (long long int i_9 = 0; i_9 < 19; i_9 += 1) 
            {
                for (unsigned short i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    {
                        arr_35 [i_1] [i_1] [i_9] [i_9] = ((/* implicit */unsigned long long int) arr_24 [i_1 + 1] [i_1 + 3] [i_1 + 1]);
                        var_19 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)15)) & (((/* implicit */int) arr_14 [i_1] [i_1] [4ULL]))))) - (arr_9 [(signed char)13] [(short)5]))));
                        var_20 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 768937741892350975ULL)) ? (((/* implicit */int) arr_23 [i_1 + 2])) : (max((((/* implicit */int) arr_14 [i_1] [i_8] [(unsigned char)3])), (arr_34 [i_1] [i_8] [i_9] [i_10])))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [i_1] [16LL])) || (((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_10]))) : (-1379301106370890394LL))))))));
                        var_21 = ((/* implicit */unsigned long long int) arr_3 [i_8]);
                        var_22 = ((/* implicit */unsigned char) arr_3 [i_10]);
                    }
                } 
            } 
        }
        var_23 = ((/* implicit */unsigned short) arr_8 [i_1]);
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 2) 
    {
        var_24 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */long long int) var_4)) : (-6135975388656409635LL))));
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_11])) || (((/* implicit */_Bool) arr_36 [i_11])))))));
    }
}
