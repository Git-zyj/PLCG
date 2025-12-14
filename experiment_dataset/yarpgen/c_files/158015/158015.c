/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;
    var_21 = (((min(var_9, 127))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [14] [i_0] = 104;

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_22 = (max(var_22, ((((((arr_10 [i_1]) && ((max(105, 104))))) && ((max(109, 65530))))))));
                    arr_11 [i_0] [i_0] [i_1 - 1] [i_0] = (((arr_1 [i_1 - 1] [i_1 - 1]) ? (((arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? var_2 : var_4)) : 5));
                }
                var_23 = 1;
                var_24 = (min(var_24, (arr_4 [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
