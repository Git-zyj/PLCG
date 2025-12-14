/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_0 [i_0] [i_0]) ? (!var_17) : 41));
        var_19 |= (((arr_1 [i_0 + 1] [i_0 + 1]) | (arr_3 [i_0] [i_0])));
        var_20 = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_21 = (arr_1 [i_1] [i_1]);
        var_22 = ((-41 ? (((var_2 && ((min(0, 81)))))) : (37859 * 0)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((-4973059703664978249 ? 0 : 192));
                        arr_14 [i_1] [i_1] [i_1] [i_1] = (((((-38 ? 4141732775 : 2147483647))) ? (arr_6 [i_1] [i_1]) : ((-(arr_3 [i_4 - 3] [i_1 + 1])))));
                        arr_15 [i_1] [i_1] [i_1] [i_1] = (((((((arr_7 [i_1 + 1]) >= (arr_7 [i_1]))))) + (((arr_7 [i_1 + 1]) ? (arr_7 [i_1 + 3]) : (arr_7 [i_4 - 2])))));
                        var_23 = (((arr_6 [i_4 - 2] [i_1]) ? ((-(arr_0 [i_4] [i_4 - 3]))) : var_8));
                    }
                }
            }
        }
        arr_16 [14] |= (min(((~(((arr_8 [i_1] [10]) + 16383)))), (arr_2 [i_1 + 1] [i_1 + 1])));
    }
    for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_24 &= ((max(var_12, 1)));
        var_25 = (arr_7 [i_5]);
        var_26 += ((~(((arr_2 [i_5] [i_5]) ? ((min((arr_6 [i_5] [10]), (arr_10 [i_5] [1] [i_5])))) : (!var_2)))));
        var_27 += ((((((-32767 - 1) != 43246569))) == 127));
        var_28 += max((arr_18 [i_5]), ((max(1, 0))));
    }
    var_29 = -var_11;
    var_30 = ((((var_9 ? var_11 : (var_7 && var_13))) / 28398));
    #pragma endscop
}
