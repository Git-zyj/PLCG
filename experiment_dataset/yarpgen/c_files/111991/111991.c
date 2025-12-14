/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 49751;
    var_17 &= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 -= (min((max((arr_1 [i_1]), 18005602416459776)), (((1 / (arr_1 [i_1]))))));
                arr_5 [i_0] = (min((((arr_1 [i_0]) ? (arr_4 [i_0]) : (arr_3 [i_0] [i_0] [i_0]))), ((max((arr_1 [i_0]), (arr_4 [i_0]))))));
                arr_6 [i_0] = ((((((arr_0 [i_0] [i_1]) / (arr_3 [i_0] [1] [i_0])))) ? ((max(((max((arr_2 [i_0]), var_15))), (max(var_14, (arr_3 [i_0] [i_1] [i_0])))))) : (((((var_1 + (arr_0 [i_0] [i_0])))) * (max(4194300, var_2))))));
                arr_7 [i_0] [i_0] [i_1] = (max(((min((arr_4 [i_0]), (arr_4 [i_0])))), (arr_1 [i_0])));
            }
        }
    }
    var_19 = ((var_4 ? var_11 : (min(18005602416459776, (1 * var_15)))));
    var_20 = ((57 << (min(var_15, 1))));
    #pragma endscop
}
