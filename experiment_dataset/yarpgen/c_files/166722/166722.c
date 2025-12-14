/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (4026531840 * var_1);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 -= (((max(var_4, (min(31456, 40))))) % 1425393058);
                    var_21 &= (min((max((~var_10), (arr_2 [i_2]))), ((((arr_2 [i_0 + 2]) || (arr_2 [i_2 - 2]))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0 - 1] [i_1] [i_2] = (((~1314250736) / (arr_5 [i_0] [i_0 + 3] [i_0])));
                        arr_11 [i_1 + 1] [i_2 - 1] [i_1 + 1] = ((~(arr_6 [i_1 - 1] [i_1 - 1] [i_3])));
                        var_22 = (arr_9 [i_0] [i_0 + 1] [i_0 + 3] [i_1] [i_2 + 2] [i_2 - 2]);
                        var_23 = (arr_0 [i_0]);
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        var_24 += (((min((arr_2 [i_2 + 1]), (27 % 1687737639818581583))) % var_0));
                        var_25 &= ((arr_0 [i_2]) % (((min((arr_5 [i_0] [i_2 + 1] [i_0]), 1687737639818581590)) % ((((arr_2 [i_4]) * (arr_0 [i_0 + 1])))))));
                        arr_14 [i_0] [i_1] [i_1] [i_4] = 7274893602285445254;
                    }
                    var_26 = 14358379115592423017;
                }
            }
        }
    }
    var_27 = ((((-(!-1687737639818581587))) % 1807));
    var_28 = ((~(((!var_6) ? var_6 : (min(206, -8630336999544315974))))));
    #pragma endscop
}
