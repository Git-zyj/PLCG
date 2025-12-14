/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(1757837720, 7579477485621226210));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = (min(var_9, (~var_10)));
        var_13 = (44 * -243);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    var_14 = (min(-var_9, 887266984));
                    arr_10 [i_3] [i_2] [i_3] = (((((-(min(11, (arr_4 [i_1])))))) ? (((var_1 ? 211 : (!var_7)))) : (arr_1 [i_1])));
                    var_15 = min(15, var_1);
                }
            }
        }
        arr_11 [i_1] = var_8;

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_16 = (arr_4 [4]);
            var_17 = -6413415586794622948;
        }
        var_18 ^= ((-(min((arr_7 [i_1] [i_1] [i_1] [i_1]), 4294967295))));
        var_19 ^= (((!((min(var_3, (arr_7 [i_1] [5] [i_1] [i_1])))))));
    }
    for (int i_5 = 3; i_5 < 22;i_5 += 1)
    {
        var_20 = var_3;
        var_21 ^= ((-((-((min(207, var_8)))))));
        arr_17 [i_5 + 1] [i_5] = -6413415586794622948;
        var_22 = ((~(min((!32764), ((-(arr_16 [i_5] [7])))))));

        for (int i_6 = 2; i_6 < 23;i_6 += 1)
        {
            var_23 = (arr_15 [i_5]);
            arr_21 [i_5 + 1] [9] [i_5] = (((~-var_8) <= (min(((-(arr_19 [i_5] [8] [i_5]))), var_4))));
        }
        for (int i_7 = 3; i_7 < 21;i_7 += 1)
        {
            var_24 += ((-(arr_22 [12])));
            var_25 = (max(var_25, ((min((min(var_8, (((arr_22 [4]) ? var_10 : 3719769356)))), -42415)))));
            var_26 = (min(var_3, ((((arr_23 [i_5]) ? var_9 : 8476925919392958093)))));
            arr_24 [i_5] = 0;
            var_27 = (min(var_27, (!var_4)));
        }
        for (int i_8 = 2; i_8 < 23;i_8 += 1) /* same iter space */
        {
            var_28 = (min(var_28, ((min(var_3, (((!(((-1 - (arr_15 [10]))))))))))));
            var_29 = ((-(min(var_1, (!var_5)))));
            arr_27 [i_5] [i_5] [i_5] = 32764;
        }
        /* vectorizable */
        for (int i_9 = 2; i_9 < 23;i_9 += 1) /* same iter space */
        {
            arr_30 [i_5] [i_9] [i_9 - 1] = ((!(!16)));
            var_30 = var_9;
            var_31 = (arr_16 [i_5] [i_9 + 1]);
            var_32 = (((~3745780244) - (((~(arr_26 [i_5] [i_5]))))));
        }
    }
    #pragma endscop
}
