/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153405
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
    var_16 |= (-((-(var_10))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 += ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12795)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (47888217445016628LL)))) ? (max((((/* implicit */long long int) var_5)), (7792446645353524792LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))))));
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (~((~(((((/* implicit */_Bool) (short)15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (arr_0 [i_0] [i_0]))))))))));
            }
        } 
    } 
}
