/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(1047495522, 1));
    var_13 = (((min(((var_3 ? var_1 : var_7)), (var_8 < var_4))) <= ((((((var_3 ? -8331 : -8331))) ? var_0 : var_3)))));

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= ((max((max(336922259, var_1), -8331))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = (((((-(~-8192)))) && 0));
                    var_15 = (min(3958045036, (arr_0 [i_2] [i_2])));
                    var_16 *= ((((((arr_1 [i_0 + 2]) ? (arr_8 [i_1] [i_1] [6] [0]) : var_1))) ? (~-77) : var_2));
                    var_17 += (min(((((arr_4 [i_0 - 3]) - (arr_4 [i_0 - 1])))), (((arr_6 [i_0 + 1]) ? 1012865780574269928 : 218))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_18 = (min(var_18, (-74 >= 8220)));
        var_19 *= 336922290;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_20 &= (var_7 - -8331);
        arr_14 [11] = var_1;
    }
    var_21 |= ((~(min(((max(var_3, var_5))), var_2))));
    #pragma endscop
}
