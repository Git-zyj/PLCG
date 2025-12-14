/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((min(var_8, var_10))))) ? (min(((var_4 ? var_8 : var_6)), ((var_2 ? 848753989 : var_3)))) : ((~((var_8 ? var_5 : var_3))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 -= (~168248004);
        arr_4 [i_0] = 128;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] = (var_4 ? 210 : 49095);
                    var_15 = (-786376963 ? ((var_1 ? 166735196 : 1596134108)) : ((16384 ? 4690 : (arr_10 [i_0]))));
                }
            }
        }
    }
    #pragma endscop
}
