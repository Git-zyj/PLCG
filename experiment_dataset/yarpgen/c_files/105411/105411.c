/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 -= 470;
    var_15 = (max(var_15, ((min(-976264485, var_9)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((!((((max((arr_2 [i_0]), (arr_1 [i_0] [i_0])))) == (((var_3 || (arr_2 [i_0]))))))));
                    arr_8 [i_0] [i_0] [i_2] = var_11;
                    arr_9 [6] [i_1] [i_0] = min((((arr_3 [i_0] [i_1] [i_0]) ? 976264484 : (arr_5 [i_0] [i_1] [i_0] [i_2]))), (arr_0 [i_1]));
                }
            }
        }
    }
    #pragma endscop
}
