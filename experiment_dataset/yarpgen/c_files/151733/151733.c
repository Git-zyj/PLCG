/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] = (max((((!(arr_0 [i_1])))), (arr_0 [i_0])));
                arr_6 [1] [1] = (((((((var_16 ? 44 : 166))) ? (arr_3 [1] [i_0] [i_1]) : (((max((arr_0 [i_0]), 90)))))) & (((max((arr_0 [i_0]), (arr_0 [i_1])))))));
                arr_7 [i_0] [1] [1] = var_16;

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        arr_14 [1] [2] [i_3] [i_3] &= 15315641559999274807;
                        arr_15 [i_3] [i_3] [i_2] [i_2] [i_3] [1] = arr_4 [i_2];
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_19 = (max(var_19, (((3131102513710276800 >> (3131102513710276792 - 3131102513710276792))))));
                            arr_22 [i_0] [i_1] [i_2] [i_4] [i_5] = 13248770944520008173;
                            arr_23 [i_0] [i_1] [i_2] [i_4] [i_5] = ((var_13 | (arr_19 [i_5])));
                            var_20 = (max(var_20, var_5));
                        }
                        var_21 = (var_18 || (16233715661639487536 | 62));
                    }
                    var_22 = ((1 ? 117 : 3131102513710276808));
                }
                arr_24 [i_0] = var_18;
            }
        }
    }
    var_23 ^= var_16;
    var_24 &= 11475820192306488078;
    #pragma endscop
}
