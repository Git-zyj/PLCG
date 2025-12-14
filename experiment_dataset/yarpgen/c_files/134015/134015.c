/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((((~-95) * var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = ((+((-((((arr_5 [i_1] [i_0] [i_0]) > var_16)))))));
                var_20 = (min(var_20, ((max((((~var_13) ? var_1 : 6643385293263928248)), (max((max(var_9, var_4)), (((!(arr_5 [i_1] [i_0] [i_0])))))))))));
                var_21 = ((((((max(var_17, var_7))))) ? (!var_10) : 130));
                var_22 &= (!((((((-(arr_0 [i_1])))) ? var_16 : (arr_1 [i_0] [i_1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_23 = (min(var_23, (((~((var_11 ? (~var_6) : (~113))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_24 = ((var_16 + (((arr_11 [i_2 - 1]) ? 4628744772033563595 : (arr_11 [i_2 - 1])))));
                            arr_16 [i_5] [i_4] [i_3] [i_2] &= (((((~(~var_6)))) ? (arr_13 [i_2] [i_3] [i_4] [i_5]) : ((((arr_9 [i_2] [i_4]) & var_0)))));
                        }
                    }
                }
                arr_17 [i_3] = ((var_13 < ((-var_6 ? var_15 : (max(var_8, 0))))));
            }
        }
    }
    var_25 = ((((((((0 ? 1418799804 : -90))) ? var_14 : -6310761327741150023))) ? (var_5 / var_10) : (max((max(-2093150719375090384, -1916703828627959262)), (((var_13 ? var_2 : var_15)))))));
    #pragma endscop
}
