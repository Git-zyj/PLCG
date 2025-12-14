/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_2, ((~(min(var_4, var_4))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 = (((((!(549755748352 >= -96)))) > ((max((((!(arr_5 [i_0] [i_1 - 1] [i_2] [i_0])))), (arr_7 [i_2] [i_2] [i_2] [i_2 - 3]))))));
                    var_13 = var_9;
                    var_14 = 18068926470999466699;
                    var_15 = (min(var_15, ((((-114 ? var_2 : (!2849884446)))))));
                    arr_9 [0] [i_1] [1] = ((-(arr_0 [i_1 - 1])));
                }
            }
        }
    }
    #pragma endscop
}
