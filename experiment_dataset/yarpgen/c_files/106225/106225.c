/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (13380069037214355502 << 0)));
                var_18 = (((((((min(1720276343294907928, 166))) ? -1720276343294907915 : -6129984464107414417))) ? (min((arr_2 [i_0]), (arr_2 [7]))) : ((18446744073709551596 >> ((((116700634 << (((arr_3 [i_1] [i_0]) + 6504)))) - 3019898869))))));
                var_19 = var_2;
            }
        }
    }
    var_20 = var_5;
    #pragma endscop
}
