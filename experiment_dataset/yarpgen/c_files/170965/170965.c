/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [17] = (((min((arr_3 [i_1]), (min(var_3, 2887033889)))) & (~var_3)));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    var_19 = (min(var_19, (-3265379970309974178 | 18446744073709551601)));

                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        var_20 = ((24 ? 18446744073709551577 : 1934233413334037466));
                        var_21 = (min(var_21, (var_6 | var_11)));
                    }
                }
            }
        }
    }
    var_22 += min(((-(max(var_18, var_15)))), ((-(min(var_15, var_18)))));
    var_23 = 1934233413334037473;
    #pragma endscop
}
