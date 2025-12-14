/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 = (((var_13 ? var_16 : -var_12)));
    var_19 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_1] = (((((!(arr_8 [i_1] [5] [i_1 - 2] [i_1])))) | ((~(arr_7 [i_1] [i_0] [i_1 - 1] [i_1])))));
                    var_20 = (((((((-8792515871582410592 <= (arr_4 [i_0] [14])))) - var_7)) >> ((((var_13 < 1144056505) < (~var_3))))));
                }
            }
        }
    }
    var_21 = (max((max((var_11 % var_14), var_7)), -1144056506));
    #pragma endscop
}
