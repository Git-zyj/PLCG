/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((max(((min(1, -76))), 0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_17 = (min(6088690286155840592, 32214));
                            arr_11 [i_0] [i_0] [i_2 - 4] [i_2] [i_3 - 1] [i_3] = (min(((var_8 ? (var_5 > 99) : ((var_3 ? var_9 : var_0)))), ((((arr_0 [i_3 + 2]) || (arr_7 [i_0] [i_2 - 4] [i_3 + 1]))))));
                            var_18 = ((((((32767 / var_5) % -1663329150))) ? (((((var_7 ? 2069661647500296316 : var_6))) ? (((arr_9 [i_0] [i_0] [i_0] [i_0] [7] [3]) & (arr_7 [i_0] [i_2] [i_3]))) : (arr_9 [0] [i_0] [i_2 + 1] [i_2 + 1] [i_3 + 2] [1]))) : (min(((var_10 ? (arr_3 [i_0]) : (arr_3 [i_0]))), ((min(var_11, var_3)))))));
                        }
                    }
                }
                var_19 |= (((((-16 ? 92 : 99))) ? ((((arr_1 [i_0]) ? ((16980606218027610547 ? var_3 : var_7)) : (((max((arr_0 [i_0]), var_8))))))) : ((((max(var_11, (arr_8 [1])))) ? (var_5 / 16980606218027610542) : (((var_8 ? var_15 : var_13)))))));
                var_20 = (max((((arr_8 [i_1]) - var_14)), (arr_6 [i_0] [1] [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
