/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-((-(102 ^ var_3)))));
    var_18 = ((!((max((~var_13), ((max(var_13, var_6))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 += ((!((max(((var_15 + (arr_0 [i_1] [i_0]))), -var_3)))));
                arr_5 [i_1] = (((((~var_11) ^ -135580394)) > -var_7));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            {
                var_20 = (((~var_16) ^ (arr_9 [i_2] [i_2])));
                var_21 = ((((max((var_8 / 9627), -var_1))) <= (max((var_10 > var_4), 4294967282))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    arr_17 [i_4] [i_4] [8] [8] = (((var_7 <= 9622) <= -18362));
                    arr_18 [i_5] = ((-(max(var_5, (min(18350, (arr_7 [i_4])))))));
                    arr_19 [i_6] = ((-(arr_7 [i_6])));
                }
            }
        }
    }
    #pragma endscop
}
