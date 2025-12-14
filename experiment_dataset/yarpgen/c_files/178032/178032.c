/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, (arr_8 [i_2] [i_1] [i_0 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_1] [i_0] = (arr_5 [i_2]);
                                var_13 = -8273592616540878640;
                                var_14 ^= 1107254453;
                            }
                        }
                    }
                    var_15 = (min((arr_3 [i_0]), 3187712843));
                }
            }
        }
    }
    var_16 = var_0;

    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] [i_5] = 3187712842;
        arr_19 [i_5] [10] = arr_15 [i_5];
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        var_17 ^= 0;
        arr_22 [i_6] [i_6] = 3187712842;
        var_18 += (arr_1 [i_6]);
    }
    #pragma endscop
}
