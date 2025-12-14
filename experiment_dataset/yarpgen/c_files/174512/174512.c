/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_16 = (arr_0 [i_0 + 2]);
        arr_2 [i_0] = (+-49);
        var_17 = (arr_0 [i_0]);
        var_18 = (103 + var_9);
        var_19 = var_12;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] = ((var_5 >> ((((-(arr_4 [i_1] [i_1]))) + 137502815))));
        var_20 = (min(var_20, (((65535 ? 36058 : 1)))));
    }
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    var_21 = (min(var_3, 340214927));
                    var_22 += (((((min(88, (arr_7 [i_3]))) ? 2 : (((!(arr_12 [i_4]))))))));
                    arr_14 [i_2] [i_3] [i_2] = max(-5065204713512366665, 0);
                }
            }
        }
        var_23 = ((((((-(arr_10 [i_2] [i_2] [i_2])) != (arr_9 [i_2]))))));
    }
    var_24 -= var_10;
    var_25 = var_6;
    var_26 |= ((-var_8 % ((-(max(1, var_3))))));
    var_27 = (0 + var_4);
    #pragma endscop
}
