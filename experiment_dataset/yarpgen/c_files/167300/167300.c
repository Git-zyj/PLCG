/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (32767 - -110);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 = ((1 ? ((((((arr_0 [i_0]) >> (341948432 - 341948428)))) ? 122 : (arr_2 [i_0]))) : ((((((max((arr_2 [i_0]), var_5)))) <= var_8)))));
                    arr_7 [i_0] [i_1] [i_1] = var_10;
                    var_16 = (((var_10 && (arr_3 [i_1]))));
                    var_17 = 3584;
                }
            }
        }
    }
    #pragma endscop
}
