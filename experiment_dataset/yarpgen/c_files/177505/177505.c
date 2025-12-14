/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = ((~((((!(arr_2 [i_0])))))));

                    for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
                    {
                        var_20 = (arr_4 [i_3]);
                        var_21 = (max(var_21, ((((-(arr_1 [i_0 + 3] [i_0 - 1])))))));
                    }
                    for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        var_22 = (min(((~(max(6121644135902529498, -6121644135902529498)))), (arr_8 [i_1] [i_1])));
                        var_23 *= min((max(-6121644135902529498, -1)), ((((arr_5 [i_4 - 1] [1] [1]) ? ((max(64557, var_3))) : (arr_6 [i_4 + 3])))));
                        var_24 = var_11;
                    }
                    for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_25 *= (((~(arr_13 [i_5] [i_1 + 2] [i_5] [i_1 + 2] [i_0]))));

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_26 = min(249, (arr_1 [i_0] [10]));
                            var_27 = (!1);
                            var_28 = (((!(arr_1 [i_0] [i_1 + 2]))) ? 567453553048682496 : (((942180879 << (35672 - 35661)))));
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_29 = (!(arr_13 [i_7] [i_5 + 3] [i_1 + 1] [i_0 + 2] [i_0 + 2]));
                            var_30 = (min(var_30, (min((max(((min(var_3, (arr_7 [i_0] [i_0] [5] [i_0])))), (arr_18 [i_0 - 3] [0]))), 1))));
                        }
                    }
                    var_31 |= (min(1, -1));
                }
            }
        }
    }
    var_32 = ((~(((((max(var_1, var_10))) && var_14)))));
    var_33 = ((((var_0 ? var_2 : (~-1795953331))) + (!var_2)));
    #pragma endscop
}
