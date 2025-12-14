/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((((var_7 ? (min(var_5, var_9)) : (((max(var_9, var_9))))))) ? ((min(((121 ? var_6 : 1931664320)), (~2363302976)))) : (max(1, 2133908717618476393)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_12 = 7027;
                    arr_8 [i_0] [i_0] [i_2] = (arr_1 [i_0]);
                    var_13 = (min((((!(arr_3 [i_0 + 3] [i_0 - 2])))), (arr_2 [i_0] [i_1] [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
