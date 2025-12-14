/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                var_20 -= (((((((~(arr_3 [i_1]))) + (arr_3 [i_0])))) ? (arr_1 [i_1 - 1]) : (((min((-32767 - 1), var_13)) % (((min((arr_3 [i_1]), var_9))))))));
                var_21 -= (min((min((((!(arr_0 [i_0])))), (min(14296, var_2)))), (arr_3 [i_0])));
                arr_4 [i_0] [i_0] [i_0] = (min((((51236 ? (arr_1 [i_1 - 3]) : var_11))), ((var_0 + (arr_1 [i_1 - 2])))));
            }
        }
    }
    var_22 = (~-var_4);
    #pragma endscop
}
