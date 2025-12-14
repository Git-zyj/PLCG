/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116574
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (short i_3 = 2; i_3 < 23; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) arr_7 [i_0]);
                        arr_15 [i_0] = ((/* implicit */signed char) (unsigned char)10);
                    }
                } 
            } 
        } 
        var_17 += ((/* implicit */short) arr_2 [18ULL] [i_0]);
    }
    var_18 = ((/* implicit */unsigned int) var_10);
    var_19 = ((/* implicit */unsigned char) var_12);
    var_20 = ((/* implicit */unsigned char) (+((~(var_0)))));
}
