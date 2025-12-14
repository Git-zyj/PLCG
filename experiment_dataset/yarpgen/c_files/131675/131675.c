/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_13 [i_2] = ((((1926287585 < (((!(arr_9 [i_2])))))) ? ((((-1926287585 <= (arr_6 [i_3]))) ? (((arr_12 [i_0] [i_1] [i_0] [i_3]) ? 2561913270 : var_8)) : (arr_7 [i_1] [i_2]))) : ((max((~var_9), (min(var_1, 1926287588)))))));
                            arr_14 [i_3] [i_3] [i_2] [i_3] [i_3] [i_3] = (!((min(var_0, (arr_5 [i_1] [i_1 - 2] [i_1 - 2])))));
                            var_10 = (max(var_10, (((!((!(arr_7 [i_1 - 2] [i_1 - 1]))))))));
                        }
                    }
                }
                arr_15 [i_1] [i_0] &= ((~(max(((-1926287585 - (arr_0 [i_0]))), (((arr_1 [i_0]) & 970536102250648366))))));
            }
        }
    }
    var_11 = (min(var_5, (((((var_3 ? var_6 : 0))) ? var_5 : var_0))));
    var_12 &= var_3;
    #pragma endscop
}
