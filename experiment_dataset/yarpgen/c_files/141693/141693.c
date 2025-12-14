/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_10 [i_0] [i_3] [i_3] [i_3] [i_2] [i_1] = (min((((var_0 + 1537318376) ? 125 : 1)), var_10));
                        var_16 ^= ((((max((var_1 / 32490), ((3099516780 ? var_11 : -31743))))) ? (arr_3 [i_3] [i_1] [i_0]) : -1072693248));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_13 [i_1] [i_1] [i_1] = (arr_1 [i_0]);
                        var_17 = ((-13515 ? 0 : 2305843009213693952));
                    }
                    arr_14 [i_0] = (-4990496189240740219 & 0);
                }
            }
        }
    }
    var_18 = ((max((min(232, 1082809431)), var_5)));
    #pragma endscop
}
