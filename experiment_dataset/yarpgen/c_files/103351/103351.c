/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] = var_4;
                    arr_11 [i_0] = ((((min((((arr_0 [i_2]) << (((arr_6 [1] [i_0]) - 84)))), (arr_1 [i_2] [i_1])))) == ((274877906943 ? 274877906928 : (((-1881575733453763522 ? (arr_2 [i_0]) : (arr_3 [i_0] [i_1] [i_2]))))))));
                }
            }
        }
    }
    var_11 = 87;
    var_12 = (((((min(var_2, var_9)))) ? (((-(var_2 < var_9)))) : ((max(var_0, var_9)))));
    #pragma endscop
}
