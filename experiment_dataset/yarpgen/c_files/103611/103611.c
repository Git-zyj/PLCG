/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~(~var_1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] = ((~(arr_0 [i_0])));

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        arr_12 [i_0] [i_3] [i_2] [i_3] = ((~((-(arr_7 [i_2] [i_1] [i_2] [i_3])))));

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            arr_17 [i_3] [i_3 - 1] [i_4] = ((~(~var_1)));
                            var_13 = (max(var_13, (((~(+-30422))))));
                            arr_18 [i_0] [i_3] = (~var_3);
                            var_14 = ((~((~((~(arr_8 [i_4 - 1] [i_2])))))));
                        }
                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            var_15 = (min(var_15, (+-1204306349)));
                            var_16 = (~(~var_11));
                            var_17 = (max(var_17, (((~(arr_2 [i_2]))))));
                            arr_21 [i_3] = (((~(((!(arr_16 [i_0] [i_1] [i_2] [i_3] [i_5])))))));
                        }
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            arr_24 [i_0] [i_1] [10] [i_0] [i_3] [i_3] = (~var_5);
                            var_18 = (~var_9);
                            arr_25 [i_0] [1] [i_0] [i_3] [i_0] = ((~((~((~(arr_20 [i_6] [i_3 + 1] [i_2] [i_0])))))));
                        }
                        arr_26 [i_0] [i_1] [i_3] [i_3] = ((~((~(~var_1)))));
                    }
                    var_19 = (~var_3);
                }
                var_20 = (min(var_20, ((-(((-(arr_13 [i_0]))))))));
            }
        }
    }
    var_21 = (min(var_21, (((~((~(~var_0))))))));

    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        arr_29 [i_7] = (~((~((~(arr_28 [i_7] [5]))))));
        arr_30 [i_7] = (((~(~0))));
    }
    #pragma endscop
}
