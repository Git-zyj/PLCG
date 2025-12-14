/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_10 = var_9;
            var_11 = 127;
        }
        for (int i_2 = 3; i_2 < 13;i_2 += 1)
        {
            arr_7 [i_0] [i_0] [i_2] = ((var_2 ? (max((arr_2 [i_2 - 1] [i_2 - 3]), (arr_2 [i_2 + 2] [i_2 + 2]))) : (235 + 0)));
            var_12 = (min((arr_1 [i_0]), (((1102921331 * var_2) ? 12288 : (arr_3 [i_0])))));
            var_13 = 134217472;
        }
        arr_8 [i_0] = (max((~4161), (((-124273803 >= ((var_8 ? 4160749852 : 3)))))));
        var_14 = (min(var_14, ((min(-19671, (arr_6 [i_0] [i_0]))))));
    }
    for (int i_3 = 4; i_3 < 21;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 23;i_5 += 1)
            {
                {
                    arr_17 [i_3 - 2] [i_4] [i_5] [i_5] |= ((((((!(arr_15 [i_5 + 1] [i_3 - 1] [i_3] [i_3]))))) ^ ((var_2 / (arr_15 [i_4] [i_3 - 1] [i_3] [i_3])))));
                    var_15 = 0;
                }
            }
        }
        arr_18 [i_3] = -2147483626;
        var_16 = ((+(((-32759 + 2147483647) << (((((arr_10 [i_3 - 1]) + 6515891182979929097)) - 7))))));
        var_17 = (arr_16 [i_3] [i_3]);
        var_18 &= var_4;
    }
    var_19 = (max(var_9, ((var_6 ? 134217472 : ((var_7 ? -1 : var_6))))));
    #pragma endscop
}
