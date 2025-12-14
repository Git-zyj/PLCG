/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= var_5;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 |= (((((~-8636984271328238085) ? (var_18 + 6454586987144063997) : ((30224 ? 1763122183415799865 : 5342053074729249612))))) ? ((var_16 ? var_5 : 6672486612484272159)) : (((((((13627 >> (((arr_0 [i_0]) + 19939))))) >= 256849786717415920)))));
        var_21 += (((((~(arr_0 [i_0])))) ? (((arr_0 [i_0]) ? -30218 : var_4)) : 2336433990814658803));
    }
    var_22 = (max(var_22, (((((((~-13612) - -15071))) < ((var_14 - ((var_3 ? 19861 : var_1)))))))));
    #pragma endscop
}
