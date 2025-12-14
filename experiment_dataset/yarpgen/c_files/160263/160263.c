/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((2142475892 ? 110 : -88)) < 110))) == var_6));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (var_10 | 126);

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    var_14 = ((9876489340981619412 - ((var_5 & ((var_9 ? 1293014938 : 1961125438))))));
                    var_15 = (max(var_15, (((((((1140873287 * 2223400274) ? var_9 : var_3))) ? var_10 : 2071567021)))));
                    var_16 = ((-32763 / (((var_3 + (var_9 - var_6))))));
                }
            }
        }
    }
    #pragma endscop
}
