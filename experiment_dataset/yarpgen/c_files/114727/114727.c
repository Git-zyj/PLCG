/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] |= ((-901881973 ? 2534978117 : 2614046559));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_10 = 19757;
                    var_11 = (arr_2 [18]);
                    arr_9 [i_0] [i_1 + 1] [i_1 + 1] = ((!(arr_5 [i_0] [i_0])));
                }
            }
        }
        var_12 &= ((708397896 ? 2358503281 : 1936464014));
    }
    var_13 |= var_4;
    var_14 = ((var_6 ? var_6 : (901881973 + var_1)));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 10;i_4 += 1)
        {
            {
                arr_15 [i_3] &= ((max((1702523954 & 60188), 609741805)) | (min(394056480, ((var_4 ? 119 : 0)))));
                var_15 = (((((((var_6 + 2147483647) << (148116225 - 148116225))))) ? 1 : (((arr_5 [i_4] [i_4 - 3]) / -119))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_18 [11] [11] = (~-127);
        var_16 = ((0 ? 4146851071 : 4294967295));
    }
    #pragma endscop
}
