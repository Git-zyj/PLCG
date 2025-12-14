/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(((-1 ? (((min(105, var_2)))) : (~var_0))))));
    var_15 = (max(4126532061787941823, ((min(122, var_6)))));
    var_16 *= (!var_13);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((((~(58777 ^ 9)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 = ((-0 >= (arr_7 [i_3])));
                                var_19 = (max(var_19, (arr_2 [i_4])));
                                var_20 = (min(var_20, ((max((min(254, var_1)), (((var_12 ? (arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : var_0))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
