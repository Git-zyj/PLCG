/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184467
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            var_19 ^= ((/* implicit */_Bool) -5LL);
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (unsigned char)97))));
                        }
                        var_21 -= ((/* implicit */unsigned char) arr_9 [(unsigned char)14] [i_1]);
                        var_22 ^= max((max((max((((/* implicit */unsigned long long int) arr_0 [i_0] [(unsigned char)7])), (0ULL))), (((/* implicit */unsigned long long int) -3409134136431950286LL)))), (((/* implicit */unsigned long long int) (+(-32LL)))));
                        arr_13 [i_0] [i_1] [i_2] [i_2] [i_3] &= ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_3 [i_1])), (max((arr_1 [i_0] [i_1]), (((/* implicit */long long int) (unsigned short)48616))))));
                        var_23 &= ((/* implicit */unsigned char) max((arr_8 [i_0] [i_1] [i_2] [i_3] [11]), (arr_8 [i_0] [i_1] [i_2] [i_3] [i_3])));
                    }
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) max((arr_6 [i_1]), ((+(arr_6 [i_0]))))))));
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) 29LL))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */int) max((var_26), ((~(((/* implicit */int) var_3))))));
    var_27 -= ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
    var_28 ^= ((/* implicit */signed char) 4155315649668177099LL);
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                {
                    var_29 ^= ((/* implicit */unsigned char) max((max((-25LL), (((/* implicit */long long int) arr_19 [i_6] [i_6])))), (((/* implicit */long long int) (unsigned char)0))));
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        var_30 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((6LL), (arr_18 [i_6] [i_7] [i_7])))) ? (min((((/* implicit */int) (short)32767)), ((-(((/* implicit */int) (unsigned char)238)))))) : (min(((~(((/* implicit */int) arr_21 [19LL] [19LL])))), (((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (unsigned char)6))))))));
                        var_31 *= ((/* implicit */unsigned char) arr_18 [i_6] [i_7] [i_8]);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        for (int i_10 = 4; i_10 < 21; i_10 += 3) 
                        {
                            {
                                arr_31 [i_5] [0LL] [i_6] [i_7] [i_6] [i_10] &= ((/* implicit */_Bool) (+(arr_24 [(short)5] [i_6] [(short)5] [i_6])));
                                var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (~(6LL))))));
                                var_33 ^= max(((-(arr_23 [i_10 - 3] [i_6] [i_10 + 1] [i_10 - 2]))), (((/* implicit */long long int) (+(((/* implicit */int) arr_21 [i_10] [i_10 + 1]))))));
                            }
                        } 
                    } 
                    var_34 ^= ((/* implicit */_Bool) max((arr_23 [i_5] [i_7] [i_7] [(unsigned char)8]), (((/* implicit */long long int) (-2147483647 - 1)))));
                }
            } 
        } 
    } 
}
