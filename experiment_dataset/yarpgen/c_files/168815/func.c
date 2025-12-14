/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168815
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
    var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_15)) : (var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (var_4)))) : (((((/* implicit */_Bool) 9ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (18446744073709551589ULL)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (max((18446744073709551615ULL), (18446744073709551589ULL))))) : ((~(((((/* implicit */_Bool) 2934470568U)) ? (47ULL) : (18446744073709551597ULL)))))));
    var_17 = ((/* implicit */unsigned char) var_15);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)32747)) ? (arr_7 [i_0] [i_1]) : (6ULL)))));
                    arr_9 [i_0 - 4] [i_1] = ((/* implicit */unsigned int) 19ULL);
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_3 [i_0 - 2] [i_0 + 1] [i_0 - 2])) | (((((/* implicit */_Bool) var_1)) ? (arr_7 [i_0 - 1] [i_0 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [14LL] [i_0] [(signed char)14])))))));
    }
}
