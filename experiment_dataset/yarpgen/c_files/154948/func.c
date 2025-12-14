/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154948
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_11 ^= ((/* implicit */int) -2302651809283670469LL);
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    var_12 = min((14LL), (((/* implicit */long long int) (signed char)25)));
                    var_13 *= ((/* implicit */unsigned char) min((((/* implicit */short) (signed char)25)), ((short)2676)));
                }
            }
        } 
    } 
    var_14 = var_1;
    var_15 = ((/* implicit */long long int) ((-7889574267378443769LL) > (((((/* implicit */_Bool) -1283718992)) ? (((((/* implicit */_Bool) (unsigned char)189)) ? (3240756709744403898LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))) : (2993933605094691465LL)))));
}
