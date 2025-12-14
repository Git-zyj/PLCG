/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min(var_11, (max(32767, var_11))))) ? ((((3744053814 << (var_15 - 31438))) >> (((29972 & var_14) - 24806)))) : var_3));
    var_20 = (var_10 * 0);
    var_21 = var_15;
    var_22 = ((!(((((267682690995608549 ? var_1 : var_8)) ^ (2147483647 == var_10))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_23 += ((var_8 ^ (((-((384356403 ? 16384 : 1)))))));

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        arr_10 [i_2] [15] = 5;
                        var_24 += (arr_4 [i_0] [5] [i_2]);
                    }
                    arr_11 [i_2] = (((arr_7 [i_0] [i_1] [i_0]) / ((-(arr_7 [i_0] [i_1] [i_2])))));
                    var_25 = (((max(var_14, ((1707454594 - (arr_7 [i_0] [i_1] [14])))))) ? (((arr_2 [i_0] [i_0] [i_2]) ? 9242779952299535633 : var_16)) : var_17);
                    arr_12 [i_0] [i_2] [i_2] = (min((-61 == -61), ((32767 ? var_1 : (arr_3 [i_0] [i_0] [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
