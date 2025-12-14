/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (min((((8 - (arr_0 [i_0])))), (((~3930006029369822418) ? (1 != -5739989608010591676) : (min((arr_0 [1]), var_13))))));
        arr_3 [i_0] = ((((var_7 ? 65528 : ((0 ? var_11 : var_12)))) * ((((!(arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = var_3;
                    arr_9 [i_2] [i_1] = (arr_8 [i_2] [i_1] [4]);
                }
            }
        }
    }
    var_18 = min((1927089617 & var_7), var_14);
    #pragma endscop
}
