/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_3;
    var_14 = ((((((!((min(var_5, var_6))))))) != ((var_10 ? var_5 : 3550258991038663391))));
    var_15 = min(var_2, var_3);
    var_16 = (min(var_16, ((max(var_4, ((((max(var_12, var_10))) ? -4076808183 : (4076808185 & var_7))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = (min(var_17, var_8));
        var_18 = (arr_0 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_19 = (min(var_19, ((((arr_11 [3] [i_1] [i_1] [i_3]) ? (arr_11 [i_0] [i_1] [i_2] [7]) : var_7)))));
                        arr_12 [i_0] [i_0] [4] [i_0] [i_1] [i_0] |= ((arr_8 [i_0] [i_1] [i_1] [i_3]) ? (arr_8 [i_0] [1] [i_0] [i_0]) : (arr_8 [i_0] [i_1] [i_2] [i_3]));
                    }
                }
            }
        }
        arr_13 [i_0] = ((((!(arr_5 [i_0])))));
        var_20 = (((arr_4 [i_0]) & (arr_4 [i_0])));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        arr_16 [i_4] [4] = ((!(!var_11)));
        arr_17 [i_4] = (((1 <= 11429162381752716789) ? (((((var_4 ? var_0 : 4076808160))) ? ((max(var_12, var_7))) : ((17220377543577570667 * (arr_15 [i_4] [i_4]))))) : (((-((min((arr_15 [i_4] [i_4]), var_8))))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        arr_20 [i_5] = var_8;
        arr_21 [i_5] [i_5] = var_5;
    }
    #pragma endscop
}
