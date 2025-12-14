/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [17] = (max(6788298208953210063, ((min(32756, (arr_0 [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_11 [i_1] [6] [i_2] [i_3] [i_3] [i_3] = (min((((32756 < (arr_6 [i_1])))), 7617683298654428148));
                        var_19 |= var_16;
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] = ((!((((arr_10 [i_0] [i_1] [i_2] [i_2] [i_3]) ? (arr_10 [i_0] [i_1] [i_1] [i_3] [i_3]) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        var_20 = 1293852495;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_21 -= ((7617683298654428146 ? (max((arr_14 [i_4]), var_12)) : (((-var_2 == (arr_14 [i_4]))))));
        arr_15 [i_4] = (max((((arr_13 [i_4] [i_4]) & (max(-70368744177664, 7617683298654428146)))), ((((max(var_16, 49231))) ? (max((arr_14 [i_4]), 8583091857153818561)) : 1))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    var_22 = max((((~(1 >> 1)))), ((1 ^ (max((arr_16 [i_5] [i_5]), -20)))));
                    var_23 |= (max(524287, 1));
                    var_24 = (((((~(arr_19 [i_4] [i_4] [11])))) ? (max(512, (arr_13 [i_4] [i_4]))) : ((~(max(var_15, 1))))));
                }
            }
        }
        arr_20 [i_4] = arr_17 [i_4];
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_25 ^= var_15;
        arr_23 [i_7] = 1;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 21;i_9 += 1)
            {
                {
                    arr_31 [i_7] [i_8] [i_8] [i_8] = (arr_24 [i_7] [i_9 + 2]);
                    arr_32 [i_7] [10] [i_7] = max(((((((-911339196973797661 ? 745930026 : (-9223372036854775807 - 1)))) ? (arr_18 [i_9 + 2]) : (((0 != (arr_28 [i_7] [i_8]))))))), (max(7617683298654428157, 1)));
                    arr_33 [i_7] [i_7] [1] [i_7] = 1;
                }
            }
        }
    }
    var_26 += (!var_11);
    var_27 = var_12;
    #pragma endscop
}
