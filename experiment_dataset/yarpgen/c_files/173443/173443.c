/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((var_6 ? (!3502742010) : (((!(min(1, var_8))))))))));
    var_17 &= var_10;
    var_18 = (max(var_18, (var_7 & var_8)));
    var_19 = ((-var_11 << (((((((1 ? var_14 : var_1)) < (((1 ? var_3 : 10812925)))))) - 1))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((-(((!(0 % var_0))))));
        arr_4 [1] |= (((~(arr_2 [i_0] [6]))));
        var_20 = (max((((arr_0 [i_0]) ? var_10 : (arr_0 [i_0]))), (((arr_2 [i_0] [i_0]) ? (arr_0 [i_0]) : (~var_0)))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_18 [i_4] [i_0] [i_2] [i_0] [i_1] [16] [20] = ((~((~(~9726)))));
                            arr_19 [i_0] [i_0] [i_2] [i_3] [i_0] = ((-(((!(~9726))))));
                            arr_20 [i_0] = ((-1228597767 < (((!((!(arr_1 [i_0]))))))));
                        }
                    }
                }
            }
            arr_21 [i_0] = (max((arr_13 [i_0] [i_1] [i_1] [i_0] [4]), -9));
            var_21 = (arr_11 [18] [i_1] [6]);
        }
    }
    #pragma endscop
}
