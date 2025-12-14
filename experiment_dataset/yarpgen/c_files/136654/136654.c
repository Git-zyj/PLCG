/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((min(-54, (-740782604 >= 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_13 *= var_5;
                arr_6 [i_0] [i_1] [7] = var_1;
                var_14 = ((((var_8 << (((max(var_4, var_1)) - 5435983530100230812)))) < ((min(((var_2 == (arr_5 [i_0]))), (arr_1 [i_0]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    arr_15 [i_3] [3] [3] [i_2] = (((((var_5 ? (arr_10 [i_3]) : (arr_14 [i_3]))))) ? (((((var_10 < (arr_13 [1] [i_2] [i_2])))) | -var_0)) : (((((var_4 ? var_0 : var_3)) >= (((arr_12 [i_2] [i_2]) ? (arr_8 [i_2]) : var_2))))));
                    var_15 = (min(var_15, var_0));
                }
                arr_16 [i_2] [i_2] [i_2] = var_6;
            }
        }
    }
    #pragma endscop
}
