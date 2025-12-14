/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112101
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
    var_18 = ((/* implicit */signed char) var_12);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                var_19 -= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (signed char)-85)) ? (-4228502030522374292LL) : (arr_4 [(unsigned short)15] [i_1] [i_1]))) + (arr_0 [i_1 + 4]))) - (((/* implicit */long long int) ((/* implicit */int) (signed char)106)))));
                var_20 = 4374555559014925884LL;
            }
        } 
    } 
}
