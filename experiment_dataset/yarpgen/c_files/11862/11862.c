/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((((min(var_8, ((max(1, 1)))))) ? (max(((max(var_6, 67))), (((arr_0 [i_0] [i_0]) * 1)))) : 10921));
                var_20 = (1 <= ((max(65504, 1))));
                arr_5 [i_0] = ((1 ? ((((min(1058710120, var_15))) ? (max(9223372036854775796, (arr_0 [i_0] [i_1]))) : (((102 >> (((arr_1 [i_0]) - 116))))))) : -9223372036854775788));
            }
        }
    }
    var_21 = ((((var_14 ? (11188809826197699312 >= 1) : (min(152, 2101076906)))) < var_6));
    var_22 = ((var_10 ? 4294967295 : ((max(1812424618, var_10)))));
    #pragma endscop
}
