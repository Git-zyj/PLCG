/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (((((arr_1 [i_0]) || (arr_1 [i_0]))) ? (((!(arr_6 [i_0] [5] [i_1])))) : (!160)));
                arr_8 [i_0] [i_0] [i_1] = ((((((arr_2 [i_0]) ? (arr_2 [i_1]) : (arr_0 [i_0] [15])))) % (arr_1 [i_1])));
            }
        }
    }
    var_21 = (min(var_21, (((var_6 ? var_8 : var_17)))));
    #pragma endscop
}
