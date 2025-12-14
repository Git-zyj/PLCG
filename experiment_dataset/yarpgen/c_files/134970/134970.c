/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_12 = (max(var_12, (((((((arr_1 [i_0 + 1]) ^ (arr_1 [i_0 + 1])))) ? 18364720977177634544 : (max(var_6, 18364720977177634561)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((!(!18446181123756130304)))));
                    var_14 = 152;
                    arr_8 [i_0] [i_0] [i_0] = (arr_1 [i_2]);
                    var_15 = ((~((var_7 ? var_3 : var_1))));
                }
            }
        }
        arr_9 [i_0] = (max((((arr_1 [i_0 + 1]) ? (arr_2 [i_0] [i_0]) : -48)), ((18446181123756130286 ? (-32767 - 1) : 0))));
    }
    var_16 = ((~(max((~var_3), var_10))));
    var_17 = var_10;
    var_18 = var_8;
    #pragma endscop
}
