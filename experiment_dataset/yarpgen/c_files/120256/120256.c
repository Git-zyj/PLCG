/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = (((arr_4 [5] [1] [i_2 - 1] [i_2 + 3]) >= (min((((~(arr_5 [i_2] [9] [i_1] [i_0])))), (((arr_3 [10] [i_2 - 2]) ? (arr_4 [i_0] [i_1] [i_2 - 1] [11]) : 2147483637))))));
                    var_17 = (max(var_17, ((((((-(~18446744073709551615)))) ? (arr_2 [i_0] [5]) : (((arr_0 [11] [i_1]) | (max((arr_4 [i_0] [1] [9] [0]), var_1)))))))));
                    var_18 = (min((-2147483647 - 1), ((((arr_1 [i_2]) <= (((min((arr_2 [1] [1]), 65535)))))))));
                }
            }
        }
    }
    var_19 = 223;
    var_20 |= (!var_7);
    var_21 = (((var_5 <= -var_13) ? 16 : var_12));
    #pragma endscop
}
