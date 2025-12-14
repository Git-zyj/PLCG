/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1 - 1] [i_1 - 1] [15] = (((((var_1 >> (arr_2 [i_0 - 1])))) ? ((min((arr_2 [9]), ((~(arr_2 [17])))))) : (((10009 ? 1741674534 : (arr_4 [i_0 + 1] [i_0 + 1] [i_1]))))));
                var_18 |= (((-(arr_3 [i_0 - 1] [6] [i_1 - 1]))));
                var_19 = min((((var_4 ? var_10 : (arr_2 [i_0 + 1])))), (((min((arr_4 [i_0] [i_1] [i_0]), var_14)))));
            }
        }
    }
    #pragma endscop
}
