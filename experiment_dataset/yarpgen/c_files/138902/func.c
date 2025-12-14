/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138902
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
    var_19 = ((/* implicit */unsigned char) max((var_0), (min(((-(var_10))), (((/* implicit */int) var_7))))));
    var_20 = ((/* implicit */int) (-((-(3182239864081563497ULL)))));
    var_21 = ((/* implicit */short) (-(((/* implicit */int) var_4))));
    var_22 = ((/* implicit */unsigned int) (~(var_3)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) min(((-(max((var_10), (((/* implicit */int) var_5)))))), (((/* implicit */int) var_9))));
                arr_7 [i_0] [6] [6] = ((/* implicit */int) max((var_5), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2)))))));
                arr_8 [i_0] [i_1] = ((/* implicit */int) var_7);
                arr_9 [8ULL] = max((max(((-(((/* implicit */int) var_4)))), (var_10))), (var_10));
            }
        } 
    } 
}
