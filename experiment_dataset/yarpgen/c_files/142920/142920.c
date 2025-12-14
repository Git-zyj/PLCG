/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 = (max(((((((arr_3 [4]) & (arr_0 [i_0])))) ? ((var_12 << (var_15 - 65458))) : (((arr_2 [i_0]) << (var_10 - 1689253370178592752))))), (((((arr_2 [i_0]) ? var_1 : var_8)) & (arr_3 [i_0])))));
                    var_19 += ((((((((arr_4 [i_2] [i_1] [i_0]) ^ (arr_2 [1]))) & (((arr_4 [i_0] [i_1] [i_2]) & (arr_3 [i_0])))))) ? (((min(var_6, (arr_0 [i_0]))) << ((((17178847489774601230 ? -571507548 : -571507539)) + 571507551)))) : (((((max((arr_2 [6]), var_13))) >> (((arr_4 [i_0] [i_1] [i_2]) - 11266016227630029897)))))));
                }
            }
        }
    }
    #pragma endscop
}
