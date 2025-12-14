/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124976
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
    var_19 &= ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) var_8)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_0] [i_0] |= ((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned short)511)) != (((/* implicit */int) arr_1 [i_1])))));
                var_20 *= ((/* implicit */_Bool) (unsigned short)65535);
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_9);
    var_22 &= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)13))));
}
