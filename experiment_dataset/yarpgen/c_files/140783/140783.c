/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (min(108, (~var_6)));
        var_20 -= (max(((((arr_2 [10]) ? 343084060 : (arr_2 [2])))), ((27 ? var_4 : 926052641266405139))));
        var_21 &= ((1 && ((!(arr_0 [14])))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_22 = (max(var_22, (((!((((arr_5 [i_1 - 1] [i_1 - 1] [i_2] [i_3]) >> 1))))))));
                        var_23 = ((~0) ^ var_14);
                    }
                    arr_10 [i_0] [i_1] [i_2 + 2] [i_0] = (~((min((arr_9 [i_0] [i_2 + 1] [i_2 - 2] [i_0]), (arr_9 [i_0] [i_2] [i_2 - 2] [i_0])))));
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_14 [1] [1] = ((var_8 ? (arr_12 [i_4]) : (((-(arr_12 [i_4]))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    arr_20 [i_5] = 1144007917;
                    arr_21 [i_4] [i_5] [i_6] = (((min((arr_16 [i_4]), (arr_12 [i_4]))) >= 25640));
                    var_24 = (max(var_24, (((~((~(arr_18 [i_4] [i_5] [i_5] [i_5]))))))));
                }
            }
        }
    }
    #pragma endscop
}
