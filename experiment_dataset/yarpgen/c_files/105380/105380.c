/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_10 [i_2 + 1] [i_2] [i_2 + 1] = (((((~(arr_6 [3])))) ? var_8 : 1333670565989315229));
                    arr_11 [i_0] [i_1] [i_1] = ((!((((var_17 != 17113073507720236361) << 1)))));
                    var_19 += ((~(((arr_8 [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_2 + 1]) & (arr_8 [i_2 + 2] [4] [i_2 + 2] [i_2 + 1])))));
                }
            }
        }
    }
    var_20 = var_12;
    var_21 = (25965053 << var_13);
    #pragma endscop
}
