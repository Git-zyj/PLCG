/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 ^= (min(var_5, ((var_10 ? (arr_0 [i_1 + 1] [i_1 - 3]) : (arr_0 [i_1 - 2] [i_2])))));
                    var_21 = (max(var_21, var_14));
                    var_22 = (3614650552 ? 49 : 30469);
                    var_23 = ((((((var_3 + 2147483647) << (((var_12 + 61) - 26))))) && (1 * var_6)));
                }
            }
        }
    }
    var_24 = (max(var_24, var_11));
    #pragma endscop
}
