/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [11] [i_2] = ((-1790154737802345328 * ((((!((min((arr_3 [i_0] [i_1]), var_9)))))))));
                    var_17 = (max(var_17, ((((((((((arr_4 [i_1] [i_2]) > var_10)))) <= (((arr_2 [i_0] [i_0] [i_2]) ^ var_5)))) ? (min((-2147483647 - 1), (((arr_3 [i_1] [i_0]) ? var_10 : (arr_6 [i_1]))))) : (arr_3 [i_0] [i_1 - 1]))))));
                    var_18 = (max(var_18, (((((-var_14 / ((-(arr_6 [i_1]))))) / var_3)))));
                }
            }
        }
    }
    var_19 = var_8;
    var_20 ^= ((-(((!((max(var_4, var_15))))))));
    #pragma endscop
}
