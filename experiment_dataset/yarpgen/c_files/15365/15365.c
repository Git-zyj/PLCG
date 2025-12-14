/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(28, ((6 ? 58075 : -1349139043168904569))));
    var_18 &= -var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = ((-1034770176 ? -1034770176 : (arr_4 [i_0 + 2])));
                var_20 &= ((((((!(arr_3 [i_1]))))) / (arr_1 [i_1] [i_0 - 1])));
                arr_6 [i_1] = (((arr_1 [i_0 + 2] [i_0 + 1]) == (((((!(arr_4 [i_0]))) ? (var_11 && -1034770176) : (((arr_5 [i_1] [i_1]) ? 1034770176 : (arr_3 [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
