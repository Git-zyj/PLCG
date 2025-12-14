/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = (arr_3 [i_1]);

                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_1] [i_0] = 9223372036854775800;
                        var_18 = -1108286880269250914;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_2] [i_1] [i_1] [i_0] = (min((((arr_2 [i_0] [i_0]) ? ((~(arr_14 [i_0] [i_0] [9] [i_4]))) : (max(8578665580478057579, (arr_2 [i_0] [i_1]))))), (((min(8578665580478057579, -8578665580478057568))))));
                        arr_16 [i_0] [i_1] [i_2] [i_4] [i_1] [i_4] = (arr_7 [i_0] [i_0] [i_0]);
                        var_19 = (arr_10 [i_4] [i_4] [i_0] [i_4] [i_0] [i_4]);
                    }
                    arr_17 [i_0] = ((max(((-(arr_5 [3] [i_0] [i_1] [i_1]))), (((~(-127 - 1)))))));
                    arr_18 [i_0] [i_0] [i_2] = ((((127 ? 255 : 26337)) % 228));
                }
            }
        }
    }
    var_20 = (~var_0);
    var_21 = ((min(var_5, var_11)));
    var_22 = var_3;
    var_23 = ((-(min((var_6 % var_4), -var_0))));
    #pragma endscop
}
