/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            var_12 |= ((((((((max(var_11, var_4))) > (max(var_10, var_5)))))) != -var_4));
            arr_5 [i_1] = ((((((((var_7 ? var_5 : var_11))) - var_11))) ? ((-3521429865391191602 ? -26950 : -3521429865391191602)) : ((((((-1405266143 ? -26957 : 19))) ? 0 : 1)))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_13 *= (min((~var_9), ((var_11 ? var_3 : ((var_10 ? var_3 : var_5))))));
            arr_9 [i_0] = (((min(3957, 2229342482403557235))) ? var_0 : var_0);
            arr_10 [i_0] [i_2] [i_2] = (((~var_4) ^ ((~(~var_9)))));
            arr_11 [1] [i_2] = ((max((var_4 * var_5), -3971)));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_4 = 3; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_21 [i_3] [i_3] = ((11742912040026449865 ? 3521429865391191601 : 6506288548858494378));
                            arr_22 [i_0] [8] &= var_6;
                            var_14 = var_2;
                            arr_23 [i_3] [i_3] = ((((var_8 ? ((var_8 ? var_8 : var_3)) : var_2)) * var_9));
                        }
                    }
                }
            }
            arr_24 [i_3] [i_3] = ((((((var_1 ? var_6 : var_8)))) ? ((-(var_7 + var_4))) : (~var_10)));
            var_15 += -19;
            var_16 -= (((((-((var_8 ? var_1 : var_5))))) ? ((-(min(var_8, var_4)))) : -3521429865391191601));
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
        {
            arr_27 [i_0] = ((-((max(var_4, var_11)))));

            for (int i_8 = 3; i_8 < 20;i_8 += 1) /* same iter space */
            {
                arr_32 [i_8] [i_7] [i_7] = ((1856727430497024066 ? -15135 : 17391));
                var_17 = (~var_11);
            }
            for (int i_9 = 3; i_9 < 20;i_9 += 1) /* same iter space */
            {
                arr_35 [i_9] [i_7] [i_9] = ((-(min(804333465, 41))));
                arr_36 [i_9] = (((((((var_4 ? var_11 : var_4)) + (((var_6 ? var_5 : var_11)))))) <= (((((var_10 ? var_11 : var_3))) ? (~var_7) : -var_7))));

                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    arr_40 [i_9] = ((-var_10 ? (((~((var_6 ? var_1 : var_5))))) : (max((~3828019217), var_5))));
                    arr_41 [i_9] [i_9] [i_10] = ((-var_3 ? ((max(var_0, var_3))) : ((var_10 ? var_6 : var_4))));
                }
                var_18 = (3521429865391191601 + 1251613444);
            }
        }
        arr_42 [12] [i_0] = (~var_0);
        var_19 += ((~((-var_11 ? -var_10 : 18250201424466489328))));
    }
    for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
    {
        var_20 = (min(var_20, ((min((((max(var_4, var_2)) - var_6)), var_8)))));
        arr_47 [i_11] = ((((max(var_5, var_0))) ? -var_8 : (((var_4 ? var_3 : var_5)))));
    }
    for (int i_12 = 1; i_12 < 1;i_12 += 1)
    {
        arr_50 [i_12] [i_12 - 1] = (~var_10);
        arr_51 [i_12] = (((var_1 ? var_9 : var_6)));
        var_21 = (((var_9 ? var_2 : var_7)));
    }
    var_22 |= ((var_1 ? (var_6 && var_8) : (((!(!var_0))))));
    #pragma endscop
}
