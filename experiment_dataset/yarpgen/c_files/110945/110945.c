/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((max(((var_10 ? 1 : -1070958804)), var_3)))));
                arr_5 [i_1] [i_1] = (max(((var_3 ? var_2 : ((max(var_2, (arr_1 [6])))))), ((1 ? -2552 : 2552))));
                var_12 = -5569;
            }
        }
    }
    var_13 = ((((((((-5447166868548053104 ? var_6 : var_3))) ? var_9 : (max(2571, 11921340869375708178))))) ? (~var_6) : (max((max(306445258042379450, var_4)), var_9))));

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_14 = (min(1, ((min(8232, -2577)))));
        arr_10 [1] = (max((((var_2 << 1) ? (((arr_9 [i_2]) ? var_5 : var_1)) : ((var_2 ? var_10 : var_0)))), (arr_6 [i_2])));
    }
    var_15 = var_8;
    var_16 = var_1;
    #pragma endscop
}
