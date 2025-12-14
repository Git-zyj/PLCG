/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_15;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_21 = (((~-30974) ? (arr_1 [i_0]) : (((arr_2 [i_0]) ? var_15 : 31332))));
        arr_3 [i_0] = (arr_1 [i_0]);
        var_22 = 0;
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1 - 1] = var_14;

        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            var_23 &= ((((((~(~-16556))) + 2147483647)) << (((((min(-30973, (~var_17))) + 8690256877885598532)) - 30))));
            var_24 = (max(var_24, ((min(((((34203 ? 28502 : var_7)))), 12288)))));
        }
        var_25 = (arr_5 [i_1] [i_1]);
        /* LoopNest 3 */
        for (int i_3 = 4; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_26 ^= ((~((((0 ? (arr_20 [i_6] [i_3] [i_4] [i_5] [i_6]) : (arr_4 [i_3])))))));
                            arr_23 [i_6] [i_5] [i_4] [i_3 + 1] [i_1] = (((((min(var_2, var_14)) ? 9869 : 30974))));
                            arr_24 [i_4] [i_4] = ((-(arr_9 [12] [i_1])));
                            arr_25 [i_1] [i_3 - 3] [i_3 - 3] = (min((min((((var_2 << (11869112923142984041 - 11869112923142984027)))), (arr_21 [i_1 - 2] [i_5]))), ((((arr_9 [i_3] [i_3 - 2]) << (6919 - 6907))))));
                            arr_26 [14] [14] = ((((max((min(var_18, var_19)), ((min(31580, var_9)))))) ? (((!var_3) ? 33956 : (var_14 / 35))) : (((((min(var_17, var_16)) >= 17951))))));
                        }
                        var_27 = ((-(((0 <= (arr_18 [i_1 - 2] [i_3 + 2] [i_3 - 2]))))));
                    }
                }
            }
        }
    }
    for (int i_7 = 2; i_7 < 20;i_7 += 1) /* same iter space */
    {
        var_28 = (min(var_28, ((max(var_16, (var_8 >= var_19))))));
        var_29 = ((0 - (0 + 1)));
    }
    var_30 *= 28782;
    #pragma endscop
}
