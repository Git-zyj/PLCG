/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172983
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
    var_15 = ((/* implicit */unsigned short) ((_Bool) (+(((/* implicit */int) (unsigned char)40)))));
    var_16 -= ((((/* implicit */long long int) var_12)) / (min((((/* implicit */long long int) var_6)), (max((((/* implicit */long long int) (unsigned char)54)), (68053635160985008LL))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)21)), (68053635160985008LL)));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
            }
        } 
    } 
}
