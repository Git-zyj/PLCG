/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((4294967282 ? (((var_4 >= var_8) ? (var_0 != var_4) : ((var_10 ? var_12 : var_14)))) : ((~(var_4 + var_14)))));
    var_18 = (var_7 || var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = (arr_2 [i_2] [i_1] [i_0]);
                    arr_7 [i_0] [6] [i_0] = ((((min(((1 >> (177 - 170))), (((arr_2 [1] [i_1] [1]) << (arr_1 [i_0])))))) ? (arr_4 [i_0] [i_1] [3]) : (((-(arr_4 [i_0] [i_1] [1]))))));
                }
            }
        }
    }
    #pragma endscop
}
