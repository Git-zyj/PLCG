/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = -64;
                var_13 = (min(var_13, ((((((~(arr_5 [8] [8] [8]))) * (!4027379110)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_14 = (max(var_14, (((!((((28960 & 2147467264) / ((((8078090 != (arr_2 [i_0] [i_1])))))))))))));
                            arr_12 [i_0] [i_2] [i_2] [i_0] = ((!((((((arr_8 [i_2]) >> (((arr_6 [i_0]) - 3636088319)))) & (max((arr_11 [i_2] [8]), 18446744073709551615)))))));
                        }
                    }
                }
                arr_13 [i_0] [i_1] [i_0] |= ((((((min(var_7, (arr_7 [i_0] [i_1])))) ? ((-4540515613276640266 ? var_8 : 4290772992)) : 1738976727))) ? (((arr_10 [15] [i_0] [15]) ? (((((arr_5 [17] [i_1] [14]) && (arr_0 [i_0] [i_1]))))) : (1544615787 + 401355488))) : (arr_10 [i_1 - 1] [i_1] [i_1]));
            }
        }
    }
    var_15 = (min(-4827814910774161222, var_6));
    #pragma endscop
}
