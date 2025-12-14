/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (max(((((arr_0 [i_0] [i_0]) ? -651 : var_6))), (((((7456 ? 182 : 144115188008747008))) ? (((arr_1 [i_0]) ? var_11 : 144115188008746984)) : (((min(6, 57929))))))));
                arr_6 [i_0] [i_0] = var_5;
                var_17 = ((((var_8 ? 144115188008747008 : (min(var_14, var_7)))) / (((arr_1 [i_0]) ? ((62790 ? var_14 : var_10)) : ((((arr_2 [i_0]) ? 72 : (arr_2 [i_1]))))))));
            }
        }
    }
    var_18 = (min((((min(4096, 18302628885700804607)) / ((((-32767 - 1) ? -10 : 248))))), (max((min(144115188008747008, 4294967047)), ((min(-28, 57929)))))));
    var_19 = var_4;
    var_20 = var_14;
    #pragma endscop
}
