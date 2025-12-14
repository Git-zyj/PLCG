/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162887
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
    var_20 = ((/* implicit */_Bool) var_0);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) min((((unsigned int) var_18)), (var_17)));
                    arr_8 [i_0] = ((/* implicit */signed char) 7LL);
                    var_22 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_9))) ? (((((/* implicit */_Bool) -8LL)) ? (7LL) : (((/* implicit */long long int) var_2)))) : (var_5)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))));
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((long long int) 0U)))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) max((var_24), (((long long int) (_Bool)0))));
}
