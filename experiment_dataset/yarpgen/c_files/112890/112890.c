/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((var_12 >> (-var_16 + 6414))), (((var_1 | 192) ^ 17730))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = (max(var_21, (var_4 <= var_3)));
                var_22 = (((((!(arr_6 [i_1])))) >= ((((arr_6 [i_0]) < (arr_6 [i_1]))))));
                var_23 = (((~244) ? (((min((arr_0 [i_0]), var_11)))) : 4079940584));
                arr_7 [i_0] [i_0] [2] = ((((~((var_3 ? (arr_1 [i_0] [i_0]) : 17592186040320)))) ^ 2985067221286064184));
            }
        }
    }
    #pragma endscop
}
