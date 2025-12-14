/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (max((arr_4 [i_0]), (var_10 < var_6)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 19;i_4 += 1)
                            {
                                var_14 = (min(var_14, ((-(min(((23 ? var_0 : 1)), (min((arr_1 [13]), (arr_16 [6] [i_1] [i_2] [i_2] [i_4 - 1])))))))));
                                arr_17 [1] [i_3] = (min(((min((((!(arr_4 [i_0])))), (min(1, (arr_9 [i_0] [i_0] [i_0] [i_0])))))), ((37 ? 169 : 1))));
                            }
                            arr_18 [i_0] [i_3] [i_0] [4] [i_0] = ((-1 > (((((1 ? (arr_2 [i_0]) : (arr_16 [i_3 + 2] [i_0] [15] [i_0] [i_0])))) ? 545460846592 : ((min(var_8, (arr_7 [i_0]))))))));
                        }
                    }
                }
                var_15 ^= (((((~(arr_11 [i_0] [i_0] [i_0] [8] [i_0])))) ? ((-(max(var_12, var_3)))) : (((((1 ? 1 : 12))) ? 2147483647 : ((max(12, 244)))))));
                var_16 = (min(var_16, -var_5));
            }
        }
    }
    var_17 = var_11;
    #pragma endscop
}
