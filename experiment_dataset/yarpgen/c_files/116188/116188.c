/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_5 > (!var_13)));
    var_20 = ((1 < ((255 ? -12315393 : 4294967295))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_2] = (arr_2 [6] [i_1 - 1]);
                    var_21 = (max(((((arr_1 [11]) ? (arr_0 [i_0]) : (((255 ? var_4 : (arr_5 [8] [i_1] [i_2]))))))), (max((((arr_4 [i_0] [i_0] [i_2]) ? 13267843228776844971 : var_15)), 13267843228776844974))));
                    arr_8 [i_0] = (max(var_14, ((var_4 ^ (((arr_1 [i_0]) ? var_8 : (arr_5 [i_0] [8] [i_0])))))));
                }
            }
        }
    }
    var_22 = (max(((13267843228776844974 ? 143457986911918777 : 7)), (min(var_16, ((var_18 ? var_5 : var_13))))));
    #pragma endscop
}
