/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((((max(-1, 6825359810233057995))) ? (max(((max(1, var_3))), (min((arr_1 [i_1] [i_0]), var_11)))) : (((max(52215, -32))))));
                arr_7 [7] [i_0] [i_1] = ((~(min(((var_4 << (var_6 - 50580))), (~52229)))));
                arr_8 [14] [i_0] = (arr_5 [i_0] [i_1]);
                arr_9 [i_0] = (((((12 <= (arr_4 [i_0] [i_0] [i_1])) ? (arr_4 [i_1] [1] [i_0]) : (arr_5 [i_1] [i_0])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    arr_20 [i_3] [1] [i_4] = ((~(((((108 ? var_5 : var_3))) ? -49192 : (((arr_15 [i_4] [i_3] [i_2]) ? var_9 : -1))))));
                    var_13 = (var_11 ? ((((((var_0 ? var_11 : (arr_16 [i_2] [i_3] [i_4]))) != ((min(127, var_0))))))) : (min((arr_15 [i_2] [10] [1]), var_10)));
                }
            }
        }
    }
    #pragma endscop
}
