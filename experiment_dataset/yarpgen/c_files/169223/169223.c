/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [10] [i_0] [i_4 - 2] = (arr_2 [i_1 + 1]);
                                arr_14 [i_1] [12] = (((min((arr_1 [i_1 + 1]), (arr_8 [i_1 - 2] [i_1 - 2] [i_1] [i_4 - 3]))) >= var_8));
                                arr_15 [i_1] [i_1 + 2] [i_2] [i_3] [i_4 - 2] [i_0] = ((((((arr_0 [i_1 + 1] [i_2 - 3]) > (arr_8 [i_1 + 2] [1] [i_1] [i_4 - 3])))) & (((!(arr_4 [i_1] [i_1] [i_1 + 3]))))));
                                arr_16 [i_0] [i_1] [i_2 + 2] [i_3] = ((3 ? ((min((arr_12 [i_0] [i_0] [i_2 - 2] [i_3] [i_4]), (min(3, (arr_6 [i_1])))))) : (arr_12 [i_1 - 2] [i_4 + 1] [i_4] [3] [i_4])));
                                var_11 ^= (((((arr_7 [6] [i_1 - 2] [i_2 - 1] [i_3] [i_4]) % (((arr_5 [6] [i_1 + 1] [i_1]) % var_6)))) >= (((((max((arr_5 [i_0] [i_0] [i_0]), (arr_12 [i_0] [i_1 + 2] [i_2] [i_1 + 2] [i_4 + 2]))) >= (arr_12 [i_0] [i_1] [i_2 - 1] [i_1] [i_4])))))));
                            }
                        }
                    }
                    var_12 = ((((((((arr_5 [i_1] [i_1 + 1] [i_1 + 1]) ^ var_1))) ? (arr_12 [i_0] [i_1 + 2] [i_1] [3] [i_2]) : (((arr_10 [i_0] [i_0] [i_1] [i_1 + 3] [i_2 - 2] [i_2] [i_2]) ^ 336848722133584556)))) & 255));
                    arr_17 [i_0] [i_1] [i_1] = ((((min((arr_7 [i_2] [i_1 + 3] [i_2 - 2] [i_1 - 2] [i_1 + 3]), (arr_11 [i_1] [i_0] [i_2 - 2] [15])))) >= (((arr_7 [i_1 - 1] [i_1 + 3] [i_2 + 2] [i_2] [i_1 + 3]) ? (arr_7 [11] [i_2] [i_2 - 2] [i_1] [i_1 + 1]) : (arr_11 [i_1] [i_1] [i_2 - 1] [i_1])))));
                }
            }
        }
    }
    var_13 = (min(var_13, ((min(var_6, var_4)))));
    var_14 = (min(((((min(var_5, var_7))) ? (var_9 || var_4) : var_3)), ((((min(var_1, var_5)) >= var_6)))));
    #pragma endscop
}
