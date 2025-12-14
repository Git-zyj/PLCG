/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(18446744073709551615, ((min(((max(var_5, 57946))), -7590)))));
    var_17 = ((1 - 7596) ? (((235 ? var_11 : var_0))) : ((min(0, (min(57954, var_0))))));
    var_18 = var_6;
    var_19 = (~-1317782934895438464);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0 - 1] [i_1] [i_1 - 1] = (min((max((!4508075719138971840), 8111685684944973139)), ((16322751995015953644 ? 63 : -9223372036854775801))));
                var_20 = (min(var_20, var_6));
                arr_6 [i_0] [i_1] = (~885189982);
            }
        }
    }
    #pragma endscop
}
