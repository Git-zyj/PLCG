/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((((var_4 || var_2) ? var_6 : (!5))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = ((-(arr_2 [i_0])));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_6 [i_0] [i_0] [i_0] = ((-(((((arr_3 [i_0] [i_0]) * var_6)) - 3118808935820441573))));
                    var_14 = ((52 / (var_10 * var_2)));
                    var_15 += (203 + -3118808935820441574);
                }
                arr_7 [i_0] = ((-var_11 * ((((3118808935820441573 != 52) * (arr_0 [i_1 + 2] [i_0 + 2]))))));
                var_16 += ((36068 >> (44343 - 44340)));
            }
        }
    }
    var_17 = ((var_10 << (((-4422 + 4450) - 27))));
    #pragma endscop
}
