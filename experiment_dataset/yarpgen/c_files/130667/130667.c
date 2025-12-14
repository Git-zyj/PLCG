/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_2, (max((max(var_3, var_8)), (((3052244255 ? var_14 : 3052244255)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0 + 1] = ((arr_0 [i_0]) && (((1 >> (9507 - 9490)))));
                var_16 &= ((((max((arr_2 [i_1 + 1]), 3052244278))) || (((2566441862 ? 1728525433 : (arr_2 [i_1 - 1]))))));
                var_17 = ((63 / (min(((min(255, (arr_5 [i_0] [i_0] [i_0])))), (min(2566441862, -8722971858249464017))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                arr_11 [i_3] = (((((arr_9 [i_2] [i_3]) || (((107 ? (arr_7 [i_3]) : (arr_10 [i_2] [i_3])))))) ? (((arr_10 [i_2] [i_3]) ? (arr_10 [i_2] [i_3]) : (arr_10 [i_2] [i_3]))) : ((-16825 ^ ((107 ? (arr_8 [i_2]) : (arr_10 [i_3] [i_3])))))));
                arr_12 [i_3] [i_3] = ((((min((arr_10 [i_2] [i_3]), (arr_10 [i_2] [i_3])))) & 0));
            }
        }
    }
    #pragma endscop
}
