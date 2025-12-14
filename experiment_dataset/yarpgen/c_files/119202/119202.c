/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    arr_6 [i_0] [i_1] [i_2] = 4294967279;
                    var_11 = (min(var_11, 17));
                }
                var_12 = 1353279050;
                var_13 = 1;
            }
        }
    }

    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = 0;
        var_14 *= 1;
        arr_12 [i_3] [i_3] = 288230376151711743;
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_15 = 1;

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_16 = -5399078193114218187;
                            var_17 = (max(var_17, 4294967279));
                            arr_25 [i_4] [i_5] [i_4] = 1;
                        }
                    }
                }
            }
            arr_26 [i_4] [i_5] [1] = 4294967266;
            arr_27 [i_4] [i_5] [i_4] = 7;
            var_18 = -1353279050;
        }
        arr_28 [i_4] = -288230376151711774;
    }
    #pragma endscop
}
