/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~var_10) ? ((((var_2 ? 1045373784925571705 : var_14)) | -var_9)) : ((var_2 ? (max(4227932845, 12358012108616589775)) : var_1)));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, var_12));
                    var_21 = (arr_4 [i_0 + 2] [i_0 + 2]);
                    var_22 ^= (((((var_3 ? (17401370288783979910 >= 0) : 3137483162241606953))) ? var_7 : ((-23103 ? 3137483162241606938 : 67034450))));
                }
            }
        }
        arr_10 [i_0] [i_0] = (min(((((((arr_2 [i_0] [i_0] [i_0 + 2]) ? (arr_4 [i_0 + 1] [i_0]) : 23127))) ? (arr_2 [i_0] [i_0] [i_0]) : (((arr_6 [i_0] [i_0] [i_0]) ? 1 : var_13)))), (arr_6 [i_0] [i_0] [i_0 + 1])));
    }
    #pragma endscop
}
