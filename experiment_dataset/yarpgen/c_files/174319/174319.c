/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_10 ? ((var_6 / (max(var_2, var_7)))) : (!-106)));
    var_13 = (min(var_13, (((((!(106 - var_8))) || ((((var_6 << (var_1 - 3412146521))) >= ((var_4 ? var_7 : var_10)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [16] [i_1] = (max((((4294967282 < -92) % ((((arr_2 [i_0] [i_1] [16]) && (arr_2 [12] [12] [i_1])))))), ((((arr_2 [15] [i_0] [i_0]) >= (arr_3 [i_0] [13] [13]))))));
                var_14 = (max(var_14, ((((arr_1 [i_0] [i_0]) ^ ((((min(106, 12))) ? ((19 / (-9223372036854775807 - 1))) : ((-22 / (arr_0 [i_0]))))))))));
                var_15 = (max(var_15, (arr_2 [8] [8] [8])));
                var_16 = (((max(((((arr_2 [i_0] [6] [6]) || (arr_2 [i_1] [i_1] [i_0])))), (arr_0 [i_0]))) + (arr_3 [10] [i_1] [2])));
            }
        }
    }
    #pragma endscop
}
