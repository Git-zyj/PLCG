/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [13] [i_1] [i_1] [i_0] = ((((max((arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1]), (arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1])))) ? 1 : (arr_3 [i_1 + 1])));
                    arr_9 [i_0] [i_2] = (min(1, 9002));
                    var_11 = (!0);
                    var_12 = (min(var_12, ((min(((max((arr_0 [i_1 + 1] [i_1 - 1]), (arr_0 [i_1 - 1] [i_1 - 1])))), ((16569065045086930031 >> (77 - 62))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                var_13 = ((max((arr_12 [i_3] [i_3] [i_4]), (arr_6 [i_3] [i_4] [i_3] [i_4]))));
                arr_14 [i_3] |= ((((554846212 >> (((arr_2 [i_3]) - 81))))));

                for (int i_5 = 4; i_5 < 8;i_5 += 1)
                {
                    var_14 = (max(var_14, ((((max(1, 4294967295)) | (min((arr_4 [i_5 + 3] [i_5] [i_5]), 1)))))));
                    var_15 &= (min((arr_13 [i_5 + 2] [i_5 + 2]), (max(-1, 3740121081))));
                }
            }
        }
    }
    #pragma endscop
}
