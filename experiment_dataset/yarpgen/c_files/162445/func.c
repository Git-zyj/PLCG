/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162445
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((((/* implicit */_Bool) arr_6 [i_0] [(signed char)14] [(signed char)14] [i_2])) ? (arr_6 [i_0] [i_1] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))))))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_15))));
                    var_19 -= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (-(-769858072))))))));
                }
            } 
        } 
    } 
    var_20 = var_13;
}
