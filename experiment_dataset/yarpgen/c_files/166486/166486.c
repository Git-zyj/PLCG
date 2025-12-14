/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    var_19 += var_7;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 63009;
        var_20 = var_10;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_8 [i_1] = var_16;
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_21 += var_0;
                                arr_20 [i_2] [i_2 + 1] [i_2] [i_4] [i_5] = 1041;
                                arr_21 [i_1] [i_2] [i_3] [i_4] [i_1] = (((((!var_1) == (arr_4 [i_1]))) || -1086977684));
                            }
                        }
                    }
                    var_22 = (max(var_5, (((-((min(-13, (arr_18 [i_1] [i_2] [i_2 - 3] [i_2 - 3] [i_3])))))))));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_23 = ((((var_8 % (arr_23 [i_6] [i_6]))) != ((var_1 >> (var_3 + 1107033081)))));
        var_24 = arr_22 [i_6];
        var_25 = (arr_22 [i_6]);
        arr_24 [i_6] [i_6] = (((-5065 + var_9) + var_13));
    }
    #pragma endscop
}
