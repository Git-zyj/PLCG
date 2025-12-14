/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105310
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
    var_19 = ((/* implicit */short) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_11))))), (var_13)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_20 += ((/* implicit */_Bool) (+(arr_1 [i_0])));
                    var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_5 [i_0 + 1] [i_1] [0]), (var_6))))));
                    var_22 = ((/* implicit */unsigned char) max(((short)18991), ((short)18991)));
                }
            } 
        } 
    } 
}
