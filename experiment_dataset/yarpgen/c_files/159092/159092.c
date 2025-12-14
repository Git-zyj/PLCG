/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_6;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_0] [8] &= (max((arr_2 [i_0] [i_1] [i_0]), (((arr_1 [i_0 + 2]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_2 + 2])))));
                    arr_7 [i_1] [i_1] = ((!(arr_1 [i_2])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                arr_13 [i_4] = 2;
                var_12 = (((arr_10 [i_3 - 1]) ? (((arr_10 [i_3 - 3]) ? (arr_10 [i_3 - 2]) : 10454468012633894814)) : ((((arr_10 [i_3 - 1]) ? (arr_10 [i_3 - 2]) : (arr_10 [i_3 - 1]))))));
                var_13 = 6;
                var_14 &= (arr_3 [i_3] [i_4] [i_3]);
            }
        }
    }
    var_15 &= (min(16373711848493480146, ((-((var_7 ? var_9 : var_0))))));
    #pragma endscop
}
