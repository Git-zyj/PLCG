/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min(((var_1 >> (-210412053 + 210412082))), ((1 ? 1 : -210412053))))) ? ((2045434272984467467 ? (16401309800725084134 * var_1) : ((min(0, -557694629))))) : var_1));
    var_11 = (min(((~(1 != 16349170474623405055))), var_3));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_12 = (2045434272984467467 ? ((var_8 ? var_9 : var_7)) : (min((arr_3 [i_0 - 1] [i_0 - 1]), var_0)));
        var_13 = arr_0 [i_0];
        var_14 = (((arr_0 [i_0 + 1]) ? -926873212 : (arr_0 [i_0 + 1])));
    }
    /* LoopNest 3 */
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    var_15 = var_7;
                    var_16 = (~((1 ? 2049813949 : 2045434272984467447)));
                }
            }
        }
    }
    var_17 = max(var_9, ((((min(var_6, var_6))) ? var_8 : var_0)));
    #pragma endscop
}
