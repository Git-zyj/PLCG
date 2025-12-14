/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = 0;
                var_16 = (max(var_16, 6560481877194051589));
                var_17 -= (min(((562949953421310 + ((var_0 ? 4 : (arr_0 [4]))))), 65535));
                var_18 = (arr_2 [i_0] [i_0]);
                arr_5 [i_1] [i_0] = ((((((((arr_0 [i_0]) ? 4611615649683210240 : 18446181123756130318)) < 5828701769197764123))) >> (var_0 + 5947463159058715522)));
            }
        }
    }
    var_19 = (min(var_19, (((min((var_12 > var_5), (var_8 | var_11)))))));
    var_20 = var_2;
    var_21 = ((max(((18446744073709551615 << (562949953421297 - 562949953421242))), ((15862441178455400928 ? var_9 : var_9)))));
    #pragma endscop
}
