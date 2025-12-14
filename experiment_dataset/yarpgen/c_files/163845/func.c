/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163845
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    var_19 = ((/* implicit */unsigned int) max((var_17), ((+(((long long int) arr_6 [0ULL]))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_20 = (-((+(((/* implicit */int) arr_0 [i_1 + 2])))));
                                arr_13 [i_0] [i_0] [i_3] [i_3] [i_3] = (+(min((((/* implicit */long long int) var_3)), (-6506265612865095723LL))));
                                arr_14 [i_2] [3] [(unsigned char)6] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)46976)) ? (((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */short) arr_12 [i_3] [i_1 - 1] [i_2] [i_3] [11U])), (var_9))))))) : (6506265612865095706LL)));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((min((max((arr_1 [(_Bool)1]), (((/* implicit */unsigned long long int) 5584641489643759171LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) ((unsigned int) arr_12 [i_1] [i_1 + 3] [i_1] [i_1] [i_1])))));
                }
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
                {
                    arr_19 [i_0] [(short)2] = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)-57)) == (((/* implicit */int) arr_6 [i_5])))) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) var_0))));
                    arr_20 [i_1] [i_1 + 2] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_1 - 2]))));
                    arr_21 [i_0] [i_1 - 1] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_12)) / (arr_17 [i_0] [i_0] [i_0])));
                    var_21 *= ((/* implicit */unsigned int) var_6);
                }
                for (signed char i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_1 + 1] [i_1] [i_1 - 1] [i_6]))) : (arr_4 [i_1 + 1] [i_1]))), (((/* implicit */unsigned long long int) 6506265612865095726LL))));
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_1] [5ULL] [i_6])) ? (((((/* implicit */_Bool) var_1)) ? (arr_4 [(signed char)4] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1 + 3] [i_6]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1] [(unsigned short)12])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_6] [2ULL]))) : ((+(((691716426U) + (1301371687U))))))))));
                }
                for (signed char i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
                {
                    var_24 ^= ((/* implicit */unsigned int) (~(var_10)));
                    arr_28 [i_0] = ((/* implicit */unsigned int) arr_17 [0U] [i_1 - 1] [8U]);
                }
                arr_29 [i_0] [7U] = ((/* implicit */short) (+(-3)));
                var_25 = ((/* implicit */unsigned short) 1337489019U);
            }
        } 
    } 
    var_26 -= 4294967294U;
    var_27 = ((/* implicit */unsigned int) var_16);
    /* LoopSeq 2 */
    for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
    {
        var_28 &= ((/* implicit */signed char) ((int) arr_6 [7]));
        arr_33 [i_8] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) arr_12 [i_8] [i_8] [i_8] [i_8] [i_8]))))))));
    }
    for (short i_9 = 2; i_9 < 19; i_9 += 4) 
    {
        var_29 += ((/* implicit */unsigned long long int) var_9);
        var_30 ^= ((/* implicit */short) var_8);
        var_31 = ((/* implicit */short) max((-864645980), ((-2147483647 - 1))));
    }
}
