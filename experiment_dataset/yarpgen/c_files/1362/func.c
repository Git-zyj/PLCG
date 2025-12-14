/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1362
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
    var_15 += ((/* implicit */short) var_7);
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_5))));
    var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) max((var_9), (arr_5 [i_0] [i_0] [i_0]))))));
                arr_8 [i_1] = ((/* implicit */unsigned char) ((min((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) && (((/* implicit */_Bool) var_8))))), (var_7))) * (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0])) == (((/* implicit */int) (short)27912)))))));
            }
        } 
    } 
}
