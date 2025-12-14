/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147138
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
    var_13 -= ((/* implicit */unsigned long long int) var_1);
    var_14 = ((/* implicit */_Bool) (+(var_7)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) * (((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_1 - 1]))) : (var_12)))));
                var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1]))))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) (unsigned short)41)), (6208727780985305004ULL))))))));
            }
        } 
    } 
}
