/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((min(28731, 58939)), ((max(134, 1)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 = 1263675622;
        var_14 &= (!32764);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] = ((!(((max((arr_3 [i_1]), 14775399365596172131))))));
        var_15 = (max((((min((arr_4 [i_1] [i_1]), var_7)))), (min(var_6, (min((-127 - 1), (arr_3 [i_1])))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_16 *= (max(((max((arr_12 [i_4] [i_3]), (max((arr_10 [i_2] [i_2]), 60670))))), ((max(17325693121627234155, 9911432809915329247)))));
                            arr_16 [i_3] [i_3] = ((!((max((!17660), var_2)))));

                            /* vectorizable */
                            for (int i_6 = 1; i_6 < 22;i_6 += 1)
                            {
                                var_17 = (arr_15 [0] [i_4] [i_5] [i_6]);
                                arr_19 [i_3] [i_3] [i_4] = 2037016625258494473;
                                var_18 = (!var_8);
                                var_19 *= (!1825301277);
                            }
                            for (int i_7 = 1; i_7 < 21;i_7 += 1)
                            {
                                var_20 = (max(var_20, ((min(((min(var_1, 17325693121627234137))), (max(var_1, 9911432809915329247)))))));
                                arr_23 [i_3] [i_3] [i_4] [i_5 - 1] [i_7 + 2] = (max((min((arr_8 [i_2] [i_3]), (min((arr_12 [i_2] [i_3]), (arr_21 [i_2] [22] [i_2] [i_2]))))), (!13551491217156712590)));
                                var_21 = (min(var_21, ((min(((max(var_8, 255))), (max((min(8535311263794222369, 15717468198487981578)), ((min(575, var_0))))))))));
                            }
                        }
                    }
                }
                arr_24 [i_3] = (min((min(((min(2951, (arr_18 [i_2] [i_3])))), (arr_6 [i_2]))), ((max(var_4, (arr_14 [i_3] [i_3] [i_3] [i_2] [i_2] [i_2]))))));
            }
        }
    }
    var_22 = (max(((max(19026, (!114)))), (max(1455287466, 14885))));
    #pragma endscop
}
