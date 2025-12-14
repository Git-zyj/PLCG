/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 65521;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (~65535);

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [8] [1] = (((7 < (arr_5 [i_0] [i_2] [i_3]))));
                        arr_13 [5] [5] [i_2] [5] = (((27021597764222976 << 7) ? 1 : (arr_5 [15] [i_1] [i_3])));
                    }
                    var_18 = ((var_0 == (((arr_3 [i_0] [i_1] [i_2]) ? var_9 : 65535))));
                    var_19 = ((65531 ? 49 : -25));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        {

                            for (int i_8 = 0; i_8 < 23;i_8 += 1)
                            {
                                var_20 = (min(((((arr_25 [i_7]) ? 3573958434672734458 : var_13))), ((-32758 ? 1 : 0))));
                                var_21 = max(((-(arr_26 [i_7] [i_8]))), (((!(((1373209758 ? var_1 : (arr_28 [i_4] [i_4] [i_4] [i_4] [i_4]))))))));
                                var_22 -= 7;
                            }
                            var_23 |= var_9;
                        }
                    }
                }
                var_24 = 32767;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            arr_39 [i_4] [6] [i_9] = ((var_5 == (min((arr_22 [i_10] [i_5 + 1] [i_4]), (arr_27 [i_4] [i_4] [i_4])))));
                            var_25 |= ((~(-20 != var_10)));
                            var_26 = (((((arr_31 [2] [i_5 + 1] [i_5 - 1] [i_5] [i_4] [i_4] [2]) ? (arr_24 [3] [i_5] [21]) : (arr_24 [i_5] [i_5] [i_4]))) >> (((arr_31 [20] [i_5 + 1] [i_5] [4] [i_5 - 1] [i_5] [20]) - 103))));
                        }
                    }
                }
                arr_40 [i_4] = ((((0 ? 54956 : (max(27021597764222976, 1)))) <= ((0 ? var_14 : 9465))));
            }
        }
    }
    #pragma endscop
}
