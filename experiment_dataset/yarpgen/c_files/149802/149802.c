/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_11 [11] [11] [7] [i_0] = (i_0 % 2 == zero) ? (((((~((var_3 << (((arr_3 [9] [i_0] [i_0]) - 804138922)))))) >> (((arr_0 [i_0 - 1]) - 210))))) : (((((~((var_3 << (((((arr_3 [9] [i_0] [i_0]) - 804138922)) - 2028456029)))))) >> (((arr_0 [i_0 - 1]) - 210)))));
                        var_11 = (!var_5);
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_15 [i_0] [8] [i_2] [i_4] = ((!(((~(arr_3 [2] [i_0] [i_0 - 3]))))));
                        arr_16 [i_0] [i_0 + 2] [i_0] [i_1] [i_0 + 2] [i_0 + 2] = (((arr_4 [5] [i_0 + 2] [i_0 - 3]) ? (((-(arr_5 [i_0 + 2] [i_0 + 2])))) : ((min(var_1, (arr_7 [i_0 - 3] [i_0 - 2] [i_0 + 1]))))));
                    }
                    var_12 -= ((((3390152757 < (6363492627335213466 <= 0))) ? (arr_0 [i_2]) : (((((1131101672 ? 3163865623 : 965))) ? (arr_0 [i_0]) : (arr_9 [9] [i_0 + 2] [i_0 - 1] [i_0 + 2])))));
                }
            }
        }
    }
    var_13 += -7684511505091528139;
    var_14 = var_9;
    #pragma endscop
}
