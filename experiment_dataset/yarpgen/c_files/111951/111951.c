/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((~var_2) % var_5)) == (~var_6)));
    var_16 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_2] = (!1);
                    var_17 ^= (min((min(((1 ? 4188162737 : 11330607947489444291)), ((max(4188162750, (arr_2 [i_0])))))), -var_6));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                var_18 *= (max(4879, (((((106804580 ? (arr_12 [i_3] [i_3] [i_3]) : var_3)) == (((max(96, var_13)))))))));
                arr_14 [i_3] [i_3] = ((max((arr_11 [i_3]), 0)));
                var_19 = ((((min((arr_4 [i_4]), var_1))) ? (((max((arr_4 [i_3]), 4094)))) : var_2));
            }
        }
    }
    #pragma endscop
}
