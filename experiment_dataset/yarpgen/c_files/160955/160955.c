/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = min(((var_9 ? -19377 : (1073741823 < 90))), 58685);
    var_18 = var_10;
    var_19 = (var_7 * var_10);

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            arr_15 [i_4] [2] [i_2] [i_1] [i_0] |= arr_10 [i_3] [i_0] [i_0];
                            arr_16 [i_0] = (arr_12 [20] [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 1]);
                            arr_17 [i_0] [i_0] = ((1 ? 7071538352016265419 : -14038));
                            arr_18 [i_2] [i_4] = ((((max(var_9, -3941416659938320827) * (arr_13 [i_0] [i_1] [i_2] [i_3] [i_4])))));
                            arr_19 [i_0] [i_1] [i_2] [8] [8] = (((((~(arr_13 [i_1] [i_1] [i_1] [i_1] [13])))) & 13004657919815119308));
                        }
                    }
                }
            }
            arr_20 [i_0] [i_1] [i_1] = ((((((arr_1 [i_0] [9]) ? (((var_6 || (arr_11 [i_0])))) : (arr_0 [i_0])))) ? -24714 : var_8));
            arr_21 [i_0] [i_1] = (arr_10 [i_0] [1] [4]);
        }
        arr_22 [i_0] = (((((14039 >> (65535 - 65524)))) <= (((arr_1 [i_0] [i_0]) ? (arr_11 [i_0]) : (arr_1 [i_0] [i_0])))));
        arr_23 [9] = ((179 ? 1 : 14032));
        arr_24 [i_0] = var_1;
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        arr_28 [3] = ((((min(((((arr_3 [i_5] [1]) ? -17719 : 39843))), (arr_26 [i_5] [i_5])))) ? -1 : ((((((-9223372036854775807 - 1) ? (arr_5 [3]) : 1726267120))) ? (arr_2 [i_5]) : (arr_3 [i_5] [i_5])))));
        arr_29 [i_5] [i_5] = (((max((arr_5 [i_5]), (arr_5 [i_5]))) ? (~1) : (arr_6 [4] [i_5] [i_5])));
    }
    var_20 &= var_12;
    #pragma endscop
}
