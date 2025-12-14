/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = ((3225687644881727330 ? -32 : 64082));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_16 += ((1458 + (arr_7 [i_0])));
                        arr_11 [i_2] = ((min(15221056428827824285, var_7)));

                        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                        {
                            var_17 = (max(var_17, (((!((((var_14 ? var_13 : (arr_8 [i_0] [10] [i_0] [10] [i_0]))))))))));
                            var_18 &= ((((((arr_8 [i_0] [i_1] [i_2] [i_3] [i_0]) ? 1 : (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (arr_8 [i_0] [i_1] [i_2] [i_3] [i_4]) : ((min((arr_0 [i_0]), ((var_1 ? 16697 : var_13)))))));
                            var_19 = (arr_7 [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_20 = (min(var_20, ((((!var_7) || (arr_10 [i_0]))))));
                            arr_18 [i_5] [i_5] = ((((!(((var_9 ? var_2 : var_1))))) ? (!var_12) : ((var_12 ? (((!(arr_4 [10] [i_0] [i_2])))) : (arr_0 [i_2])))));
                            var_21 = 11959;
                            var_22 = var_11;
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            var_23 = ((1 <= (((3225687644881727341 && (arr_4 [i_0] [i_3] [i_2]))))));
                            var_24 = (max(var_24, (((var_12 ? ((0 ? (arr_19 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) : (arr_19 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0] [i_1]))) : ((((var_7 || (arr_6 [i_0] [i_0]))))))))));
                            arr_23 [0] [i_6] = var_14;
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_6] = (arr_10 [1]);
                        }
                        var_25 = (max(var_25, ((max((max(16697, (max(var_7, var_5)))), (((var_5 && (arr_9 [i_0] [i_1] [i_2] [i_3])))))))));
                    }
                }
            }
        }
    }
    var_26 = (min(var_26, (((var_6 ? ((((min(var_12, 11170570998370558013))) ? 0 : (min(4495047819383345981, 25165824)))) : (~var_12))))));
    #pragma endscop
}
