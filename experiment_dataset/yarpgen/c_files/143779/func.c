/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143779
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
    var_17 = ((/* implicit */int) ((max((((/* implicit */long long int) var_13)), (((long long int) var_5)))) * (((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) (signed char)55))))) ? ((-(12LL))) : (((/* implicit */long long int) var_4))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) (-(((5137621150892327223LL) + (-2118751131774120970LL)))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */short) (-((-(((/* implicit */int) arr_8 [i_0]))))));
                    var_19 -= ((/* implicit */short) var_6);
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned short) ((((long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)92)) : (2064384)))) > (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) min((max((((/* implicit */unsigned int) var_16)), (var_13))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_2), ((short)-20189))))))))))));
    }
}
