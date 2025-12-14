/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] = ((+(((arr_7 [i_1 + 2] [i_0]) ? (arr_7 [i_1 + 3] [i_0]) : (arr_7 [i_1 + 1] [i_0])))));
                    var_14 = (min(var_14, (arr_7 [i_0] [2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 += 18395580177860514207;
                                var_16 -= (((((1023 ? 1039 : 1))) ? (((((arr_12 [2] [4] [i_2] [i_2] [i_2]) ? 2290273766 : 1091626443)) & (min(1, 2132136321)))) : var_2));
                                var_17 = (((1 - -1149224694) ? 789280993 : ((((arr_2 [3] [i_4 + 1] [i_1 - 1]) < 1)))));
                            }
                        }
                    }
                    var_18 = ((((min((arr_3 [i_0] [i_1]), (arr_2 [i_2 + 2] [i_1 - 2] [i_0])))) | (((1 ^ 337338880) ? 455759139898484754 : ((((arr_8 [10] [i_1] [i_2]) ^ (arr_4 [i_2]))))))));
                }
            }
        }
    }
    var_19 = ((((max(-1586562250, 8388607))) ? ((-1024 ? var_4 : (var_3 == var_10))) : var_0));
    var_20 &= -1;
    #pragma endscop
}
