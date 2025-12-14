/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 += (((var_4 != var_5) >= ((((arr_1 [i_0] [i_0]) <= 18446744073709551615)))));
        var_14 = (61 >= 1);
        var_15 = ((-(arr_0 [i_0] [i_0])));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 24;i_3 += 1)
            {
                {
                    arr_9 [i_1] [i_3 + 1] = ((min(18446744073709551606, 83)));
                    var_16 = ((!(((((min(2047, (arr_7 [i_1])))) ? (~var_6) : ((-5543 ? -78 : var_2)))))));
                    var_17 = (max(var_17, ((((max((((16455362962383678241 ? var_12 : var_8))), (min(var_12, 18446744073709551601))))) ? ((((max(1, var_7))) ? (min(var_7, 16592882784221204161)) : (((1991381111325873375 ? var_9 : (arr_4 [i_1] [i_2] [i_2])))))) : ((var_5 * ((var_1 ? var_7 : var_9))))))));
                }
            }
        }
    }
    #pragma endscop
}
