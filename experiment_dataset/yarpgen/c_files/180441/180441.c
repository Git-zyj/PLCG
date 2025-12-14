/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_18 = ((-((-(((arr_3 [i_0]) ? 1125899906842624 : 251))))));
                    arr_7 [9] [9] = (max(var_4, ((12 ? (arr_6 [23]) : (arr_3 [i_2])))));
                    arr_8 [i_0] &= 151;
                }
                arr_9 [i_1] [20] [i_0] = (((((7 ? ((-(arr_3 [i_1]))) : (arr_1 [i_0] [i_1])))) ? 133 : 156));
            }
        }
    }
    var_19 = var_15;
    var_20 = var_13;
    var_21 &= -var_17;
    #pragma endscop
}
