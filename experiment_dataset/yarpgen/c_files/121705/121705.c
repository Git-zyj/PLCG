/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_2] [i_1] [i_0] [i_0] = ((-var_6 / (var_4 * var_2)));
                        arr_12 [9] [i_1] [i_0] [i_1] = ((-3387343565595959072 ? var_6 : (((var_4 >> (var_5 - 29308))))));
                    }
                }
            }
        }
        var_10 ^= (((!var_5) <= var_5));

        for (int i_4 = 1; i_4 < 7;i_4 += 1)
        {
            var_11 = ((var_8 - (!var_6)));
            arr_16 [i_0] [i_0] = var_6;
        }
        var_12 = (((var_3 < var_8) < (~var_8)));
    }
    var_13 ^= (~var_5);
    #pragma endscop
}
