/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14175
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
    var_16 = ((/* implicit */short) ((_Bool) ((_Bool) (-(((/* implicit */int) var_4))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned int) var_14)) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_4 [(unsigned short)11] [i_0] [i_1])) == (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])))))))))) + ((+(((unsigned int) var_6))))));
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) min((max((((long long int) arr_4 [i_0] [i_0] [i_0])), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (arr_0 [7U] [7U]) : (2538880659U)))))), ((-(-3358179944145360620LL)))));
                var_18 ^= ((/* implicit */short) arr_1 [i_0]);
            }
        } 
    } 
}
