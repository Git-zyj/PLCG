/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_2] = (((((((max((arr_5 [i_0] [i_1] [i_2]), (arr_0 [i_0] [i_1])))) ? (((35903 < (arr_3 [i_0] [i_1])))) : ((-6 ? -1 : 48816))))) && ((min(((18446744073709551602 - (arr_3 [i_0] [i_0]))), ((max(var_14, var_14))))))));
                    arr_7 [i_0] [i_0] = ((((min((((arr_0 [6] [i_1]) ? 665949445523763894 : var_2)), (var_4 <= -13)))) && ((((14710253809726099948 || 31) % (min(var_0, (arr_1 [i_2]))))))));
                    arr_8 [i_0] [0] [i_0] = (min((((65516 - var_6) ? (39 + 1) : (var_0 + 178))), (((((((arr_1 [i_0]) % var_7))) > (((arr_3 [i_0] [i_0]) - (arr_5 [2] [i_1] [i_2]))))))));
                }
            }
        }
    }
    var_15 = ((((((min(1975431152, 1758134997))) ? (((var_1 ? var_12 : var_13))) : (min(var_9, var_7)))) >> ((((((var_4 ? var_13 : 39365)) - (-1 / 50026))) - 60919))));
    #pragma endscop
}
