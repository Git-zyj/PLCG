/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104475
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
    var_11 ^= ((/* implicit */unsigned long long int) (unsigned short)44967);
    var_12 = ((/* implicit */int) 9249982738818066978ULL);
    var_13 ^= max((max((((long long int) var_10)), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) var_1)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((10723512023673991402ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4096)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) 524287U)))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 9; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_15 += ((/* implicit */unsigned short) 5510362178762068381LL);
                    /* LoopSeq 4 */
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            arr_17 [i_1] [i_2 + 2] [i_2] = ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_18 [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) var_10));
                            arr_19 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1 + 1] = ((/* implicit */int) var_0);
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
                        {
                            arr_22 [i_1] = ((/* implicit */unsigned char) var_7);
                            var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121))) & (4144896915U)));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
                        {
                            var_17 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3]))));
                            arr_25 [i_1 + 1] [i_2] [i_3] [i_1 + 1] [i_7] [i_2 - 1] [i_1] = ((/* implicit */long long int) ((var_0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            arr_26 [i_7] [i_1] [0] [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (short)0))));
                        }
                        for (signed char i_8 = 2; i_8 < 10; i_8 += 2) 
                        {
                            var_18 -= ((/* implicit */unsigned int) var_9);
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((long long int) arr_15 [i_1] [i_2] [i_3] [i_4] [i_8])))));
                            var_20 ^= ((/* implicit */unsigned short) var_8);
                            var_21 += ((/* implicit */short) (_Bool)1);
                        }
                        arr_29 [i_1] [i_2] [i_1] [i_3] [i_2] = ((/* implicit */unsigned short) var_8);
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_22 ^= ((/* implicit */unsigned short) 299447575318723690LL);
                        arr_32 [i_1] [i_1] [i_1] [i_9] = ((/* implicit */short) ((unsigned int) 2187610067U));
                        var_23 = ((/* implicit */long long int) arr_12 [i_1 + 1] [i_2 + 1] [i_3] [4]);
                    }
                    for (unsigned short i_10 = 2; i_10 < 9; i_10 += 4) 
                    {
                        arr_35 [5U] [i_1] [0] [9U] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_0))));
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((long long int) arr_11 [i_1 + 1])))));
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) var_6))));
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) arr_7 [i_1] [i_2 + 2]))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        var_27 *= ((/* implicit */unsigned short) var_7);
                        var_28 = ((/* implicit */long long int) ((arr_20 [i_3]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))));
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((unsigned int) var_5))));
                        arr_38 [0U] [i_2] [i_11] [i_2] |= ((/* implicit */unsigned char) arr_5 [i_11]);
                        var_30 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
                    }
                }
            } 
        } 
        arr_39 [(unsigned short)0] [(unsigned short)0] |= ((/* implicit */unsigned short) (signed char)11);
    }
}
