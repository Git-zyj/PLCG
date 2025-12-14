/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_2 ? (min(-29, var_8)) : var_8))) ? 70360154243072 : var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 *= (((((var_18 ? (arr_0 [3]) : -1788576868))) ? (((18289637673115176444 ? 70360154243072 : (arr_0 [i_0])))) : 4294967295));
                arr_5 [i_0] = ((((min(0, 16))) ? ((((min(18446744073709551615, 0))) ? 17979214137393152 : (((1023574955782832270 ? var_7 : var_13))))) : (((12199475491386044805 ? 186 : var_2)))));
                var_21 = (max(var_21, 11911173600516425650));
                var_22 = ((((!((max(16, 43184))))) ? ((-(arr_4 [i_0] [i_0]))) : (!70360154243072)));
            }
        }
    }
    var_23 = ((var_0 ? 18446744073709551591 : -1520210749004381737));
    var_24 |= var_7;
    #pragma endscop
}
