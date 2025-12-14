/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_0] = (!(arr_0 [i_0] [i_1]));
            arr_7 [i_0] = var_2;
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_15 = 995127025;
                            var_16 = ((((((arr_5 [i_2 + 1] [i_0 - 1]) ? (arr_5 [i_2 - 1] [i_0 + 1]) : (arr_5 [i_2 - 1] [i_0 + 1])))) ? (((var_0 != (arr_5 [i_2 - 1] [i_0 - 1])))) : 9159));
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0] [i_2 - 1] = ((max((arr_5 [i_0 - 1] [i_0 + 1]), (((!(arr_3 [i_3] [i_0] [i_3])))))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_17 = (min(((((((var_2 ? var_10 : (arr_2 [i_5 - 1]))) + 2147483647)) << (((((~var_4) + 11)) - 9)))), (arr_4 [i_5 - 1] [i_5])));
            arr_21 [i_0 - 1] [i_0] = ((((arr_20 [i_0 + 1] [i_0 - 1] [i_5 - 1]) <= (arr_20 [i_0 + 1] [i_0 - 1] [i_5 - 1]))));
        }
        for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
        {
            var_18 = ((-((-(arr_0 [i_0 + 1] [i_6 - 1])))));
            arr_24 [i_0] [i_6] = (((((((arr_11 [i_0 - 1] [i_0 + 1] [5]) ^ (arr_9 [i_0] [16] [i_0] [i_0])))) ? ((min(var_2, var_3))) : ((0 ? 9148 : -4373202033081936835)))));
        }
        arr_25 [i_0] = 2852517049333149759;
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        arr_28 [i_7] = ((+(max((4294967271 - 1), (((var_8 > (arr_14 [i_7] [i_7] [i_7] [i_7]))))))));
        arr_29 [i_7] = (((-(arr_14 [i_7] [i_7] [i_7] [i_7]))));
    }
    var_19 = var_14;
    #pragma endscop
}
