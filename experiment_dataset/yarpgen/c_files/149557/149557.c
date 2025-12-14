/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_2 - 1] = (max((min((arr_8 [i_1]), (arr_8 [i_1]))), ((((min(var_0, var_4))) ? (arr_8 [i_1]) : (min(10295502030168976819, 1))))));
                    var_10 += ((-var_1 ? (max(var_1, (arr_3 [i_0]))) : (((((min(var_6, var_2))) << ((((~(arr_1 [i_0]))) + 6619113)))))));
                    arr_10 [i_1] [i_1] [i_2 - 1] [i_2] = ((var_3 != (min((var_8 > 31), ((-86514761 ? (arr_7 [i_0] [i_1 - 1] [i_2]) : 7781315060389905857))))));
                }
            }
        }
    }
    var_11 = (max((((!(~var_2)))), var_7));
    var_12 |= (var_6 / var_1);
    #pragma endscop
}
