/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, 1404686327));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 += (((arr_0 [i_0] [i_1]) ? (((((~(arr_6 [i_0] [i_0] [i_0] [i_0])))) ? (((var_1 ? 1404686328 : var_3))) : -var_2)) : (((arr_4 [i_2 - 3]) ? -108 : (max((arr_6 [i_0] [i_0] [i_0] [i_0]), var_0))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 -= (~var_9);
                                arr_14 [i_0] [i_4] [i_4] = (min(((172 ? 83 : 91)), ((~((var_2 ? 0 : (arr_7 [i_0] [i_1] [i_0])))))));
                                var_13 -= (max((((((arr_12 [i_0] [19] [i_2] [i_3] [9]) ? (arr_8 [i_0] [i_1] [i_2 + 1] [i_4]) : -6391109568868960941)) + (arr_9 [i_0] [i_1] [i_0] [i_3]))), ((min((arr_12 [i_2 - 2] [i_2 - 1] [i_2 - 3] [i_2] [i_2 - 2]), (arr_9 [i_2 - 2] [i_2 + 1] [i_2] [i_2]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_14 += ((+(min(((((arr_18 [i_6] [i_1] [i_2 + 1]) <= 1))), ((1 ? 0 : 255))))));
                                var_15 = ((((((104 + var_3) >= (!var_2)))) <= var_3));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 21;i_8 += 1)
                        {
                            {
                                arr_26 [i_8] [i_7] [14] [i_1] [i_0] = ((var_8 ? (((-1404686328 ^ -84) & (var_4 ^ var_0))) : (((-(max(var_6, -6391109568868960941)))))));
                                var_16 = (max(var_16, (((((((max(var_6, (arr_16 [i_0] [i_0] [i_1] [20] [i_7] [i_8])))) ? (((min(5917, 74)))) : var_7)) / 83)))));
                                var_17 = ((((!var_6) ? (!var_0) : ((var_7 ? (arr_7 [i_0] [i_1] [i_2]) : (arr_8 [i_0] [i_1] [i_2] [i_8 - 2]))))));
                                var_18 += (32755 || 74);
                                var_19 = -var_8;
                            }
                        }
                    }
                    var_20 -= ((-96 ? -1126726543 : ((((var_9 ? var_4 : var_8)) | ((var_6 ? (arr_21 [i_2] [i_1] [i_0] [20]) : (arr_12 [i_0] [i_0] [11] [i_0] [i_0])))))));
                }
            }
        }
    }
    var_21 += (max(var_5, var_6));
    #pragma endscop
}
