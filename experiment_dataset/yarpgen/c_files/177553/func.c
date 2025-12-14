/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177553
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
    var_17 = ((/* implicit */unsigned long long int) var_13);
    var_18 = ((/* implicit */_Bool) (+((-(max((((/* implicit */long long int) var_13)), (var_2)))))));
    var_19 = ((/* implicit */signed char) (-(((long long int) max((var_15), (((/* implicit */unsigned long long int) var_1)))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_15) : (((/* implicit */unsigned long long int) var_14))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), ((+(var_9))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((int) arr_2 [i_0] [i_0] [i_0]))) : (((arr_0 [i_0]) & (((/* implicit */long long int) arr_2 [i_1] [i_0] [i_0]))))));
            var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1]))));
        }
        for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-((+(10966814598218305266ULL)))));
            var_22 &= ((unsigned int) (~(arr_0 [18])));
        }
        arr_9 [(signed char)2] &= ((/* implicit */_Bool) arr_7 [(short)2] [(short)2]);
    }
}
