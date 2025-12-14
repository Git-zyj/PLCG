/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((min(1, var_0)), (((var_3 > ((-9207722180952371261 ? var_2 : 24)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = var_0;
                arr_4 [i_0] = (((arr_2 [i_1] [i_0] [i_0]) ? (arr_0 [i_0 - 1]) : (((min(var_10, var_3))))));
            }
        }
    }
    var_13 = (((((20675 || (((var_4 ? var_9 : 20112)))))) < ((-(~20105)))));
    var_14 = ((var_2 > ((((1675 * -20112) != -20113)))));
    #pragma endscop
}
