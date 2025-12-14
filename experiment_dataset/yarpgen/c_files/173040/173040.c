/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] = ((((max((-2147483647 - 1), (0 % 1122591764188194267)))) ? ((((max((arr_7 [i_0] [i_0] [15] [i_0]), (arr_7 [i_0] [i_0] [i_2 - 1] [i_3]))) != -5456720550860059041))) : 21153));
                                arr_17 [16] [6] [i_3] [i_3] [15] = (!(((-((-(arr_8 [i_0] [i_2])))))));
                                var_19 = (min(var_19, ((max(((-((-2848532613312322429 ? 3828721497724190219 : var_1)))), (arr_8 [i_4] [2]))))));
                                var_20 = (((arr_7 [i_0] [i_1] [i_2 + 2] [8]) ? ((((65535 && 1431597831) ? (5456720550860059041 == 0) : 75))) : (min(8796091973632, (!1)))));
                            }
                        }
                    }
                    arr_18 [i_2] [i_1] [i_1] [i_0] = (((0 || 182) && ((min((((var_12 && (arr_15 [i_0] [i_1])))), ((11 ? (arr_12 [i_0] [i_0] [i_0] [i_1] [i_2]) : 9)))))));
                    arr_19 [i_0] [i_0] [i_0] [i_0] = (min((min((((arr_13 [i_0] [i_0]) & (arr_10 [i_2 - 1] [i_1] [i_1] [i_0]))), 511)), ((~(arr_13 [i_2] [i_0])))));
                }
            }
        }
    }
    var_21 = (min(var_10, ((((var_10 ? var_2 : var_10)) / -var_10))));
    #pragma endscop
}
