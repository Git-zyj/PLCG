/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [3] = (((((max(722416713, 722416713) == (max((arr_3 [i_0] [i_0] [i_0]), 2479137279)))))));
                arr_7 [i_1] [17] [i_1] = (((arr_5 [17] [i_1]) >= (((((arr_0 [i_0] [i_0]) ? var_4 : 722416713)) + var_3))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_15 [i_2] [i_3] = (min(722416717, 15882520151019895744));
                arr_16 [i_2] [i_2] = 1431;
                arr_17 [i_2] [i_2] [i_2] = (max((min(var_12, (arr_5 [i_2] [i_3]))), ((((3572550583 ? 2564223922689655872 : var_11))))));
                arr_18 [i_2] [0] [i_2] = ((-(min(263210922, 1))));
            }
        }
    }
    var_13 = ((var_7 ? var_3 : var_12));
    var_14 = -var_2;
    #pragma endscop
}
