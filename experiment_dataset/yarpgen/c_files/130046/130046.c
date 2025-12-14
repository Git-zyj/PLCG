/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (50326880338224832 >> ((0 ? var_4 : (134201344 > var_11))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((((max(((var_9 ? var_0 : 18446744073575350272)), ((12505437867139797465 ? var_3 : 134201344))))) ? var_4 : ((-((var_0 ? var_7 : var_4))))));
                var_13 = (((((29 >= (arr_2 [i_0])))) >> (-12828229990052915778 - 5618514083656635811)));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                arr_17 [i_0] [i_0] [i_2] [i_0] [18] = ((~((((min(18446744073575350255, var_0)) > 110)))));
                                var_14 = max((((var_1 ? var_9 : (arr_8 [i_0] [i_0 + 1] [i_0 + 1])))), 134201344);
                            }
                            arr_18 [i_0 + 3] [i_2 - 1] [i_1] [i_0 + 3] [i_0 + 3] = (max(-93, 0));
                            var_15 |= (((((arr_8 [i_0 + 3] [i_0 + 2] [i_2 - 1]) ? (arr_8 [i_0 + 3] [i_0 - 1] [i_2 - 3]) : (arr_8 [i_0 + 4] [i_0 + 3] [i_2 - 2]))) << (((arr_8 [i_0 - 1] [i_0 + 2] [i_2 - 1]) & var_10))));

                            for (int i_5 = 1; i_5 < 21;i_5 += 1)
                            {
                                var_16 = (max(var_16, 17906483732674228733));
                                var_17 ^= (min(11925069046957623610, 0));
                            }
                        }
                    }
                }
                var_18 = -5336137741926305458;
            }
        }
    }
    #pragma endscop
}
