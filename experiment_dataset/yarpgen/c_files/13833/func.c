/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13833
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) var_6);
                    var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 - 1])) & (((/* implicit */int) arr_0 [i_0 + 1]))));
                    var_18 *= ((/* implicit */unsigned char) ((arr_3 [i_0] [2ULL] [2ULL]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1])))));
                    var_19 = ((/* implicit */unsigned short) ((arr_7 [3LL] [i_0] [3LL] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                    var_20 = ((/* implicit */short) -4037560585733204072LL);
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) var_2);
        var_22 = ((/* implicit */long long int) arr_4 [0ULL] [i_0] [0ULL]);
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) arr_6 [i_0 + 1] [(unsigned short)18]))));
    }
    var_24 = ((/* implicit */short) var_6);
}
