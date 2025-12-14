/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_4 ? 958655376 : (max(10302, -91935426906871176))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_1] [i_2] = ((min(((-(arr_3 [i_0] [12])), (arr_2 [i_1 - 1])))));
                    var_14 -= ((~(max((arr_0 [i_0] [i_1 + 1]), (arr_0 [i_1 - 1] [i_0])))));
                    arr_9 [4] [i_1] |= ((var_1 <= (((max(var_8, -15598))))));
                    var_15 = 4968328420688356574;
                }
            }
        }
        var_16 = 2029816531;
        arr_10 [i_0] = (arr_4 [i_0] [i_0] [i_0]);
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_14 [i_3] = ((+(((arr_6 [i_3] [i_3]) ? (arr_6 [i_3] [i_3]) : (arr_12 [i_3])))));
        var_17 += ((max(39, 59319)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 10;i_5 += 1)
            {
                {
                    var_18 = (max(var_18, (((((((((arr_19 [i_5] [9] [i_3] [i_3]) ? 25731 : var_8)) / ((4968328420688356574 ? (arr_1 [i_3]) : -469387625))))) & (((((-15598 ? (arr_17 [i_3] [i_4] [i_5]) : (arr_16 [i_3] [i_3] [i_3])))) ? (arr_17 [i_5 + 3] [i_5 - 2] [i_5 + 3]) : (max(7, 4130857732)))))))));
                    var_19 += (34 || 22261);
                    arr_22 [i_3] [i_4] = ((var_10 ? -2268977035 : ((((arr_4 [i_4] [i_5 + 4] [i_5 + 3]) ? (arr_4 [i_3] [i_5 + 4] [i_5 + 3]) : (arr_17 [i_4] [i_5 + 4] [i_5 + 3]))))));
                    arr_23 [i_5] = -26396;
                }
            }
        }
    }
    var_20 = -10565;
    var_21 += var_7;
    #pragma endscop
}
