/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_10 = (min(var_10, (((((min(var_3, var_2)) < -32750)) ? 32750 : ((((min((arr_0 [i_0] [i_1]), var_8))) ? (arr_1 [i_0] [i_0]) : (~var_0)))))));
                    var_11 &= ((255 ? (!112) : (arr_6 [i_0] [i_1] [i_1])));
                    arr_7 [i_0] [i_0 - 3] [i_1] [i_2] = (((((arr_6 [19] [i_1] [i_0 - 3]) || ((min(0, var_1))))) ? (min(var_9, ((112 ? (arr_4 [17]) : var_2)))) : (arr_0 [i_0] [i_0 - 2])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                var_12 = var_7;
                var_13 = (min(var_13, (arr_2 [i_3] [i_4] [i_4])));
                arr_12 [i_3] [i_3] [i_3] = (((((1 ? 210 : 112))) ? ((min((arr_6 [i_3] [i_3] [i_3]), (arr_1 [i_3] [i_4])))) : (((((-(arr_3 [i_3] [i_4] [i_4]))) < (arr_2 [i_3] [i_3] [i_4]))))));
                arr_13 [i_3] [i_3] = ((~(((arr_10 [i_3] [i_3] [i_4]) ? var_1 : -255))));
                var_14 += (-117 + -261);
            }
        }
    }
    var_15 = (min(var_3, (!var_0)));
    #pragma endscop
}
