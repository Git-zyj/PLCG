/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178511
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
    var_16 = ((/* implicit */unsigned short) var_8);
    var_17 = max((((/* implicit */long long int) var_15)), ((~(var_8))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) (~(-7072755647991792887LL)));
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max(((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_7), (((/* implicit */unsigned short) (signed char)(-127 - 1))))))) : (((unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((arr_4 [(unsigned char)10]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (var_5)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
}
