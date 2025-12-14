/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184089
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
    var_18 = (+(var_0));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_7 [i_0] [4ULL] = (-(((((16526706199830867386ULL) >> (((var_13) - (11142909728591172186ULL))))) >> (((var_12) - (11385269544412714087ULL))))));
                var_19 = ((/* implicit */unsigned long long int) max((var_19), ((+(var_1)))));
            }
        } 
    } 
    var_20 = (((!(((/* implicit */_Bool) var_16)))) ? (var_3) : (((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_6) : (5148952435434004066ULL)))));
}
