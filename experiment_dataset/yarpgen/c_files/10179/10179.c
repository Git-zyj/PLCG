/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 = var_15;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_20 = ((!(((4018542308912585501 & (((0 ? var_9 : (arr_6 [i_0] [i_1] [i_2] [i_3])))))))));
                        var_21 = var_12;
                    }
                    var_22 = (min(var_22, (((((((var_8 ? (arr_9 [i_0] [i_1] [i_0] [i_0]) : (arr_9 [i_2 + 3] [i_2] [i_1] [i_0 - 1])))) ? var_9 : 949215571))))));
                }
            }
        }
        var_23 = (((var_7 ? -792089050 : (max(46, (arr_9 [i_0] [i_0] [i_0] [i_0]))))));
        var_24 = ((((min(var_10, (arr_8 [i_0] [i_0] [i_0 + 1])))) ? ((var_9 ? (arr_8 [i_0] [i_0 + 1] [i_0 + 1]) : 252)) : (arr_8 [i_0] [i_0] [i_0 + 1])));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            var_25 = (((arr_11 [i_5]) >> (((arr_9 [i_4 - 1] [i_4] [i_5] [i_5]) - 17847341407692483492))));
            var_26 = (((arr_14 [i_4 - 1]) ^ (arr_10 [i_4 - 1] [i_5 + 1] [i_5 - 1] [i_5 - 1])));
        }
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 17;i_7 += 1)
            {
                {
                    var_27 += (arr_6 [i_4 - 1] [i_6 + 1] [i_7 - 1] [i_7]);
                    var_28 = var_12;
                }
            }
        }
    }
    var_29 = ((((min(17361505805483284528, ((var_14 ? var_6 : var_11))))) && var_10));
    var_30 = (!1085238268226267106);
    var_31 = (~1);
    var_32 = 17361505805483284510;
    #pragma endscop
}
