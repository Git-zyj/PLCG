/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169323
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
    var_15 = min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (-2138344232)))))), (((((/* implicit */_Bool) (+(-2138344232)))) && (((_Bool) var_5)))));
    var_16 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) (unsigned short)24948)))));
                var_18 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((int) var_0))) : (15907153100192308489ULL))), (((/* implicit */unsigned long long int) (!(arr_0 [i_0 + 1] [i_0 + 1]))))));
                arr_7 [i_0] = ((/* implicit */short) ((int) arr_4 [i_0 - 1]));
            }
        } 
    } 
    var_19 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2138344251)) ? (((/* implicit */int) var_9)) : (var_5)))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_3))) : (((/* implicit */unsigned long long int) var_1))));
}
