/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_11 = ((1 ? 11986645048615758648 : ((((!((max(-653391974414548974, 0)))))))));
                    var_12 = (max(var_12, ((min(((((((arr_6 [i_2] [i_2 + 2] [i_0] [i_0]) & 1))) ? ((249 & (arr_8 [i_0] [i_1] [i_1] [i_2 + 4]))) : (((12320700116213942251 && (arr_0 [i_1])))))), -124)))));
                    arr_9 [i_0] [i_0] [4] [i_0] = ((((max((arr_6 [i_2 - 1] [i_2 + 4] [i_2 + 1] [i_2 + 2]), (arr_6 [i_2 + 3] [i_2 + 1] [i_2 + 2] [i_2 + 3])))) >= (((!(arr_5 [i_2 + 2] [i_2 + 1] [i_2 + 4] [i_2 + 3]))))));
                    arr_10 [i_0] [i_0] [i_1] [i_2 - 1] = (!var_0);
                }
            }
        }
    }
    var_13 = ((1 || (((1 >> (!var_1))))));
    #pragma endscop
}
