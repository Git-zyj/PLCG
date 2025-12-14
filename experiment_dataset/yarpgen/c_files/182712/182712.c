/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (((((227 ? 506016490 : (arr_2 [i_0] [i_1] [i_1])))) ^ var_1));
                var_14 = (!2184768220);
            }
        }
    }
    var_15 = var_10;
    var_16 = ((!((((2184768206 && 9223372036854775807) ? var_9 : (!12789))))));
    #pragma endscop
}
