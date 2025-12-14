/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133450
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
    var_13 |= ((/* implicit */unsigned int) 120825429);
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_7))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))))));
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (unsigned short)33826)), (arr_3 [i_0]))) >> (((((((/* implicit */long long int) var_3)) % (arr_0 [(short)8]))) - (131324195LL)))))) ? (((/* implicit */int) (unsigned short)62687)) : (((/* implicit */int) var_5)))))));
            }
        } 
    } 
    var_17 = min((((int) (!(((/* implicit */_Bool) var_11))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)39696))))));
}
