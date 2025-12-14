/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (((arr_2 [i_1] [16]) % (arr_2 [i_0] [i_1])));

                for (int i_2 = 4; i_2 < 18;i_2 += 1)
                {
                    var_21 = 13334;
                    var_22 = (arr_1 [i_0]);
                    var_23 = var_7;
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_24 = (((((~(arr_0 [i_0] [i_0])))) ? (((!(~var_15)))) : (((((1 ? 109 : 1)) != (arr_7 [i_0] [i_0]))))));
                    var_25 |= ((((((1 ? 13623 : var_0))) ? var_18 : (var_6 / var_6))));
                }
            }
        }
    }
    var_26 = ((~(max((var_19 & 118), (var_17 | 227)))));
    #pragma endscop
}
