/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 ^= var_8;
                arr_4 [i_0] = (((((var_13 ? var_9 : var_8))) == (((var_13 ? var_0 : 28)))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_16 += ((~((var_1 << ((var_7 << (var_11 - 763549097)))))));
                    var_17 *= max((max((var_3 / var_2), ((var_3 ? var_3 : var_10)))), ((max((!240), var_2))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                var_18 = (((((((max(var_6, var_9))) ? (!var_4) : (max(6022520698326809199, var_12))))) || var_11));
                arr_15 [i_3] = ((var_2 >= (((((var_3 != (-2147483647 - 1)))) & (~var_3)))));
            }
        }
    }
    var_19 = ((((~var_3) ? (min(var_9, 4659459094706809642)) : (var_11 != -20))));
    #pragma endscop
}
