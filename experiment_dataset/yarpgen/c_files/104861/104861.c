/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((max(((75 ? var_3 : 1)), -var_11))), ((var_15 ? (min(var_10, var_4)) : (((max(var_14, var_12))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, (((((min(1769341726, 75))) ? ((181 >> (-1196606838 + 1196606861))) : 13601)))));
                    var_20 = (!var_17);
                    var_21 ^= (max((75 < 39), -50));
                    var_22 = ((((max((min(1, 0)), (arr_4 [i_2 + 1] [i_1 - 1])))) ? ((((arr_6 [i_2] [i_0 + 3] [i_0 + 3]) == (arr_6 [i_0 + 1] [i_0 - 1] [i_0 + 1])))) : (((arr_4 [i_1] [9]) ? ((-(arr_1 [i_0] [i_0]))) : ((-(arr_6 [i_0] [i_1 - 1] [i_2])))))));
                }
            }
        }
    }
    #pragma endscop
}
