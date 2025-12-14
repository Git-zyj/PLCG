/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_10 >= var_8) ? (((((235 ? var_7 : 1))) ? var_1 : -var_2)) : ((((((var_0 ? var_10 : var_0)) >= (15838192016779722618 < 18446744073709551615)))))));
    var_12 ^= ((((max((((var_8 ? 9223372036854775807 : var_4))), (var_1 * var_5)))) ? (((~var_2) ? ((5478 ? 3431649475663021609 : 4467570830351532032)) : -var_10)) : ((((var_8 ? 18446744073709551615 : var_1)) + ((var_3 ? var_6 : var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_13 = (((arr_12 [i_0] [i_0]) && ((((((var_6 || (arr_6 [i_0] [i_0] [i_1])))) % (arr_12 [i_3 + 1] [i_1 + 2]))))));
                            var_14 = (max((((((5 ? 30 : 2147483627))) ? (((max(var_8, 30)))) : ((var_9 + (arr_0 [i_2] [12]))))), (((((18625 ? var_3 : 7681409654649652867))) ? ((((arr_3 [i_0]) - -82))) : (arr_7 [i_0] [i_1] [i_2])))));
                            arr_13 [i_1] [i_1] = 127;
                        }
                    }
                }
                arr_14 [i_1] = (742730402481764547 % 14658724670883943474);
            }
        }
    }
    var_15 = ((var_0 ? ((((((var_1 ? var_6 : -82))) ? ((var_9 ? 193 : var_0)) : var_6))) : var_2));
    #pragma endscop
}
