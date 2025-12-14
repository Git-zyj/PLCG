/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (32766 + 53);
    var_16 = (var_9 + var_1);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [8] [i_0] [i_2] = (((var_1 + 2147483647) << ((((((+(((arr_2 [i_0] [i_1] [i_2]) ? (arr_0 [i_0]) : -54)))) + 122)) - 25))));
                    var_17 = -6831374871810982754;
                    var_18 = (-79 != var_5);
                    var_19 += ((var_5 ? ((((arr_8 [i_1] [i_0 + 2] [i_0 + 1]) <= 1))) : (~-30)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                var_20 = ((var_4 ? (arr_11 [i_3] [i_3]) : (var_10 * var_1)));
                var_21 = ((arr_12 [i_4] [0] [0]) - var_12);
                arr_14 [i_3] = 53;
            }
        }
    }
    var_22 = var_10;
    #pragma endscop
}
