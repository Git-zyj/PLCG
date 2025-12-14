/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_13 |= ((((((max(var_8, (arr_5 [i_1] [i_1] [i_0])))))) * (1186604538 * 0)));
                arr_6 [i_1] = ((((-(arr_0 [i_0] [i_1]))) == (((-(arr_1 [i_0]))))));
            }
        }
    }
    var_14 = (min(var_14, ((max((((-6143354518143349093 + 9223372036854775807) << var_0)), (min(var_2, ((var_5 ? 6143354518143349102 : var_8)))))))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_15 = (arr_7 [i_3 - 1]);
                    arr_16 [i_3] [i_3] = -1294741868326812904;
                    var_16 = ((1 * (arr_13 [i_2] [i_3] [i_4])));
                }
            }
        }
    }
    var_17 = var_2;
    #pragma endscop
}
