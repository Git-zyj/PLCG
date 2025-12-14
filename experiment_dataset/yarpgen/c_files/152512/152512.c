/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_3] [i_3] [11] [11] [i_0] = (arr_8 [i_3] [i_1] [7]);
                                var_14 = (((7945 ? var_5 : ((2113929216 ? var_10 : 0)))));
                                var_15 = -274836054855715889;
                                var_16 = -1;
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [i_2] [i_2] = ((((min((arr_2 [i_2 + 1] [6]), var_12))) ? (arr_5 [i_1]) : (153 != var_1)));
                }
            }
        }
    }
    var_17 = (var_5 || 1);
    var_18 = (max(var_18, var_7));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    var_19 -= (arr_23 [i_6] [i_6] [i_6] [i_6]);
                    var_20 = (((((((arr_17 [i_5]) || -1619808790158321373)))) ^ ((((min(var_7, (arr_18 [1])))) ? (min(81, 676874736)) : (!var_4)))));
                }
            }
        }
    }
    #pragma endscop
}
