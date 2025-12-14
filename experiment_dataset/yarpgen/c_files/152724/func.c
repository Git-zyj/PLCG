/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152724
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */_Bool) var_6);
                var_15 = ((/* implicit */_Bool) var_5);
                var_16 = ((/* implicit */signed char) max((((((/* implicit */int) (unsigned char)192)) - (var_5))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)192))))) ? (((/* implicit */int) arr_0 [i_0])) : (min((((/* implicit */int) arr_0 [i_0])), (15)))))));
                var_17 = ((/* implicit */_Bool) arr_3 [(_Bool)1]);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))))));
    var_19 = ((/* implicit */short) ((((/* implicit */int) var_9)) - (min(((-(((/* implicit */int) var_3)))), (((var_1) & (((/* implicit */int) var_9))))))));
    var_20 = ((/* implicit */unsigned char) (_Bool)1);
}
