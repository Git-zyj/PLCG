/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((!(((((max(var_6, 1918258605))) ? ((var_11 ? 751647519 : 221)) : var_6))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_13 = (((((!(!99)))) << (var_7 - 101)));
                arr_4 [i_0] [i_0] = (1 ? (221 ^ 0) : ((((!var_2) > var_5))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_14 = ((-65519 * (!1)));
                    var_15 = (((((min(var_5, 6323768828163892323)) > -1)) ? (var_7 <= var_5) : var_7));
                    var_16 = (((8 ? var_3 : 1)));
                }
            }
        }
    }
    #pragma endscop
}
