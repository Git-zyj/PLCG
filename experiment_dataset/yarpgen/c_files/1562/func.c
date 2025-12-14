/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1562
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
    var_15 = ((var_10) & (((/* implicit */unsigned long long int) var_3)));
    var_16 = ((/* implicit */unsigned long long int) var_12);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) var_13))));
                arr_7 [i_1 - 1] [i_0] [i_0] = ((/* implicit */int) max(((!(((/* implicit */_Bool) (+(var_11)))))), ((!(((/* implicit */_Bool) (+(var_5))))))));
            }
        } 
    } 
}
