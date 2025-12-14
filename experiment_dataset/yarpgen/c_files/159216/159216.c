/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((!(196 <= var_11)))) <= (!var_13)));
    var_21 = (((((var_18 >= (!var_11)))) & (~var_7)));
    var_22 ^= var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((((((arr_1 [i_0]) % 57))) ? (!var_3) : (max(((60 ? var_6 : var_6)), (arr_4 [i_1])))));
                var_23 = 2460845879;
                var_24 -= (~22);
            }
        }
    }
    #pragma endscop
}
