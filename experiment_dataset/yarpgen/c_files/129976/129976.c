/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((26750 ? var_10 : ((((var_13 && (((-26742 ? 176 : var_9))))))))))));
    var_18 = (var_4 > (((((-26760 ? var_15 : 3558583169))) ? var_6 : ((var_4 ? var_0 : 29)))));
    var_19 += var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [8] [i_1] [8] |= ((((((((arr_0 [13]) ? -2 : (arr_2 [1] [i_0])))) ? (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 3558583169)) : (((-26742 ? -26755 : 65535))))) | (((33423 ? (arr_3 [i_0] [i_1 + 1] [14]) : (arr_4 [i_1 + 1] [i_1 + 2] [i_1 - 1]))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_1] [4] [i_1 - 1] [i_1] [i_0] = (((((((0 ? (arr_10 [i_0] [i_1] [i_2 + 1] [i_3]) : -94)) ^ 210))) ? (((((((arr_2 [i_0] [i_0]) ? (arr_4 [i_3] [i_2] [i_1 + 2]) : 74542073689120524)) <= ((((arr_9 [i_2 + 1] [i_2 + 1]) ? (arr_4 [i_0] [i_2] [i_0]) : (arr_2 [i_0] [i_0])))))))) : (((arr_9 [i_0] [i_0]) ? ((((arr_10 [i_1] [i_1] [i_1] [i_0]) << (arr_2 [i_3] [i_0])))) : (((arr_9 [i_0] [i_0]) ? 944668313 : (arr_7 [i_0] [i_0] [i_0])))))));
                            var_20 ^= (((arr_6 [i_3] [6] [i_0]) - (((((((arr_8 [10] [i_2] [10]) ? -2 : 12138))) ? (-290316949 / 18580) : (arr_4 [i_2 + 3] [i_1 + 2] [i_1 + 1]))))));
                        }
                    }
                }
                arr_12 [2] [i_1] [i_0] = (arr_4 [i_0] [15] [i_0]);
                var_21 *= arr_3 [i_1 - 1] [i_1] [14];
            }
        }
    }
    #pragma endscop
}
