/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131411
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
    var_18 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(1147320261)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2 + 1])))))) : (((((/* implicit */_Bool) arr_2 [i_1] [i_2 - 1])) ? (((/* implicit */long long int) var_16)) : (var_15)))));
                    var_19 += ((/* implicit */_Bool) var_1);
                }
            } 
        } 
    } 
}
