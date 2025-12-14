/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1 - 1] [i_1] = (((((((~(arr_3 [i_1] [i_0] [i_0]))) & (((~(arr_2 [i_0]))))))) & (max((~-794026054), 5276281509391771036))));
                arr_5 [i_0] [i_1] = (((~(arr_3 [i_0 - 4] [i_0 - 4] [i_1 - 3]))));

                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    var_19 += (((((min((arr_2 [i_1 + 1]), -3992)) & (((~(arr_1 [1])))))) ^ ((((!(arr_3 [i_2] [i_1] [i_2 + 2])))))));
                    var_20 = ((~((~(arr_2 [i_2 - 3])))));
                    arr_8 [i_0 - 1] [i_1 - 2] [i_1] [i_0 - 1] = -2049842961;
                    arr_9 [i_0] [i_1] [i_0] [i_2 + 1] = 0;
                    arr_10 [i_0] [i_1 - 2] [i_1] |= (arr_3 [9] [i_1 - 2] [i_2 + 3]);
                }
                var_21 -= (arr_0 [i_1 - 2] [4]);
            }
        }
    }
    var_22 = (min(var_22, (((!(!var_12))))));

    /* vectorizable */
    for (int i_3 = 3; i_3 < 7;i_3 += 1) /* same iter space */
    {
        var_23 = (arr_6 [i_3 - 3]);
        var_24 = ((-(((arr_1 [i_3 + 2]) ? (arr_12 [i_3]) : -32756))));
        var_25 = ((~(arr_2 [i_3])));
        arr_13 [i_3 - 3] = (((-(arr_12 [i_3]))));
    }
    for (int i_4 = 3; i_4 < 7;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] = ((!(!62748)));
        arr_18 [i_4] = (4131070974 > (min(4131070994, (arr_6 [i_4 + 3]))));
    }
    var_26 ^= (~var_16);
    var_27 = (min(var_7, var_11));
    #pragma endscop
}
