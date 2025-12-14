/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    var_11 = 362773475;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = var_9;
                var_13 = (max(var_13, ((((3012917638 / 4409032133425551372) != ((2057646606 ? var_4 : (arr_3 [i_1] [i_0]))))))));
                arr_6 [7] = max(((var_7 ^ (((-1 ? 21053 : 1))))), (arr_2 [i_1] [i_1]));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_12 [i_2] [i_1] [i_2] [i_2] [i_2] = ((-(((var_3 < (max((arr_8 [i_2] [2] [2] [2]), (arr_5 [15] [i_1]))))))));
                            var_14 |= ((((((var_8 - 15486863922029665320) ? ((max((arr_3 [i_0] [i_3]), 4294967265))) : (max(var_1, -1))))) ? 0 : ((((0 + var_1) ? var_2 : ((0 ? (arr_4 [12] [i_1]) : (arr_2 [i_2] [1]))))))));
                            var_15 = (((~(~35591))));
                            var_16 = (arr_5 [i_1] [i_3]);
                        }
                    }
                }
            }
        }
    }
    var_17 = ((((((var_9 - -823667711) || var_9)))) ^ var_1);
    #pragma endscop
}
