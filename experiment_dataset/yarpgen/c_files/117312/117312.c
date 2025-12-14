/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((+((var_8 ? (var_7 < -5869335882565907539) : var_6))));
    var_14 = ((((~((max(-12216, var_3))))) ^ -var_10));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1 - 2] [i_2] [i_1 - 2] = (((arr_2 [i_1 - 2] [i_1 - 2] [i_1 - 2]) ? (arr_8 [i_0] [i_0] [i_2] [i_0] [i_3] [i_3]) : -2));
                        var_15 = 1;
                        var_16 -= (2268432860168031689 ^ 1);
                    }
                }
            }
        }
        var_17 -= ((((1 ^ (arr_6 [i_0])))) ? 1 : (1 - 32767));
        arr_11 [i_0] = ((1 && 32767) || (-32767 - 1));
        var_18 = (var_0 ? var_4 : -83);
    }
    #pragma endscop
}
