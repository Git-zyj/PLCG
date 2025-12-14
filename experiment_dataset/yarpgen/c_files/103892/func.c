/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103892
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) arr_4 [i_0 + 1] [i_0 - 3] [i_0 - 2])), ((short)-22830)))) + ((-(((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 2])))))))));
                    var_13 = (unsigned short)1;
                    var_14 = ((/* implicit */int) max(((+(var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) var_2);
}
