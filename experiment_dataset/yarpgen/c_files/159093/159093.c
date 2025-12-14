/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (13520 != var_13)));
    var_21 = var_2;
    var_22 = ((var_19 * (((var_1 <= (max(var_2, var_3)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_23 = ((11632396090408049382 ? 1 : (min((arr_5 [i_2 + 1] [i_2 - 1]), 17263174578699330455))));
                    arr_9 [i_2] = (((var_15 - var_2) | (((((1 - (arr_0 [i_0] [i_0])))) ? ((1 ? 1 : var_0)) : var_8))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                var_24 = 1;
                var_25 = ((((max(1, (arr_10 [i_3])))) ? (arr_16 [i_3 + 1] [i_3 - 1]) : ((-(arr_16 [i_3] [i_3 - 2])))));
                var_26 += (1 != 18433866786825678974);
            }
        }
    }
    #pragma endscop
}
