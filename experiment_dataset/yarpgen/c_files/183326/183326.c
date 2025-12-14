/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((1071644672 ? 0 : 0));

                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    var_13 |= 585341102;
                    arr_8 [i_0] [i_1] [i_0] = var_8;
                    arr_9 [i_0] [i_1] [i_0] [i_1] = (((var_0 ? (arr_3 [i_0] [i_1]) : (arr_2 [i_2 + 1] [i_0]))));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    var_14 ^= ((-((0 + (arr_0 [i_3])))));
                    arr_14 [i_0] [i_0] [i_0] [i_0] = (max(var_9, (((((65535 / (arr_2 [i_1] [i_3]))) - 4294967295)))));
                }
            }
        }
    }
    var_15 = (var_2 ? (((max(var_9, var_9)) | (~var_1))) : var_3);
    /* LoopNest 3 */
    for (int i_4 = 4; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    arr_22 [i_5] [i_5] [i_5] = (max((!18014398509477888), (min((arr_20 [i_5 + 1] [i_4 - 4] [i_4 - 1]), (arr_20 [i_5 + 1] [i_4 - 4] [i_4 - 3])))));
                    arr_23 [i_4] [i_4] [i_4] [i_5] = (max(var_3, (!-621305799)));
                }
            }
        }
    }
    #pragma endscop
}
