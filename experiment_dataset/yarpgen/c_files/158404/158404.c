/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0 + 2] = (0 <= 1);
                            var_20 = ((!(((((!(arr_5 [i_1] [i_2] [i_3 + 1]))) ? var_11 : (var_12 % var_6))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        {
                            var_21 += (~var_12);
                            var_22 *= ((((min((!var_15), (min(var_17, var_3))))) ? ((min(var_11, var_10))) : var_8));
                        }
                    }
                }
            }
        }
    }
    var_23 &= var_9;
    var_24 = ((max(var_1, ((var_8 ? var_9 : var_13)))) >= (((((max(var_1, var_2))) >> (966806981 - 966806976)))));
    #pragma endscop
}
