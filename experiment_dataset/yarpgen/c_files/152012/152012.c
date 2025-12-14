/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 9007199254740984;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_21 ^= (min(((max((arr_2 [12]), (arr_8 [i_0] [i_1] [i_1] [12])))), (max(1, ((var_11 ? var_4 : 3253274188136454459))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_22 = (min((max(22343939330169765, (arr_14 [i_4] [i_1] [16] [i_2 - 1]))), ((((var_9 ? (arr_17 [i_0] [i_1] [i_2] [i_1] [i_3] [i_4]) : 1149641438))))));
                                var_23 = (min(var_23, ((min(((3330629914881424327 ? (0 == -6620730156786669689) : ((1008806316530991104 ? var_8 : 4503599625273344)))), ((min((((arr_8 [i_1] [10] [i_3] [10]) ^ (arr_18 [i_0] [i_0] [i_0] [i_3]))), (((1109987601 >> (-16978 + 16990))))))))))));
                                var_24 = (min(var_24, (((((((arr_8 [i_0] [i_1] [i_2 + 1] [i_3]) ? (arr_8 [i_4] [i_1] [i_2 - 1] [i_3]) : var_8))) && (arr_14 [1] [i_1] [i_1] [i_1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
