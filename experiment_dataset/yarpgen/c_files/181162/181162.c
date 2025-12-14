/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_3));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    var_21 ^= (((arr_7 [12] [i_2] [i_2 + 1]) || ((max((arr_7 [1] [i_2] [i_2 + 1]), (arr_7 [1] [i_2] [i_2 + 1]))))));
                    var_22 += ((((~(max((arr_4 [12]), (arr_1 [i_0] [i_1])))))) && 20907);
                }
                var_23 = (min(var_23, 20903));
            }
        }
    }
    var_24 = ((12919713772811951469 ? var_2 : var_4));
    var_25 = var_10;
    var_26 = 5527030300897600162;
    #pragma endscop
}
