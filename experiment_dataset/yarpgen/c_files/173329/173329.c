/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((((((~(max(var_10, var_0))))) ? var_9 : ((((min(25209, var_7))) ? (19 | 4279233312) : var_12)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = (((var_7 != var_1) <= (((arr_0 [i_1]) ? (min(var_3, -25210)) : 0))));
                    var_16 -= ((-((-(arr_4 [4] [i_0] [i_2])))));
                    arr_7 [8] [i_1] [i_2] [i_1] = var_11;
                    var_17 = (max(var_17, (((((max((arr_1 [i_0] [i_2]), (min(var_7, var_0))))) ? 17056063449314790452 : ((((var_3 != var_4) ? ((2297514930 ? var_13 : (arr_5 [i_0] [i_0] [i_0]))) : var_2))))))));
                }
            }
        }
    }
    var_18 = (min(var_18, ((max((~12283), var_6)))));
    var_19 = ((var_4 ^ (max((var_7 > var_10), -var_8))));
    #pragma endscop
}
