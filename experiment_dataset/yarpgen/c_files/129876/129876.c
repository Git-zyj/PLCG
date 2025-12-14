/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 *= (arr_3 [i_0] [i_1] [i_1]);

                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        var_14 = ((!((18446744073709551615 && (!4294967295)))));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_15 = (((((max(18446744073709551615, var_10)))) == (arr_6 [i_0] [i_0] [i_2] [i_3])));
                            var_16 = 1879048192;
                        }
                    }
                    var_17 = ((((max(((4 ? (arr_5 [i_0] [i_1] [i_2]) : -8)), (arr_0 [i_1])))) > 2251799813685247));
                }
            }
        }
    }
    var_18 = (min((((var_3 < (var_4 * var_10)))), 124));
    #pragma endscop
}
