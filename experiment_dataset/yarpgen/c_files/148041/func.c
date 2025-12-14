/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148041
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3760333817U)) && (((/* implicit */_Bool) arr_5 [i_1] [i_1])))))) & (((arr_5 [i_1] [i_1]) & (arr_3 [i_1 - 1] [i_1 + 1] [i_1 + 1]))));
                    var_20 = 2664741527U;
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_1) : (1597400409U)))) != (((((/* implicit */_Bool) 1741639264U)) ? (534633478U) : (666098205U)))));
}
