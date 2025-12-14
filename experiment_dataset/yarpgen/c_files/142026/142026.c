/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_5, (!var_4)));
    var_11 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_0] = ((min(-19621, (arr_3 [i_0] [i_1]))));
                    var_12 = (~29457);
                    var_13 = (max((min((-4 + 193), 1730145166)), (((!(arr_0 [i_2]))))));
                }
            }
        }
    }
    var_14 = (max(var_14, ((min((max(((var_8 ? var_1 : var_2)), (((var_8 ? 1 : var_7))))), (~var_8))))));
    #pragma endscop
}
