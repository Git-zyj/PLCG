/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = ((((((arr_4 [i_0] [i_1] [i_1]) ? (arr_4 [i_0] [i_1] [i_1]) : var_12))) ? (arr_3 [i_0]) : (6042 || 46)));
                arr_7 [i_0] = (((((((var_9 ? (arr_0 [i_0]) : var_12))) ? (arr_3 [i_0]) : ((22442 ? -22443 : var_3)))) | var_6));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_16 = arr_2 [i_2];
                arr_12 [i_2] = ((((((arr_10 [i_2] [i_2]) ? 4294967295 : (2306767365631010738 || 6042)))) || ((max((arr_3 [i_2]), (((arr_0 [i_2]) ? (arr_1 [i_2] [i_2]) : 96)))))));
                var_17 = (arr_10 [i_2] [i_3]);
            }
        }
    }
    var_18 = (min(-var_5, var_12));
    var_19 = (max(1, 32749));
    #pragma endscop
}
