/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100890
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_12 *= (+(var_2));
            var_13 *= 1646828517U;
        }
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1646828525U)) || (((/* implicit */_Bool) 534262516U))));
        arr_5 [i_0] [i_0] = 4294967295U;
        var_15 ^= min((((((unsigned int) 2719609429U)) % (((85923357U) >> (((2648138779U) - (2648138769U))))))), (4294967270U));
    }
    var_16 *= ((/* implicit */unsigned int) (~((+(((/* implicit */int) ((4294967295U) != (var_9))))))));
    var_17 = ((/* implicit */unsigned int) min((var_17), ((-(var_11)))));
}
