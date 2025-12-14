/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(1142063338, -17));
    var_14 = ((var_8 + 2147483647) << ((((((~(!var_7))) + 15)) - 13)));
    var_15 = ((((min(var_6, (var_9 > var_7)))) ? ((var_5 * (((min(var_4, 34399)))))) : (min(var_5, ((min(var_7, var_8)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = min(3016184350, (((-((((arr_4 [i_0] [i_1 - 2] [i_1 - 2]) < 127)))))));
                    var_17 = (max(var_17, ((((((~((16 << (131 - 131)))))) ? ((((65535 ? (arr_2 [i_0] [i_1]) : var_12)) - -var_12)) : (1 < var_5))))));
                    var_18 = (((((((max(var_8, 65534))) % (3 >> var_7)))) ? (((arr_2 [i_1 - 3] [i_0]) ? (arr_2 [i_1 - 2] [1]) : var_9)) : ((max((((arr_3 [i_0]) * var_5)), ((-26 ? 1 : (arr_5 [i_0] [i_0] [i_1] [i_0]))))))));
                }
            }
        }
    }
    var_19 = (min(var_19, (((((min(-2147483635, 65535))) && -var_2)))));
    #pragma endscop
}
