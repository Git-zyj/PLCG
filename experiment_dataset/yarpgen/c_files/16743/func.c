/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16743
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
    var_18 -= ((/* implicit */unsigned long long int) ((_Bool) (+(((/* implicit */int) (unsigned char)137)))));
    var_19 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) max((var_6), (((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 1] [i_0 + 1])) ? (arr_2 [i_0] [i_1 + 2] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1])))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) (((((+(var_10))) * (((/* implicit */long long int) ((/* implicit */int) var_17))))) + (((/* implicit */long long int) (~(arr_4 [i_0]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) var_8);
}
