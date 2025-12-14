/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_10 != (~var_13)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_21 = ((((var_16 ? (arr_4 [i_0]) : (arr_4 [i_0])))) ? (((arr_4 [i_1]) & var_3)) : (~var_4));
                    arr_9 [i_0] &= (min((arr_5 [i_0]), var_5));
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((max(1898328726, 2425806563)) / 1059591989);
                }
            }
        }
    }
    #pragma endscop
}
