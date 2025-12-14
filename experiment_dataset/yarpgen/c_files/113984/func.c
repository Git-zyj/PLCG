/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113984
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
    for (int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_20 += ((/* implicit */signed char) (~(min((((/* implicit */int) (unsigned char)191)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)65)) : (((/* implicit */int) (unsigned char)69))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) var_2)), ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))));
            }
        } 
    } 
    var_21 += ((/* implicit */long long int) var_12);
}
