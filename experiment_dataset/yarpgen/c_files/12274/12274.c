/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((~(arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = ((((!(-505060817637703832 - 15))) ? (((~2147483639) ? (((((arr_7 [i_0] [i_0] [i_0]) <= -505060817637703832)))) : ((3107305204449811224 ? (arr_1 [i_0]) : var_0)))) : (!var_6)));
                    arr_10 [i_0] [14] [i_1] = (~var_1);

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_16 = 25661;
                        var_17 = (max(var_17, (((((!3107305204449811224) ^ 1510791621)) ^ (((((arr_7 [7] [7] [i_2 - 1]) ? (arr_12 [i_3] [10] [i_2] [i_1] [i_0]) : (arr_12 [i_0] [i_1] [i_2 - 1] [5] [i_3])))))))));
                        arr_13 [i_1] [i_1] = ((32744 < ((max(var_14, 7339935608882011819)))));
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        var_18 = (max((~-917297208), (-2147483647 - 1)));
        arr_17 [10] [i_4] = (((~142) != 65));
        arr_18 [0] [0] = 45;
        var_19 = (max(var_19, ((((((~(arr_6 [18] [18])))) ? (((arr_6 [16] [16]) ? -947558846 : (arr_6 [4] [4]))) : (arr_6 [6] [6]))))));
    }
    var_20 = ((((((var_3 ? var_12 : 253)))) ? (((!1787275004) | 3107305204449811206)) : var_3));
    var_21 = var_14;
    #pragma endscop
}
