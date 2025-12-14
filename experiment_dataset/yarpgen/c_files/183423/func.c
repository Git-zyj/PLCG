/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183423
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_14 = -6516459315292590733LL;
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max((((((/* implicit */_Bool) -6516459315292590749LL)) ? (-6516459315292590754LL) : (6516459315292590727LL))), (((/* implicit */long long int) arr_0 [i_0 + 3])))))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 14; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_1]);
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_2 [i_1])))) ? ((-(-6516459315292590739LL))) : (((/* implicit */long long int) arr_1 [i_1]))));
            var_17 -= arr_7 [i_2 + 1] [i_2 - 1];
            arr_8 [i_2] [i_1] = ((/* implicit */unsigned short) arr_0 [(short)9]);
        }
        arr_9 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_2 [i_1])))) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2098191777)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)96)))))));
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_10 [i_1 + 1] [i_3]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 4; i_5 < 16; i_5 += 3) 
                {
                    var_19 = ((int) ((var_6) > (arr_2 [i_1 + 2])));
                    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-8192)) + (2147483647))) << (((arr_13 [i_5 - 2] [i_1 + 2]) - (9227862474652124544ULL)))));
                }
                var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_1] [i_3] [i_3] [i_3])) ? (arr_6 [i_1 + 2]) : (((unsigned int) arr_15 [i_1] [i_1 + 3] [i_1] [i_1]))));
                arr_20 [i_4] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3] [i_3] [i_3] [i_1]))) >= (1940995016U)));
                arr_21 [i_1 + 1] [i_3] [2LL] [i_4] &= ((/* implicit */short) ((signed char) arr_19 [i_1 + 1] [i_3] [0LL] [i_4] [i_4]));
            }
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_10))));
        }
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_1 - 1] [(unsigned char)9] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */long long int) var_6)) : (6516459315292590749LL)));
    }
    var_24 = ((/* implicit */int) var_7);
    var_25 = ((/* implicit */int) 6516459315292590735LL);
    var_26 |= ((/* implicit */unsigned short) var_2);
}
