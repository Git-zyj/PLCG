/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_0] [i_1] = ((((((((var_8 ? var_5 : (arr_6 [i_0] [i_1] [1] [i_2])))) ? (arr_6 [i_1] [i_1] [i_1] [i_0]) : (max(var_8, (arr_5 [i_2] [i_2] [i_2] [i_2])))))) ? (((((4394 >> (var_5 - 3580)))))) : (((((arr_1 [i_2]) ? (arr_2 [i_0] [i_1]) : var_7)) >> (var_6 + 392996421)))));
                    var_12 = (max(var_12, (((+(((arr_6 [i_2] [i_0] [i_2] [i_2 + 2]) ? (arr_6 [i_0] [i_0] [i_2] [i_2 + 2]) : var_7)))))));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    var_13 = (max(var_13, var_2));
                    var_14 -= ((-(arr_5 [i_0] [i_0] [i_0] [i_0])));
                }
                var_15 = ((((((((var_2 ? var_2 : 164))) ? ((min(var_4, var_1))) : -var_11))) || (((var_10 ? var_6 : (arr_2 [i_0] [11]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            {
                var_16 = ((var_10 ? (arr_12 [i_5]) : (arr_4 [i_4] [14] [i_4])));
                var_17 = ((~((0 ? (arr_13 [i_4 + 1]) : (arr_13 [i_4 + 1])))));
            }
        }
    }
    #pragma endscop
}
