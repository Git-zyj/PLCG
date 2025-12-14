/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] = 137438953471;
                arr_5 [i_1] &= (arr_3 [i_1]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_17 = ((((min(2050901596, (((arr_7 [i_2]) ? -23358 : (arr_7 [i_2])))))) ? (arr_6 [i_2]) : ((((arr_8 [i_2] [i_2]) ? -9223372036854775801 : (arr_8 [i_2] [i_2]))))));
        var_18 = 1;
    }
    for (int i_3 = 1; i_3 < 7;i_3 += 1)
    {
        var_19 ^= -1;
        var_20 -= (((((((arr_9 [6]) ? -1 : (arr_1 [i_3] [i_3])))) ? (arr_7 [0]) : 1121130523)));
    }
    #pragma endscop
}
