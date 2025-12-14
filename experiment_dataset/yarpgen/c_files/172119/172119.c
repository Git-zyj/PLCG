/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((var_17 ? (0 - -13832) : ((12288 ? 11811 : var_0)))), var_2));
    var_19 = ((((min((var_0 + 719325389), var_14))) ? var_13 : (((var_12 * 53238) ? 53256 : -9191))));
    var_20 -= ((0 ? (((-2040 + 2147483647) << ((((50404 ? var_15 : 53716)) - 55)))) : (!-var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_21 ^= (min((((!((((arr_2 [i_1] [i_1]) ? 11811 : 113)))))), (min(1, -86))));
                arr_5 [i_1] = (((arr_1 [i_0]) ? (!0) : ((-2012 ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_1] [i_0] [i_0] [i_3] = ((!57191) ? 1 : (((((var_16 ? (arr_8 [i_3]) : (arr_3 [i_3] [i_3])))) ? 49 : (~15840))));
                            var_22 = (max(var_22, (((!((min((((arr_8 [15]) ? 132 : (arr_1 [i_0]))), (((~(arr_0 [i_0] [i_3]))))))))))));
                            var_23 -= 226;
                            arr_11 [i_1] [i_1] = (max(0, (!-5316162286904510047)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
