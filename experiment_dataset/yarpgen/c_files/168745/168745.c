/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_3 * (!var_3))));
    var_16 = 97;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = (((max(var_0, (min(-4479348471114627029, var_8)))) != (((((((-2147483647 - 1) - (arr_5 [i_2] [3])))) + ((4 ? (arr_3 [i_0 - 1] [i_2]) : var_1)))))));
                    arr_9 [i_0 - 1] [i_1] [i_1] [i_2] = (arr_4 [i_2] [9]);
                    var_17 = (((((arr_5 [i_1] [i_1 - 2]) ? var_6 : (arr_5 [i_0] [i_1 - 1]))) | 85));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    arr_19 [8] [i_4 - 1] [i_5] = ((((((((4479348471114627030 ? var_9 : var_9))) ? (var_12 < var_11) : var_10))) ? (var_14 + var_0) : ((+(max((arr_15 [i_4] [i_4] [i_5]), 1411195375))))));
                    var_18 *= (var_1 + (min((arr_10 [i_3] [i_4 - 1]), var_9)));
                }
            }
        }
        var_19 = ((~(((var_6 - var_4) << (((((arr_10 [i_3] [i_3]) ? 3171330783 : var_0)) - 3171330783))))));
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 18;i_8 += 1)
            {
                {
                    var_20 = (min((((!(((var_7 ? 2090787839 : var_13)))))), (((((var_5 != (arr_26 [i_6] [i_6] [19] [i_8])))) & (arr_24 [i_7] [4])))));
                    var_21 = (((((!var_12) >> (((arr_23 [7]) - 32)))) == ((((min(134217728, -3818)) > ((min(var_2, 1))))))));
                }
            }
        }
        var_22 = (max(var_22, ((!(((13569 / (arr_13 [i_6] [i_6] [i_6]))))))));
    }
    #pragma endscop
}
