/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (((((((((450011595601504463 ? 4907 : (arr_0 [i_1])))) || (arr_0 [i_1])))) >> (((arr_7 [i_2] [i_0 + 2] [i_0 + 2]) ? (2906053763 && 1347500194) : -var_0)))))));
                    arr_9 [i_0] [i_1] [13] = (((((((var_15 / (arr_0 [i_2])))) ? -2906053762 : (((arr_8 [i_0] [i_1]) * (arr_1 [i_0]))))) * (((max((arr_3 [i_0 - 1]), (arr_8 [i_0 - 1] [i_0 - 1])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [9] [9] [i_2] [i_3] [i_4] [i_3] [i_4] = 2906053772;
                                var_18 = (max(1388913554, (((max((arr_1 [i_0]), 1055402960))))));
                                var_19 += ((((((max((arr_5 [0] [11]), 1388913555))) & (arr_10 [0] [i_1] [i_1] [i_1]))) * ((((arr_12 [i_2]) - (arr_12 [i_3]))))));
                                var_20 = (min(var_20, ((min(((((~(arr_10 [i_0] [i_1] [i_3] [i_4]))) | (((arr_5 [i_0] [11]) ? 1388913539 : (arr_10 [i_4] [i_1] [i_2] [i_4]))))), (((~(var_6 ^ 2906053779)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (max(((((var_15 > var_15) > var_0))), (min(2147126955, (-9223372036854775807 - 1)))));
    #pragma endscop
}
