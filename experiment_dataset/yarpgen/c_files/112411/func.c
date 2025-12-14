/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112411
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
    for (signed char i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) + (4294967273U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_1 [i_0])))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (-(((/* implicit */int) (short)27552)))))))));
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) min((var_0), (arr_3 [i_0])))) ^ (arr_1 [i_0])))), (max((((/* implicit */long long int) arr_0 [i_0 + 2])), (var_5)))));
                arr_5 [i_1] = ((/* implicit */unsigned short) arr_3 [i_0]);
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
    var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
}
