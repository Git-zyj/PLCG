/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [17] &= ((-(16954862481516997957 && var_4)));
        var_12 = (((arr_2 [i_0 + 1]) & 1342725261));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            var_13 += 0;
            var_14 = ((var_8 & (min((~1342725261), ((var_4 ? var_2 : var_10))))));
            arr_12 [i_1] [i_2] &= (arr_0 [i_2 + 2] [i_1 - 3]);
        }
        var_15 = (max(var_15, (1342725247 && 968694815)));
    }
    for (int i_3 = 3; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_16 = (max(var_16, ((-(arr_0 [i_3] [i_3])))));
        arr_16 [i_3] = (var_4 ? var_10 : (((arr_2 [i_3 - 3]) ^ var_9)));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_17 = 1;
            var_18 = (min(var_18, (((((((!(arr_17 [i_3]))) || ((!(arr_9 [i_3] [2] [i_3]))))) || (arr_4 [i_3 - 3]))))));

            /* vectorizable */
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_19 = var_9;
                arr_22 [i_3] [i_5] &= (~1);
            }
        }
        for (int i_6 = 4; i_6 < 18;i_6 += 1)
        {
            arr_26 [i_6] [i_6] = var_7;
            var_20 -= ((((!(((0 ? -16 : -1010521400)))))));
            arr_27 [i_3 - 3] [i_6] [i_3] = (((min((arr_6 [i_3 + 1]), (arr_6 [i_3 - 3]))) ? ((10080762856087408270 ? 42148684 : (arr_6 [i_3 - 3]))) : ((var_2 | (arr_6 [i_3 + 1])))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 18;i_8 += 1)
                {
                    {
                        var_21 = (((((arr_32 [i_6]) ? -69 : (arr_18 [i_6 - 4])))) == (var_1 || 4095));
                        var_22 += -var_6;
                        arr_35 [i_3] [i_3] [i_6 + 1] [i_7] [i_6] [14] = 75;
                        var_23 = ((~((max((arr_28 [i_3] [i_7] [i_8]), var_8)))));
                        var_24 = (~(max((((arr_29 [i_3] [i_3] [i_6]) ? var_3 : var_7)), var_6)));
                    }
                }
            }
            var_25 = (max(var_25, ((((((~((((arr_14 [i_3]) > (arr_30 [i_3] [2] [i_3 + 1] [i_3]))))))) ? (min((-25 && var_8), ((var_1 ? var_0 : var_10)))) : ((((!(1 > var_3))))))))));
        }
        var_26 = ((((((arr_19 [i_3 - 1] [i_3 - 1] [i_3 + 1] [6]) ? var_7 : (arr_20 [i_3 - 2] [i_3] [i_3 - 3])))) ? (((arr_29 [1] [i_3] [1]) ? -var_8 : var_9)) : (!24576)));
        var_27 = ((min((arr_19 [14] [14] [14] [11]), (((-(arr_18 [1])))))));
    }
    #pragma endscop
}
