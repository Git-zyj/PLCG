/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 14870757594698734674;
    var_14 = 2624162311293229513;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_11 [i_3] [i_3] &= ((~((((!(arr_9 [i_0] [i_1] [8] [i_3])))))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((~(arr_7 [i_0] [i_0] [i_2] [i_0])));
                    }
                    arr_13 [i_1] [9] [8] = ((73 ? -34 : 1960720631512295737));
                }
            }
        }
    }
    var_15 = (max(var_15, var_5));
    #pragma endscop
}
