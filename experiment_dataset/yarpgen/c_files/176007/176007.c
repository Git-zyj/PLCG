/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((max(((var_13 ? var_12 : var_18)), var_12))) ? (((45 ? 127 : 14))) : var_6);
    var_21 = ((var_13 ? (((var_18 ? var_5 : var_1))) : var_19));
    var_22 = -475365415;
    var_23 = ((((33 != ((-15 ? -3102627099303962634 : -2147483631)))) ? (((var_16 && var_0) + (~var_6))) : ((((182 > 9223372036854775808) ? var_10 : 4586)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_1] = ((((((arr_3 [i_0]) ? (arr_0 [i_1]) : 120))) ? var_2 : 9223372036854775795));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_7 [i_2] [i_1] = (((!2644104546) ? (var_9 < var_8) : ((-475365425 % (arr_3 [9])))));
                    arr_8 [i_2] = (((arr_1 [i_2]) % ((var_16 << (((((arr_3 [i_0]) + 691881474600005100)) - 9))))));
                    var_24 += ((-81 ? ((205 << (9223372036854775799 - 9223372036854775785))) : (-32767 - 1)));
                }
                var_25 = (arr_2 [i_0]);
            }
        }
    }
    #pragma endscop
}
