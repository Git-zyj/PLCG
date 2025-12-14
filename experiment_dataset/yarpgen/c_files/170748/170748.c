/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((0 != (min(4294967280, 59607))));
        arr_4 [i_0] = ((((((arr_1 [i_0] [i_0]) % (arr_1 [i_0] [i_0])))) ? (((((19 >> (var_4 - 8236521112843001191)))) - (var_8 % var_0))) : 2729115801));
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        arr_8 [i_1] = (((((var_4 ? var_0 : 5926))) ? 4294967282 : (((var_5 << (var_4 - 8236521112843001196))))));
        arr_9 [i_1] = -13;
    }
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        arr_13 [i_2] [i_2] = ((((min(5929, var_1))) ? ((var_9 ? (max(1, 6214089311007801461)) : ((max(4000900475, 65091))))) : (((~(((-2147483647 - 1) ? 36393 : 4294967282)))))));
        arr_14 [i_2] = ((((var_2 ? 19 : ((var_6 ? -2147483645 : (arr_12 [i_2 - 3]))))) ^ (((((var_9 ? var_0 : var_2)))))));
        arr_15 [i_2] [i_2] = var_2;
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 7;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 7;i_5 += 1)
            {
                {
                    arr_24 [i_3] [i_4] [i_3] [i_4] = (min(var_5, (arr_1 [i_3] [i_3])));
                    arr_25 [i_4] [i_4] [i_3] [i_4] = (min(8881609641435784074, (~var_4)));
                    arr_26 [i_3] [i_5] [i_5] [i_5] &= ((var_1 * ((((var_2 ? -18195 : var_3)) + -22))));
                    arr_27 [i_3] [i_3] [i_3] [i_3] = (min(-3161916162533580482, var_0));
                }
            }
        }
    }
    #pragma endscop
}
