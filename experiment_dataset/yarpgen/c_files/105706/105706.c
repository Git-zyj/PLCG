/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(32276, var_7));
    var_14 = ((((!((max(549755813887, var_11))))) && (!-1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, ((max((min((max(var_12, -5576622836413146456)), ((((var_6 + 2147483647) << (((-966978971 + 966978984) - 13))))))), (((((7 ? 252157011 : var_5)) > -252157011))))))));
                    arr_9 [i_2] [i_1] [i_0] [i_1] = min((((((0 ? var_7 : var_6)) * (!51)))), (max(var_2, ((-3873280985411281345 ? var_8 : var_7)))));
                    arr_10 [i_0] [i_2] [i_0] = ((((((0 ? var_4 : 3873280985411281345)))) > ((((max(var_8, var_1))) ? ((var_10 ? 66 : 8907497385935957311)) : (((3873280985411281342 ? var_4 : var_3)))))));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] = (max((((min(121, var_11)) & ((3044042181 ? 3873280985411281328 : var_10)))), (max(20101, 3873280985411281342))));
                        var_16 = ((~(max(0, 252157011))));
                        var_17 = (min((((~(1 % -252157011)))), ((3731423803 ? (max(var_5, -3873280985411281328)) : var_3))));
                    }
                }
            }
        }
    }
    var_18 = (min(((~((var_5 ? -8273778407885916400 : 2357232399778141183)))), ((((max(var_4, 0)))))));
    #pragma endscop
}
