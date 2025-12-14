/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        {
                            var_16 = 32767;
                            var_17 = (((((!(arr_6 [i_2])))) ^ 4095));
                            var_18 = (arr_3 [i_0] [i_0 + 2]);
                        }
                    }
                }
                var_19 -= var_7;
            }
        }
    }
    var_20 = ((~(((!18446744073709551615) ? 32767 : (var_1 && 4294934529)))));
    var_21 = var_11;
    var_22 = (min(var_22, var_3));
    #pragma endscop
}
