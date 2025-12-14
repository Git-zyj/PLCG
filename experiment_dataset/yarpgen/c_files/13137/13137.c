/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_14 = max((((arr_3 [i_0] [i_1] [i_1 + 3]) <= var_6)), (((arr_3 [i_0] [i_0] [i_0]) != -4900153105073347486)));
                arr_6 [i_0] [i_1 + 1] = ((((min(var_6, ((2697827862 ? (arr_3 [i_0] [1] [i_1]) : (arr_0 [5])))))) ? (min(((max(20532, (arr_3 [7] [7] [i_0])))), (max((arr_5 [5] [5] [11]), var_5)))) : (((!(((var_1 ? (arr_5 [i_1] [1] [3]) : 2697827862))))))));
            }
        }
    }
    #pragma endscop
}
