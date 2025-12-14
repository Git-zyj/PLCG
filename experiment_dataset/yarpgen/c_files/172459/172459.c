/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((((((((!(arr_5 [i_0])))) >> (var_0 - 30810)))) ? var_13 : (~8)));
                arr_8 [i_0] [i_1] = ((((((-32767 - 1) * 2033225623))) ? (--0) : ((-var_10 ? ((50667 / (arr_1 [i_0]))) : (var_3 / var_18)))));
                var_20 = (max(var_20, (((((((-3532097803746994385 ? 255 : 227)) ? -294379841332452864 : ((((-9496 + 2147483647) << (19 - 19)))))))))));
            }
        }
    }
    var_21 = var_13;
    #pragma endscop
}
