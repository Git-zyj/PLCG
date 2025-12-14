/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166710
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
    var_14 = ((/* implicit */int) (((_Bool)1) ? (9223372036854775807LL) : (((/* implicit */long long int) var_5))));
    var_15 ^= ((/* implicit */unsigned long long int) min((var_1), (((((/* implicit */_Bool) (((_Bool)1) ? (1889472504810996622LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 5338192933126306911ULL)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 4; i_2 < 16; i_2 += 3) 
            {
                var_16 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_2 [i_0] [i_2]))));
                var_17 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1])) ? (-9223372036854775800LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-125)))))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)15671)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))));
            }
            var_19 = ((/* implicit */int) ((arr_3 [i_1 - 4] [i_1 + 3] [i_1 + 1]) - (((/* implicit */long long int) ((/* implicit */int) var_10)))));
            arr_8 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1]);
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                var_20 ^= ((/* implicit */short) ((((((/* implicit */int) arr_9 [i_0] [(unsigned char)7])) - (((/* implicit */int) (unsigned char)240)))) & (((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775787LL)))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        {
                            arr_16 [i_4] = (~((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)48)))));
                            var_21 = ((/* implicit */_Bool) arr_11 [i_0]);
                        }
                    } 
                } 
                var_22 = ((/* implicit */signed char) -9223372036854775771LL);
            }
            arr_17 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1 + 1] [i_0] [i_0])) ? (var_0) : (arr_2 [i_1 - 4] [i_1 + 2])));
        }
        for (unsigned short i_6 = 3; i_6 < 16; i_6 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_7 = 2; i_7 < 15; i_7 += 2) /* same iter space */
            {
                var_23 = ((/* implicit */long long int) -1170657173);
                arr_23 [i_0] [i_6] [i_6] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) var_13)))));
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_6 + 1] [i_7 + 1])) || (var_7)));
            }
            for (int i_8 = 2; i_8 < 15; i_8 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 17; i_9 += 4) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_25 += ((((/* implicit */_Bool) arr_2 [i_6 - 2] [i_8 + 2])) ? (((/* implicit */unsigned long long int) arr_2 [i_6 + 1] [i_8 + 2])) : (15447827477781986567ULL));
                            arr_34 [i_0] [i_6] [i_6] [i_8 + 2] [i_9] [i_10] [i_8 + 2] = ((/* implicit */unsigned long long int) var_12);
                            var_26 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_9] [i_9] [i_8 - 2] [i_9] [i_9])) >> (((((/* implicit */int) arr_12 [i_8] [i_6 - 2] [i_8 + 1] [i_6] [i_9])) - (2811)))));
                            var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_6))));
                            var_28 ^= ((/* implicit */unsigned char) ((arr_21 [i_6 + 1] [i_6 - 2]) - (arr_21 [i_6 + 1] [i_6 + 1])));
                        }
                    } 
                } 
                var_29 += ((/* implicit */_Bool) 1889472504810996626LL);
                arr_35 [i_6 - 2] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_6 + 1]))));
                var_30 = arr_0 [i_0] [i_6];
            }
            var_31 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -456997185)) ? (((((/* implicit */_Bool) 524256)) ? (arr_21 [i_0] [i_0]) : (((/* implicit */unsigned long long int) -1LL)))) : (((/* implicit */unsigned long long int) -9223372036854775807LL))));
            var_32 = ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_6 - 3] [i_6 - 3])) / (((/* implicit */int) arr_6 [i_6 - 1] [i_6 - 1]))));
        }
        arr_36 [i_0] = var_6;
    }
}
