/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    var_15 = (max(85, var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (10872522396221571907 || (arr_0 [i_0] [i_0]));
        arr_3 [i_0] = ((182 >> (((arr_0 [5] [i_0]) - 3629179411))));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_16 = (min(((~(arr_8 [1] [i_2] [i_2]))), (((!((min(19876, 133))))))));
                arr_9 [i_1] [i_1] [i_1] = (max(((~(var_10 & 122))), (((~(!123))))));
            }
        }
    }
    var_17 = ((var_8 ? (((-3929871553192801726 >= 133) ? var_0 : var_12)) : ((min(((max(-101, var_4))), var_7)))));
    #pragma endscop
}
