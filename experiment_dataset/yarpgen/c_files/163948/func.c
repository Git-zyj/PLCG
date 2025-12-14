/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163948
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_19 |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_3 [(signed char)12]))));
                var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)197))));
                var_21 = ((/* implicit */int) var_11);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_17);
    var_23 += ((/* implicit */_Bool) (((~((~(((/* implicit */int) (unsigned char)236)))))) >> (((((/* implicit */int) var_15)) - (111)))));
}
