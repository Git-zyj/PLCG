/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((58651 + (((var_7 - 25295) ? (min(var_1, var_10)) : 40241))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_1] = (((40241 - -25295) - (arr_1 [9])));
                arr_5 [i_1] = ((arr_3 [i_0] [i_0] [9]) ? (25269 < 40245) : ((var_9 ? (arr_2 [i_0 + 2] [i_0 + 4] [i_1]) : (arr_3 [i_0 + 2] [i_0 + 4] [i_0 + 4]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_12 [i_2] [i_1] [i_1] = ((-(min(var_5, (arr_8 [i_0 - 1] [i_3] [i_3])))));
                            arr_13 [3] [i_2] [i_1] [i_2] [i_2] = ((874273264 & ((104 ^ ((~(arr_6 [i_1] [i_1] [i_1] [i_3])))))));
                            arr_14 [i_0] [i_1] [i_2] [i_1] [i_2] [i_0] = ((~var_10) && ((((8644558481795450791 * 874273272) * (arr_2 [i_1] [i_1] [i_1])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
