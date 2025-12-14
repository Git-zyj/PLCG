/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_0] [i_3] = (((arr_9 [i_0] [i_0]) ? (arr_7 [i_0]) : (max((arr_9 [i_2] [i_0]), (arr_7 [i_0])))));
                            var_11 = (arr_0 [i_3] [i_3]);
                            arr_11 [14] &= ((~((-(arr_9 [i_3 - 1] [16])))));
                            var_12 = (min(var_12, ((max(((826121932 >> (var_10 - 6086889454389723052))), (arr_3 [i_3 - 1] [i_3 - 1]))))));
                            arr_12 [8] [i_3] [i_2] [i_1] [8] &= 863841517;
                        }
                    }
                }
                arr_13 [i_0] = (((((!((max(-77, var_3)))))) >> ((((((max(1, var_10))) & (arr_4 [i_0]))) - 4913436769132765857))));
                var_13 = (min(var_13, (arr_9 [14] [14])));
                var_14 = var_3;
            }
        }
    }
    var_15 = ((826121932 ? 3468845340 : 3619050233701417855));
    var_16 = -1278237676;
    var_17 = (var_2 || 160);
    #pragma endscop
}
