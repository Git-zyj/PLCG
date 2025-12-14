/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_4 ? (min((max(var_8, var_0)), var_4)) : var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = (((min(((var_6 ? (arr_4 [i_1 + 1] [i_1] [i_0]) : (arr_5 [i_1 - 1]))), (arr_5 [i_1 - 1])))) ? (arr_0 [i_1 + 1] [i_1 + 2]) : var_5);
                arr_6 [i_1] = (min((((arr_4 [i_0] [i_1] [i_0]) ? (max((arr_5 [i_0]), var_1)) : (((var_9 << (978555817 - 978555791)))))), (((!(arr_4 [i_1 - 1] [i_1] [i_0]))))));
                arr_7 [i_1] [i_1] = arr_2 [i_1 + 2];
            }
        }
    }
    #pragma endscop
}
