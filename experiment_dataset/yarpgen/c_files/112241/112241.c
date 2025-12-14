/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((var_7 ? var_5 : (max((~var_6), -var_4)))))));
    var_11 = (~var_9);
    var_12 = (((~var_1) ? var_2 : (max(((max(var_0, 140))), var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_13 = min((((!(arr_0 [i_0])))), 3381285120);
                    var_14 = ((max(65535, (arr_1 [i_2]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 = ((((((-6568952318800878495 || (arr_12 [i_3]))))) ? ((-(arr_10 [i_0] [i_3] [i_2]))) : -14739));
                                var_16 = -var_8;
                                var_17 = (((!(arr_8 [i_1] [i_1] [i_1]))));
                            }
                        }
                    }
                }
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    arr_17 [i_0] [i_5] [i_5] = ((((min((~var_0), (-20783 == 2740335247)))) ? ((~((-7129009537930113136 ? 32109 : var_6)))) : (~var_2)));
                    arr_18 [i_1] [i_5] = var_5;
                }
                var_18 ^= (max(((((((max(var_6, 1)))) != ((33676140 * (arr_10 [i_1] [i_1] [i_0])))))), (~var_1)));
            }
        }
    }
    #pragma endscop
}
