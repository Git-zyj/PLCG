/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 11393;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 ^= ((!(((((!(arr_4 [4]))) ? (((140 && (arr_1 [i_0])))) : (((!(arr_0 [i_0 - 1])))))))));
                    var_19 = (max(var_19, (!8191)));
                    arr_7 [i_2] [i_1 + 2] = ((~(((var_4 ? 5 : (arr_0 [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
