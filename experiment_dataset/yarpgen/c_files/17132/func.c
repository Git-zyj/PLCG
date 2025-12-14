/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17132
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
    var_20 = ((/* implicit */signed char) (-(((((((/* implicit */long long int) ((/* implicit */int) (short)28393))) - (1251740234347671533LL))) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
    var_21 = ((/* implicit */short) var_3);
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((arr_2 [i_0] [(signed char)3]) ^ (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_1 [i_0])), (1779841133U))))));
        arr_4 [i_0 - 2] = -611240921;
        var_22 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_7 [i_1] = ((((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (unsigned char)214)))) == (((/* implicit */int) arr_0 [i_1] [i_1])));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            arr_12 [i_1] = ((/* implicit */short) arr_5 [i_2] [i_2]);
            arr_13 [i_1] [i_1] = ((/* implicit */unsigned char) arr_5 [i_2] [i_2]);
            arr_14 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((1779841141U) >> (((((/* implicit */int) arr_10 [i_1] [i_2])) % (((/* implicit */int) arr_9 [i_1])))))) >> (((/* implicit */int) arr_6 [i_1] [9]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                arr_18 [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) arr_5 [i_2] [i_2])) : (((/* implicit */int) (short)-7942)))) + (((/* implicit */int) (unsigned char)221))));
                arr_19 [i_1] [i_1] [i_3] = ((/* implicit */signed char) arr_1 [(unsigned char)6]);
                arr_20 [i_3] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)30)) && (((/* implicit */_Bool) arr_10 [i_3] [i_3])))))) | (arr_17 [i_3] [i_2] [i_2])));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_3])) >> (((((/* implicit */int) arr_11 [i_1] [i_2])) - (29270)))));
            }
            arr_21 [i_1] [i_2] = ((/* implicit */_Bool) arr_16 [i_1]);
        }
        arr_22 [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_1]);
        arr_23 [i_1] = arr_2 [i_1] [3U];
    }
    var_24 = ((/* implicit */unsigned int) (short)-27959);
}
