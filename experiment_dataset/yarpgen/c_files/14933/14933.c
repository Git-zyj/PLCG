/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((((16383 > 479490659) & var_4))), ((((min(1, -1))) ? (max(2632201884, var_8)) : 4))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((((var_13 && ((((arr_3 [i_0] [i_0]) ? 27499 : 24551)))))) > ((((arr_2 [i_0]) && (arr_5 [i_0] [i_0] [i_2] [i_0])))));
                    arr_8 [i_0] [10] [i_2] = (((((+(min((arr_2 [i_0]), -1048068336709906088))))) || ((max((!1), (arr_2 [i_0]))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    arr_18 [i_3] [i_4] [6] = (((65535 ? 1 : (arr_10 [i_3] [i_5]))));
                    var_19 = (arr_13 [i_3]);
                    var_20 = (max(var_20, (((((max((max((arr_12 [i_3] [i_3]), (arr_14 [9] [i_4]))), (min(var_1, 96))))) ? 40985 : ((((1 || 4294967295) > ((0 ? 255 : 204))))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_21 = (min(0, ((((min((arr_9 [i_3]), (-2147483647 - 1)))) ? var_2 : (((172 ? 1 : 785305497)))))));
                                var_22 = ((((min(-1, (1 > 42644)))) ? ((1 * (((-1 ? 1 : 83))))) : ((min((((arr_24 [i_3] [i_3] [8] [i_6] [i_7]) >> (65515 - 65507))), (!260046848))))));
                                var_23 = (((((0 & (arr_24 [i_7 - 1] [i_4] [i_4] [i_7] [i_7])))) ? (((65535 && ((max((arr_9 [3]), 0)))))) : ((max((arr_14 [i_7 - 1] [i_7 - 1]), (arr_14 [0] [4]))))));
                                var_24 = (~var_3);
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = 0;
    var_26 = 1023;
    #pragma endscop
}
