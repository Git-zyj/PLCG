/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_11 [9] [i_1] [i_1] [i_1] = 2922232489;
                    arr_12 [i_0 - 1] [9] [i_0 - 1] = var_0;
                }
            }
        }
        arr_13 [i_0 + 2] = ((-(((arr_10 [16] [16]) + (arr_3 [i_0])))));
    }
    for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
    {
        arr_18 [i_3] [i_3 + 1] = 2922232489;
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        var_13 = ((-(((!(var_7 / 1372734807))))));
                        arr_27 [i_6] [16] [i_4] [i_3] = ((9544718200941793546 ? ((min(0, 1))) : (((8303 < ((min(var_1, (arr_20 [i_6])))))))));
                        var_14 = -7900838000706249;
                        arr_28 [i_3] [i_3] [i_3] [i_3] [i_3] = (((((~0) + 1))) / (min((arr_9 [i_3] [i_3] [18] [i_3]), (41125 < var_1))));
                        var_15 = (!-2);
                    }
                }
            }
        }
        var_16 = 2922232514;
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    var_17 = 1;
                    var_18 = max((((1 || -2792671719995122026) % var_5)), 2147483639);
                }
            }
        }
    }
    #pragma endscop
}
