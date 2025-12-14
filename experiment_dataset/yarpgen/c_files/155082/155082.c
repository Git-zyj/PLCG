/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [1] [i_0] [i_1] = (((arr_2 [i_2 - 1]) >= (max(7470680437574495246, (arr_2 [i_2 - 1])))));
                        var_14 = -92;
                        arr_12 [5] [i_1] [i_3] [i_3] = 1099547444;

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_15 *= (((((arr_5 [i_4] [2] [i_2 + 1]) ? 2165119577882343530 : var_9))));
                            arr_17 [i_4] [i_4] [i_4] [i_1] [i_4] [i_4] = -var_11;
                            var_16 ^= (max((((var_9 > (((-92 + (arr_10 [i_0] [i_2] [i_3] [i_0]))))))), ((-16 ? 1 : 5669323728746014784))));
                            var_17 = (((max((arr_14 [8] [i_2 - 1] [i_1 - 1]), (arr_8 [i_1] [i_1])))) << (((((-(arr_16 [i_1] [i_1] [i_1] [i_4])))) - 2755865425)));
                            var_18 = (!var_7);
                        }
                    }
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        var_19 = (min(var_19, (((!((max(var_11, var_8))))))));
                        arr_20 [i_0] |= (((var_12 % var_7) ? 4233058318 : (((arr_16 [i_5 + 1] [i_2 - 1] [i_1] [i_1 + 1]) ? 2165119577882343530 : (arr_16 [i_5 + 1] [i_2 + 1] [i_2] [i_1 - 1])))));
                    }
                    arr_21 [i_1] [i_1] [i_2 - 1] [i_1] = (max(2165119577882343530, var_0));
                }
            }
        }
    }
    var_20 = ((~(~18446744073709551603)));
    var_21 = ((~(((var_5 <= (!var_6))))));
    #pragma endscop
}
