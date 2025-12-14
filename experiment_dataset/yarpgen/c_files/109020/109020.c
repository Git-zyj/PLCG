/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_15));
    var_21 = 14846241967254123374;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_22 = ((((min((min(var_11, -3)), (arr_4 [i_2])))) ? 9030 : 64442));
                    var_23 ^= (max(((((arr_0 [i_0] [i_1]) < -2048))), -23));
                    var_24 = (max(var_24, ((max(-3, ((min(var_1, (arr_1 [i_2])))))))));
                    var_25 = (max(var_25, var_15));
                }
            }
        }
    }
    var_26 = (min(var_15, (!0)));
    #pragma endscop
}
