/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = -15751;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_20 = (~((((arr_4 [i_0] [i_1]) || (arr_4 [i_1] [i_0])))));
            var_21 ^= (arr_1 [i_1]);
        }
        var_22 = ((((((((15751 >= (arr_0 [i_0]))))) % (min((arr_1 [i_0]), (arr_1 [i_0]))))) % -1));
        var_23 = (max(var_23, ((((!(arr_1 [i_0])))))));
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_24 = (max(var_24, (arr_5 [i_2 + 1])));
        var_25 = (arr_5 [i_2]);
        var_26 = (max(var_26, ((-(arr_7 [i_2] [i_2 - 1])))));
        var_27 = 5586661298304184232;
    }
    for (int i_3 = 1; i_3 < 19;i_3 += 1) /* same iter space */
    {
        var_28 = (min(var_28, ((max(((max((~var_10), 254))), (arr_7 [i_3 - 1] [i_3 + 1]))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        var_29 = (min((~var_16), (arr_17 [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_6])));
                        var_30 = (((arr_14 [i_6] [i_5] [i_3] [i_3] [i_3]) ? 9178719526109264794 : (((max((arr_14 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1]), (arr_14 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1])))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    arr_22 [i_3 + 1] [i_7] [i_8] [i_8] = (min(((9223372036854775806 ^ (arr_21 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3]))), var_5));
                    var_31 = (max(var_31, var_12));
                }
            }
        }
    }
    var_32 = (max(var_32, -9223372036854775807));
    #pragma endscop
}
