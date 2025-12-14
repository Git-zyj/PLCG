/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(((((-23549 ? -247 : 17732923532771328))) ? (!var_0) : (1 | -8466153045151745505)))));
    var_17 = (max(1, 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (((max(((((arr_2 [i_0]) ? (arr_0 [i_0]) : var_7))), (max(var_0, (arr_3 [i_1] [i_1]))))) * var_2));
                arr_6 [i_0] [i_1] = ((+(((!(((var_13 ? (arr_1 [15]) : (arr_1 [i_0])))))))));
            }
        }
    }
    var_19 += ((~(-7 - 1)));
    #pragma endscop
}
