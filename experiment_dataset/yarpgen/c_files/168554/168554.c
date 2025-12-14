/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = (-32341 <= 7440);
                var_21 = (min(var_21, (((~(arr_1 [1]))))));
                var_22 = (-32341 + 0);
                arr_6 [i_0] [i_1] = ((-(arr_5 [i_1])));

                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    var_23 = (arr_4 [i_2]);
                    var_24 = (arr_0 [i_1]);
                    var_25 = 0;
                    arr_10 [i_0] [i_0] = (arr_9 [i_1]);
                }
            }
        }
    }
    var_26 = (max(var_26, 0));
    var_27 = var_11;
    var_28 = (max(var_28, var_6));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    arr_19 [i_4] [i_3] [1] [i_5] = 18446744073709551615;
                    var_29 = (max(var_29, (((((-(arr_8 [i_5] [i_5] [i_5] [i_5]))))))));
                    arr_20 [i_3] [i_4] [i_5] = 0;
                    var_30 += -32341;
                }
            }
        }
    }
    #pragma endscop
}
