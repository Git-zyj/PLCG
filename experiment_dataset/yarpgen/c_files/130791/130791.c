/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_11 | (min(var_11, var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((max((max(-1058949585, 1323795482)), (var_3 ^ 1)))) ? (arr_0 [i_0]) : var_3));
                arr_5 [1] = (((arr_0 [i_0]) ? (arr_2 [i_0] [i_1]) : var_3));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                arr_11 [15] [i_2] [i_3] = 1;
                arr_12 [i_2] [i_2] = (((((1323795482 ? 1256600909 : 41960))) ? 1 : ((32768 ? (~var_1) : ((2147483647 ? 33601 : 1216268475))))));
            }
        }
    }
    var_13 = (max(var_4, ((var_7 ? var_1 : var_9))));
    #pragma endscop
}
