/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min((((var_7 >> (var_6 - 6919386372711191443)))), (max(var_6, 8388544))))) ? (((var_9 || (!var_10)))) : (min(((9453 ? 56082 : -1846768467)), (max(57526, -1))))));
    var_12 = (9 ? (28 - 126) : 126);

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_13 = (arr_2 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_2] = (!10277);
                    arr_10 [i_0] = (((arr_2 [i_2]) ? (min(var_6, (((67108863 ? -13353 : var_0))))) : -3621403321210074777));
                    var_14 = (max(var_7, 1543765947));
                }
            }
        }
    }
    var_15 = var_7;
    #pragma endscop
}
