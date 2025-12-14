/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = (3753 <= 3729);
                var_10 -= ((((((var_8 != (arr_3 [i_1]))))) == var_3));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                arr_11 [i_2] [i_2] = ((((arr_8 [i_3]) ? ((var_0 ? var_9 : 86)) : (((!(arr_2 [i_3])))))));
                var_11 ^= ((((((((var_4 ? var_7 : var_8)) + 2147483647)) << (var_5 - 347388432145035001))) >> (var_9 - 6130)));
            }
        }
    }
    #pragma endscop
}
