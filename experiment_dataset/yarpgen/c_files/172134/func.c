/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172134
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned char) var_6);
                arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((var_3), (((/* implicit */int) (unsigned char)0)))), ((+(((/* implicit */int) (unsigned char)0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) (unsigned char)12)), (7788231526347673138ULL)))))) : (min(((-(arr_0 [i_0]))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)192)), (9223372036854775807LL))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (-14) : (((/* implicit */int) var_13)))))))), (((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)))))));
}
