/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1 - 2] [i_2] [i_3] = -150577611;
                        arr_14 [i_0] [i_1] [i_0] [i_3 - 3] |= var_9;
                    }
                }
            }
            var_11 = ((585967353 >> (4926 - 4905)));
        }
        for (int i_4 = 2; i_4 < 21;i_4 += 1) /* same iter space */
        {
            var_12 = ((-1063575962 & ((-(((var_3 >= (arr_3 [i_4 + 2]))))))));

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_20 [15] [i_4] [i_5] = ((-(((150577632 >> 0) ? var_10 : (!var_5)))));
                var_13 += ((max(1219852460, 150577635)) != ((((var_9 < (1 ^ -150577652))))));
                arr_21 [i_0] [i_4] = ((((((arr_18 [9] [i_4 - 1]) && var_0))) > var_7));
            }
        }
        for (int i_6 = 2; i_6 < 21;i_6 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                var_14 = (min(var_14, -512451725));
                arr_27 [i_0] = (1981780454 / 1);
                var_15 = (((arr_2 [3]) || ((!(arr_8 [i_0])))));
            }
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                var_16 = var_10;
                var_17 = var_8;
            }
            for (int i_9 = 3; i_9 < 22;i_9 += 1)
            {
                var_18 = (max(var_18, -512451712));
                arr_35 [i_0] [i_0] [i_9 - 3] [i_9] = 150577635;
                arr_36 [i_9 + 1] [i_0] [i_0] = 18446744073709551615;
                var_19 = -8057115668484408377;
                var_20 = ((~(((((arr_4 [i_0] [i_0] [1]) * 17890094881437930137)) + var_10))));
            }
            arr_37 [i_0] = ((((0 ^ (arr_34 [i_6 + 2] [i_6 - 1] [i_6 + 1] [i_6 - 1]))) & 0));
        }
        arr_38 [i_0] = (+((+((((arr_18 [i_0] [i_0]) == 150577635))))));
        var_21 *= 0;
    }
    var_22 = (((max(0, var_1))) && (28 % var_7));
    var_23 = var_6;
    var_24 = 1;
    var_25 ^= (min(19960, ((-(((-2147483647 - 1) ? var_1 : var_2))))));
    #pragma endscop
}
