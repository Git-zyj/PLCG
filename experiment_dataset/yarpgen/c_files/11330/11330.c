/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (min(641034079, -641034085));
                var_16 = (min(var_16, (((((!641034079) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_1 + 3])))))));
                var_17 = ((((((arr_3 [i_0] [15] [6]) > 641034079))) != ((min(37482, -11232)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                var_18 -= var_6;
                var_19 -= (!641034094);
                var_20 -= (max(((14228051832797092350 ? (arr_7 [i_2 - 4]) : (((arr_8 [i_3]) ? var_1 : 641034079)))), var_6));
            }
        }
    }
    var_21 -= var_1;
    #pragma endscop
}
