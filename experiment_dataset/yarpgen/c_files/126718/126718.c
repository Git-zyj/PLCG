/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_10 + (~var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 *= (min((max((arr_4 [i_2] [i_2 - 1] [i_2]), (arr_4 [i_2] [i_2 - 1] [1]))), (arr_6 [i_2 - 2] [i_2 - 1] [i_1])));
                    arr_10 [i_2 + 1] [i_1] = var_6;
                    var_13 ^= ((((max(1046127675, (arr_5 [i_0])))) ? (max((min((arr_0 [1] [i_1 + 2]), (arr_5 [10]))), ((max((arr_1 [2]), (arr_3 [i_2 - 2])))))) : 1046127674));
                }
            }
        }
    }
    var_14 = (min(1046127674, 1046127669));
    #pragma endscop
}
