/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15043
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
    var_16 = ((/* implicit */signed char) var_10);
    var_17 &= ((/* implicit */short) var_12);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_2) ^ (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) arr_2 [i_0])))))));
        var_19 = arr_0 [i_0];
        arr_4 [i_0] = ((/* implicit */unsigned int) var_2);
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                {
                    arr_14 [(unsigned char)9] [i_2] = ((/* implicit */long long int) var_15);
                    var_20 -= ((/* implicit */signed char) 3999219687U);
                }
            } 
        } 
        arr_15 [i_1] [i_1] = ((/* implicit */long long int) var_10);
    }
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        arr_19 [i_4] [i_4] = ((/* implicit */unsigned char) (signed char)125);
        var_21 = ((/* implicit */long long int) ((((((/* implicit */int) ((signed char) var_2))) + (2147483647))) >> ((((((-((+(9223372036854775807LL))))) - (-9223372036854775779LL))) + (52LL)))));
        var_22 -= ((((/* implicit */_Bool) arr_18 [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) < (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 4294967295U)) : (arr_18 [i_4] [i_4]))))))) : (arr_18 [i_4] [i_4]));
        arr_20 [(signed char)3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) 4054457592U)) ? (4294967282U) : (6U))), (((/* implicit */unsigned int) arr_17 [(unsigned char)7]))))) : (max((-3688201047867006164LL), (((/* implicit */long long int) 1U))))));
        var_23 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_16 [(short)14] [i_4])), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_4] [21U]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (arr_16 [i_4] [i_4]))))) : ((~(728969260U)))))));
    }
    for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                {
                    var_24 ^= ((/* implicit */signed char) arr_9 [i_5] [i_6]);
                    arr_30 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */int) arr_11 [i_5] [i_5] [i_6] [0U])) : (((/* implicit */int) arr_11 [i_7] [i_7] [i_6] [i_5])))) >> (((min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_9)), (arr_8 [i_5])))), (((((/* implicit */_Bool) 3565998033U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (240509703U))))) - (40U)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            var_25 = ((/* implicit */short) ((((/* implicit */int) min(((short)18043), (((/* implicit */short) var_8))))) > (((((/* implicit */int) arr_16 [i_5] [i_8])) >> (((((/* implicit */int) var_10)) - (48)))))));
            arr_33 [i_5] = ((/* implicit */long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_0))));
            arr_34 [i_5] [i_8] [i_8] = arr_28 [i_5] [(signed char)3] [(signed char)3] [i_5];
            arr_35 [i_5] [i_5] = min((3565998036U), (((/* implicit */unsigned int) (unsigned char)255)));
        }
    }
}
