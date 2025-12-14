/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_2] = -var_8;
                        var_17 = (-(min(var_4, var_14)));
                        var_18 = (~4294967295);
                    }
                }
            }
        }
        arr_12 [i_0 - 1] = ((-var_10 ? 76 : (((!(!var_12))))));
        var_19 = (max(var_19, (((var_15 ? (~69) : ((var_7 ? var_1 : var_3)))))));
        arr_13 [i_0 - 2] [i_0 - 2] = 97;
    }
    var_20 = (max(var_20, 1));
    #pragma endscop
}
