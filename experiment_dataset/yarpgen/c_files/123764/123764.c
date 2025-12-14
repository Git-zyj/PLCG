/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += -56791;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 &= (min(37424, 4));
                    arr_9 [i_0] = ((((arr_2 [i_0]) != ((9223372036854775802 ? var_14 : var_9)))) || (((var_12 ? var_1 : 24576))));
                    var_17 = ((-var_8 ? var_10 : -36028659580010496));
                }
            }
        }
    }
    #pragma endscop
}
