/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_20 += (max((63 || -1), (((4294967232 ? var_18 : (arr_8 [i_0] [i_0] [i_0] [i_3 - 2]))))));
                            arr_13 [i_0] = ((((max((!10976537376149242690), (max(var_16, 1501472680))))) ? (((((max((arr_4 [i_0] [i_0]), (arr_3 [i_0] [i_0])))) ? (arr_5 [i_3 - 3] [i_3 - 3] [i_0]) : 65))) : (min(var_18, (((arr_1 [i_0] [i_0]) & (arr_11 [i_0] [i_0] [i_0] [i_0])))))));
                        }
                    }
                }
                var_21 = (min(var_21, ((max((arr_6 [i_0] [i_0] [i_1 + 1] [i_1 + 2]), (((!(arr_6 [i_0] [i_1] [i_1 - 1] [i_0])))))))));
                var_22 = (min(var_22, (arr_7 [i_0] [i_1 + 2])));
                var_23 = (max(var_23, ((((((arr_2 [i_0] [i_1 + 1]) % 10976537376149242690)) << (((min(180, ((7470206697560308925 ? (arr_7 [i_0] [i_0]) : (arr_7 [i_0] [i_0]))))) - 179)))))));
            }
        }
    }
    var_24 &= var_6;
    var_25 -= (((((var_1 ? var_5 : (((min(var_13, 251))))))) ? (max(1148417904979476480, 7)) : ((var_1 << (var_2 - 1166911733)))));
    var_26 = var_10;
    #pragma endscop
}
