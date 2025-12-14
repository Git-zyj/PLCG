/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((-(!var_5))), var_3));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, 65527));
                    arr_10 [i_0] [i_0] [i_2] = (32767 ? 31744 : 1280332148199739293);
                    arr_11 [i_0] = ((arr_1 [i_0]) || (arr_2 [11]));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    arr_18 [i_0] [3] [i_3] [i_0] = (-17 ? (arr_13 [i_0] [i_4]) : (arr_13 [i_0] [i_4]));
                    var_14 = ((((21 ? (arr_17 [i_0] [i_0] [i_3] [i_4]) : (arr_2 [i_4]))) << ((((65535 >> (50752 - 50751))) - 32760))));
                }
            }
        }
        var_15 = (((arr_5 [i_0] [i_0]) - 5728885980362358977));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 23;i_8 += 1)
                {
                    {
                        var_16 *= (4063232 - 0);
                        var_17 = 5728885980362358996;
                    }
                }
            }
        }
        var_18 = (max(var_18, (((-(min((arr_23 [1] [1]), (arr_23 [1] [i_5]))))))));
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        arr_32 [i_9] = arr_29 [i_9];
        var_19 = (max(var_19, (arr_17 [i_9] [i_9] [i_9] [i_9])));
        arr_33 [i_9] = var_1;
    }
    #pragma endscop
}
