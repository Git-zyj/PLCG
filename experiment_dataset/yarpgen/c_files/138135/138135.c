/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = (!var_8);
                    var_13 = ((((var_3 ? (arr_4 [i_0] [i_1]) : var_11)) | 4095));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 8;i_4 += 1)
        {
            {
                var_14 = ((var_0 >> (-4082 + 4108)));
                var_15 = (arr_10 [i_3]);

                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    var_16 = (((((((arr_3 [i_5]) + (arr_10 [i_3]))) + (((max(var_8, var_2)))))) % ((max(var_5, (arr_14 [4] [i_5] [i_4 - 2]))))));
                    var_17 = ((((var_1 ? -var_8 : (arr_15 [i_5 - 1] [i_5 - 1] [3] [i_4 + 4]))) >> (35346 - 35327)));
                    arr_16 [i_5] = (arr_5 [i_4] [i_5]);
                    var_18 = (max(((var_8 ? ((12 ? (arr_10 [i_5]) : var_11)) : (219461343 | -62))), (((((((arr_0 [i_3] [i_5]) || 3603087232856587096))) >= ((444454465 ? 30086 : var_8)))))));
                }
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_19 = ((609155898 ? (((arr_9 [i_3] [1]) ? 4063 : 18446744073709551614)) : (((-36 ? 8796093005824 : -72)))));
                            var_20 = var_8;
                            var_21 = (max(var_21, (((((max(63, (arr_7 [10] [6] [i_7])))) ? (!var_8) : 15)))));
                            var_22 = (arr_12 [i_4 - 1] [i_6 - 1]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
