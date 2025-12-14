/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_17 -= var_0;
            var_18 = var_6;
            var_19 -= var_1;
        }
        var_20 = (arr_3 [4] [4]);
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_21 = (min(var_21, var_9));
        arr_6 [i_2] [i_2] = ((!((((arr_2 [i_2]) ? (((arr_0 [i_2] [i_2]) - (arr_0 [i_2] [i_2]))) : ((max(var_3, (arr_2 [i_2])))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_22 = (!var_9);
        arr_10 [i_3] = (arr_3 [i_3] [i_3]);
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 13;i_6 += 1)
            {
                {
                    arr_21 [i_5] [i_5 - 2] [i_5] = -1589909404;
                    var_23 = ((((~(min(-1589909434, (arr_7 [i_5])))))) && ((((arr_16 [i_4 + 1]) >> (((arr_16 [i_4 + 2]) - 61024))))));
                    var_24 -= var_3;
                    var_25 &= (((arr_1 [i_5] [i_4]) ? var_6 : (((((1589909403 != (arr_13 [i_4] [i_4 + 2])))) >> (0 | var_10)))));
                    arr_22 [i_5] [i_5] [i_5] = (((arr_17 [i_4] [i_6 + 2] [i_6] [7]) ? (arr_15 [i_5] [i_4] [i_5]) : (max((arr_17 [i_4] [i_6 + 1] [i_4] [i_5]), (arr_15 [i_5] [i_5] [i_5])))));
                }
            }
        }
    }
    var_26 = var_4;
    #pragma endscop
}
