/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_4;
    var_14 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_15 -= ((((((max(2, 113))))) ? (~var_8) : (~-var_11)));
                var_16 = ((!((min((arr_4 [i_1 + 2] [i_0] [i_0 - 1]), (arr_4 [i_1 + 1] [i_0] [i_0 - 1]))))));
                arr_5 [8] [i_0] = (max((min((197 | var_11), (((arr_2 [i_0]) ? (arr_3 [1] [i_0 - 1]) : 255)))), (((~12) ^ 12))));
                arr_6 [i_0 - 1] [i_0] = ((~((max(12, var_7)))));
                arr_7 [i_0] [i_0] = ((((43 <= ((208 ? (arr_0 [i_0 - 1] [1]) : var_1)))) ? ((max(((((arr_4 [i_1] [i_0] [i_0 + 1]) < (arr_1 [i_0])))), (min(209, 17))))) : ((((!238) > 127)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_3 + 2] [i_3] = max(58, (arr_11 [4] [i_2] [i_2]));
                arr_14 [i_3] [i_3] = (i_3 % 2 == 0) ? (((var_1 < ((((0 << (arr_4 [i_2] [i_3] [i_2]))) >> ((((129 ? (arr_10 [i_3] [i_2] [i_2]) : (arr_2 [i_3]))) - 48))))))) : (((var_1 < ((((0 << (((arr_4 [i_2] [i_3] [i_2]) - 43)))) >> ((((129 ? (arr_10 [i_3] [i_2] [i_2]) : (arr_2 [i_3]))) - 48)))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_20 [i_2] [i_2] [i_2] [i_3] = 43;
                            arr_21 [i_2] [i_4] [i_4] [i_5] |= (min((((arr_16 [10] [i_3 - 1] [i_5 - 2] [i_4]) ? (arr_16 [i_2] [i_3 + 2] [i_5 + 1] [i_2]) : 3)), ((((arr_16 [i_2] [i_3 - 3] [i_5 - 2] [i_2]) < 0)))));
                        }
                    }
                }
            }
        }
    }
    var_17 ^= (max(((max(var_11, var_6))), ((var_4 ? 199 : (!var_5)))));
    #pragma endscop
}
