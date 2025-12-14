/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (min(-6530709928986552613, 1087866695));
    var_19 = (((var_17 ? 3207100601 : 17128872543725956746)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 ^= var_1;
                    arr_8 [i_1] [i_2] = ((((((min(1087866700, (arr_6 [i_0 - 1] [1] [i_2])))) ? (max(var_17, var_13)) : (arr_3 [i_1 + 1] [1]))) >= (((arr_2 [i_2] [i_1 - 1] [4]) ? 13615 : -1))));
                }
            }
        }
    }
    #pragma endscop
}
