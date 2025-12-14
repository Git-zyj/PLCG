/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = ((((max(4098, 4099))) || (((~(min(-4093, var_13)))))));
                arr_7 [i_1] [i_1] = (min(((((min(4285569099807822010, (arr_4 [i_0] [i_0]))) != (var_13 - 4285569099807822008)))), ((((((arr_5 [i_0] [i_1] [i_0]) ? -4100 : (arr_2 [i_0])))) ? (((arr_5 [i_1] [i_1] [i_0]) ? -4098 : 4097)) : (-8703 || var_6)))));
                arr_8 [i_1] [i_1] = ((((max((arr_3 [i_1 - 3] [i_1 - 1]), (min((arr_6 [i_1] [i_1] [14]), 1902316841))))) ? (((((arr_6 [i_1] [i_1] [i_1]) && -66)) ? var_11 : (arr_6 [i_1] [i_1 - 3] [i_0]))) : -35));
                arr_9 [i_1] = 19919;
            }
        }
    }
    var_17 += ((10324738430880225426 ? ((((var_8 ? var_10 : var_3)))) : var_9));
    #pragma endscop
}
