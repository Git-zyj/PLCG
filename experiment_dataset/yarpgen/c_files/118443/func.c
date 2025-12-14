/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118443
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
    var_11 = ((/* implicit */unsigned char) var_6);
    var_12 = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((-3008293962695404677LL), (((/* implicit */long long int) var_6))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))))), (((int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) var_8)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned short) arr_2 [i_0]);
                var_14 *= ((/* implicit */short) (_Bool)1);
            }
        } 
    } 
}
