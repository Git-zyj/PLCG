/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((!((((((var_4 ? var_15 : var_6))) ? (arr_2 [i_0]) : (((var_15 ? (arr_0 [i_0]) : var_11))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_18 = ((-(((((arr_6 [i_3] [i_2] [i_0]) ? var_14 : 110192525)) ^ (var_12 < var_11)))));
                            var_19 = var_3;
                            arr_10 [13] [i_2] [i_0] = ((min(-8126395576269771834, (arr_5 [i_3 + 1]))));
                        }
                    }
                }
            }
        }
    }
    var_20 = (4184774771 > var_12);
    var_21 += ((((min(var_15, (var_13 != 4184774770)))) ? var_16 : var_2));
    var_22 *= (max(((-((1 ? var_4 : var_13)))), ((((((var_2 ? 1 : 9223372036854775803))) || -var_12)))));
    var_23 ^= var_12;
    #pragma endscop
}
