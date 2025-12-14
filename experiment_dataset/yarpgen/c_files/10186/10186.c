/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (15558 + -1);
    var_21 = ((var_15 ? (~12995946247882859140) : 4771435466192736770));
    var_22 = ((-(-2 && -1)));
    var_23 = (min((max(((var_8 ? var_8 : var_4)), 51191)), var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_3] [i_0] [i_1 - 1] [i_3] = ((-15558 >= ((-15558 ? 1390983854174484589 : 5450797825826692472))));
                            var_24 = (max((arr_5 [i_1 + 1] [i_1 + 1]), (((15558 ? -62 : 224502450)))));
                            var_25 = (i_3 % 2 == zero) ? ((max(((((((arr_11 [i_3] [i_1]) + 9223372036854775807)) >> (var_19 - 3162514293)))), (max(((4399225172557187121 >> (2147483647 - 2147483621))), ((max(207, var_18)))))))) : ((max(((((((((arr_11 [i_3] [i_1]) - 9223372036854775807)) + 9223372036854775807)) >> (var_19 - 3162514293)))), (max(((4399225172557187121 >> (2147483647 - 2147483621))), ((max(207, var_18))))))));
                        }
                    }
                }
                var_26 ^= ((arr_7 [i_0] [i_1 + 1] [i_1 - 1] [i_1 + 1]) >= (min((arr_7 [i_0] [i_0] [i_0] [i_1 - 1]), var_5)));
                arr_13 [i_0] [i_0] = ((((var_10 ? ((-(arr_0 [i_0]))) : -var_2))) ? var_18 : ((var_7 + (var_1 > var_14))));
                var_27 -= var_14;
            }
        }
    }
    #pragma endscop
}
