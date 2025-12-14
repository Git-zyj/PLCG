/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((max(((16206503348197173164 + (-32767 - 1))), ((min(2310691649, -1250220773))))))));
    var_15 = (max(var_15, ((min((((((var_12 ? 0 : 1))) ? ((min(1, var_0))) : var_6)), (((-2129680850 * 545024500) ^ ((var_9 ? 1 : 545024500)))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0 + 1] |= (min(-17284302686831403432, ((max((!11101931080884039222), var_0)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_0 + 1] [i_2] [i_3] [i_4] [i_0] = 1;
                                var_16 = (min(var_16, ((var_7 ? ((((max(-954835287, 769))) ? var_2 : (arr_1 [i_1]))) : (((-1250220773 ? 1 : 1)))))));
                                var_17 = (min(var_17, (max(-17624, ((((((var_7 ? 769 : 31))) && (~-26984))))))));
                            }
                        }
                    }
                    var_18 = (min(var_18, var_3));
                    arr_15 [i_0 - 1] [i_2] &= ((!((max(((var_6 ? 1 : var_5)), -1)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 17;i_7 += 1)
            {
                {
                    arr_25 [i_5] [i_6] = ((((min(((var_6 ? var_4 : (arr_16 [i_7] [i_5]))), ((max(var_13, 1)))))) ? (min((max((arr_1 [i_7]), 15320958237575209152)), ((((var_1 + 2147483647) >> (4194303 - 4194276)))))) : -724046981));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_19 = ((((-724046981 ? (arr_26 [i_6] [i_6] [i_6] [i_9] [i_9] [7]) : (arr_26 [i_9] [i_8] [i_6] [3] [i_6] [i_5])))) ? (min(var_7, var_10)) : (((386259112 ? (-32767 - 1) : (-2147483647 - 1)))));
                                var_20 = (max(var_20, (((((((~var_3) ? ((max(var_10, var_11))) : (min(var_12, (arr_27 [i_9] [7])))))) || (1 && 3908708173))))));
                                arr_30 [i_5] = (((!954601839) ? (max(861238649, (max(17284302686831403432, -137959240)))) : (!1)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((min((((1215542457 == (!1215542457)))), ((~((var_2 ? -6856 : 1)))))))));
                                var_22 ^= ((var_6 ? -762177215 : (!var_5)));
                                arr_36 [i_11] [i_5] = (max(((((arr_7 [i_5] [i_5]) ? 23914 : var_2))), 0));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
