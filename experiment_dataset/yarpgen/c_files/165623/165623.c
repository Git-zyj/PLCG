/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_17 = (var_9 + (((var_15 * var_3) * (var_11 * var_11))));
                        var_18 = var_9;
                        var_19 = var_0;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_20 = ((var_3 <= var_5) <= (var_0 * var_5));
                        var_21 = (min(var_10, var_3));
                    }
                    var_22 = var_9;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_23 = (min(var_23, (((((var_16 && var_12) && var_0)) && ((max(var_14, (var_5 && var_15))))))));
                                var_24 = var_8;
                            }
                        }
                    }
                    var_25 ^= (max(var_12, (((var_6 < var_2) >= (var_6 << var_5)))));
                }
            }
        }
    }
    var_26 = var_8;
    var_27 |= ((var_3 << var_5) >= (((((min(var_8, var_12))) >> var_16))));
    var_28 = var_11;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 0;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                var_29 = var_10;
                var_30 = var_1;
                var_31 = var_12;
            }
        }
    }
    #pragma endscop
}
