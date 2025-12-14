/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((10204207926878930890 ? var_10 : ((var_1 ? 8242536146830620725 : -1)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = ((~((-8626820301088064660 ? 10204207926878930888 : var_10))));
        var_16 ^= (((arr_2 [i_0]) ? (1 - var_9) : var_12));
        arr_3 [i_0] [i_0] = ((-var_6 * ((6980140060702661595 ? 8242536146830620726 : 77))));
        var_17 = (arr_1 [i_0]);
        var_18 = ((((-(arr_0 [i_0]))) / (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = (((((~4095) == var_2)) ? (7 >= -19048) : 8242536146830620726));
        arr_7 [i_1] = ((-6980140060702661596 ? (min((arr_0 [i_1]), 674720261)) : (arr_0 [i_1])));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_19 = (((arr_1 [i_2]) ? ((65535 ? -1 : (((3261807553551936793 ? 4294967295 : (arr_2 [i_2])))))) : (0 <= 8242536146830620735)));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_20 = (max(var_20, (arr_16 [i_4 + 1] [i_4 - 2] [i_4 + 1] [i_4 + 1])));
                        var_21 = ((-3 ? 255 : 15));
                    }
                    var_22 = ((var_3 ^ ((-((var_5 % (arr_9 [i_2])))))));
                    var_23 = (arr_2 [i_4]);
                }
            }
        }
    }
    #pragma endscop
}
