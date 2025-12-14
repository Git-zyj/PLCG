/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 223;
    var_12 -= (!var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_13 = (max(var_13, ((((-(arr_8 [i_3] [i_2])))))));
                            arr_10 [i_0] [i_1] [i_0] [i_3] = (max(3111103758, 715081660));
                        }
                    }
                }
                arr_11 [i_0] [i_1] = (max(((((arr_1 [i_0]) != (424571130 * 0)))), (min((~8388606), -102))));
            }
        }
    }
    #pragma endscop
}
