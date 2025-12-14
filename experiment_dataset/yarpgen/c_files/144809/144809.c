/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((var_6 % (min(((((-682246100 + 2147483647) >> (var_8 - 33)))), ((var_13 ? var_5 : 4294967285))))));
    var_21 = (max(var_21, (0 || var_5)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_22 -= (min(1597561331, (!51)));
                var_23 = (max(var_23, 1597561331));
                var_24 = (((max(18446744073709551604, (arr_4 [i_0] [9])))));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] [10] = (arr_3 [i_4 + 3]);
                            arr_14 [0] [i_3] [i_2] [i_1] [i_0] = ((max((arr_12 [i_1] [i_4] [i_4 + 1] [i_4 + 2] [11]), (arr_12 [i_0] [i_0] [i_4 - 2] [i_4 - 1] [i_4]))));
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_25 = 2;
                            var_26 = (max(((min(165, ((((arr_4 [i_0] [i_1]) && -124)))))), ((((min(2347806776, -50))) ? (min((arr_9 [i_3] [i_3] [i_2] [i_3]), 7025263047050558909)) : ((((arr_6 [i_3] [i_2] [i_1] [i_0]) ? 0 : 0)))))));
                            var_27 = (max(((545294487 | (!-1))), (((((arr_5 [i_5] [i_3] [i_1]) + 2147483647)) << (((((arr_5 [i_0] [i_1] [i_2]) + 1488240558)) - 12))))));
                        }
                        arr_18 [i_3] [13] [i_0] = 9223372036850581504;
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        var_28 = ((((9188813556330421106 / (arr_1 [i_0] [1]))) / (4788 >> 9)));
                        arr_22 [i_1] [i_6] = (((arr_3 [i_6 + 1]) < (arr_3 [i_6 + 1])));
                    }
                    arr_23 [i_2] [i_1] [i_0] = (max((max(7025263047050558909, ((((arr_16 [i_0] [2] [i_1] [i_2] [i_2]) <= 104))))), ((((((11030483980951087785 < (arr_0 [i_2])))) >> (((((arr_17 [i_1] [i_1] [10] [i_0] [i_0] [i_0]) + 148)) - 137)))))));
                }
            }
        }
    }
    #pragma endscop
}
