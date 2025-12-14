/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = 1712245967;
        arr_2 [i_0] = (((((arr_1 [i_0]) ? 0 : (arr_1 [i_0]))) & (((arr_1 [i_0]) ? 759408978 : (arr_1 [i_0])))));
        var_14 = (max(var_14, ((((((((arr_0 [i_0] [1]) ? -759408978 : (arr_0 [i_0] [i_0]))))) ? (((((var_7 ? (arr_0 [i_0] [i_0]) : 17130)) | ((max((arr_0 [i_0] [10]), (arr_1 [i_0]))))))) : -759409001)))));
        var_15 = (var_9 || (((2529137399 ? ((var_1 ? (arr_1 [i_0]) : -123)) : (arr_1 [i_0])))));
        var_16 = ((~(min((~var_0), (max(0, 1062765016677411757))))));
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            arr_8 [i_1] [i_1 + 1] [i_1 + 1] = ((-((((min(-477910229, 0))) ? -1231759058 : 48797))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        var_17 = (min(var_17, (arr_5 [i_3])));
                        arr_14 [i_1 - 1] [i_2] [i_3] [17] = -3781976238131363248;
                        var_18 = (min(var_18, (arr_11 [i_1] [5] [16] [2])));
                    }
                }
            }
        }
        var_19 = ((((~(arr_3 [i_1])))) < (min((16749 & 4214282213), -123)));
        var_20 = 3669253407;
    }
    var_21 = var_5;
    var_22 = ((!((max((max(var_2, var_9)), var_0)))));
    var_23 = 48803;
    #pragma endscop
}
