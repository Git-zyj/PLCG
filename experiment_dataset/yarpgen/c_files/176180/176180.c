/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = (max((max((arr_6 [i_2] [i_2] [i_2]), ((-65 ? var_7 : var_8)))), (((!((30885 <= (arr_5 [i_2] [6] [1]))))))));
                    var_13 = (min(var_13, -27995));
                    arr_7 [i_0] &= (max((~-47), (((max(176, 2403613457)) | (((max(0, 10379))))))));
                    var_14 = (max(var_14, ((((--113) ? ((((arr_3 [i_2] [i_0] [i_0]) / (arr_1 [i_0])))) : (((max(var_3, (max(var_1, var_5)))))))))));
                    var_15 = (max(((max(55152, 89))), (-778420268 / 268435455)));
                }
            }
        }
    }
    #pragma endscop
}
