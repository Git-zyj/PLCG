/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184447
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
    var_11 = ((/* implicit */unsigned char) var_0);
    var_12 = var_2;
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            arr_14 [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((short) max((5502151512029864974LL), (-5502151512029864985LL))));
                            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_1] [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_0 + 1] [(_Bool)1]))) : (((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_0]))));
                        }
                        arr_15 [i_0] [i_3] [18ULL] = ((/* implicit */long long int) 5390570116627569755ULL);
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        var_14 *= (~(((/* implicit */int) (_Bool)0)));
                        var_15 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [(unsigned char)18] [i_0] [i_0 + 1]))));
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (3487198381916705370LL) : (((/* implicit */long long int) arr_4 [i_0 + 1] [i_0]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 22; i_7 += 2) 
                        {
                            {
                                arr_25 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (-((~(arr_11 [17ULL] [6ULL])))));
                                arr_26 [i_0] [i_6] [i_0] [i_7] = ((/* implicit */unsigned long long int) (unsigned char)213);
                                var_17 *= (((+(arr_23 [i_0 + 1] [i_0 + 1] [i_7 + 2] [i_0 + 1] [i_0 + 1]))) + (((/* implicit */unsigned long long int) min((3487198381916705363LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_7])) ? (((/* implicit */int) arr_18 [i_2])) : (((/* implicit */int) var_1)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) (~((-((~(arr_8 [i_0] [i_0] [i_0])))))));
        var_19 ^= ((unsigned char) ((9ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                {
                    arr_33 [i_0] [i_9] [i_9] [i_0] = ((/* implicit */unsigned short) (unsigned char)15);
                    arr_34 [i_0] [i_0 - 1] [i_9] [i_0 - 1] = ((/* implicit */unsigned char) var_4);
                    var_20 += ((/* implicit */short) (~((-(((/* implicit */int) var_6))))));
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_28 [i_0 + 1] [i_8] [i_8])))))))));
                }
            } 
        } 
        var_22 ^= ((/* implicit */short) (-(((/* implicit */int) (((~(arr_29 [i_0] [(short)10] [i_0] [i_0 - 1]))) == (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)49))))))));
    }
    var_23 *= ((/* implicit */short) var_6);
    var_24 = ((/* implicit */short) var_5);
}
