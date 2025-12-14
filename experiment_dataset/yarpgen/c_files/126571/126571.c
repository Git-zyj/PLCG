/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((min(34052, 31025)))));
    var_18 = -986209341;
    var_19 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((((((arr_0 [i_0] [8]) ? -1364158359 : (arr_0 [i_0] [i_0]))) == (((arr_2 [i_0]) ? (arr_0 [i_0] [i_1]) : (arr_3 [i_0])))))) + 18695));
                var_20 += (((((4279340986088264551 << (((arr_4 [13] [i_1]) + 185733278))))) ? (((((arr_4 [i_0] [i_1]) + 2147483647)) >> (((arr_4 [i_0] [i_1]) + 185733295)))) : (-20846 >= -1295283525)));
            }
        }
    }
    #pragma endscop
}
