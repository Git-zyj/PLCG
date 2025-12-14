/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186134
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1 + 1] [i_1] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)13)))) ? (((/* implicit */unsigned long long int) ((var_2) % (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 2])))))) : (min((((/* implicit */unsigned long long int) arr_2 [i_1 + 1])), (7072765388517371408ULL)))));
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) 4055701523908440507LL))));
                    var_20 ^= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)3)), (max(((-(-3385270518460434679LL))), (var_8)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) 11791499190781550794ULL);
}
