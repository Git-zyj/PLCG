/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = ((((min(0, 115))) / ((-((var_3 ? var_10 : 225))))));
                var_15 = (!1);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_16 = (((((((min(31, 1))) ? (-1 & 2707) : var_2))) ? (arr_3 [i_4]) : ((var_4 ? var_4 : ((var_7 ? var_5 : 4555111316372511063))))));
                                var_17 = -27;
                                arr_13 [i_0] = (min(14228947114872749203, ((min(13301, (((!(arr_5 [i_0] [i_0] [i_0])))))))));
                            }
                        }
                    }
                }
                var_18 = (7856148845003702047 % 10116626317457004424);
                var_19 = (min(var_19, (((-(min((!6597069766656), ((-(arr_6 [i_0] [i_0] [i_0]))))))))));
            }
        }
    }
    var_20 = ((var_10 >= (min((min(14063846388078361198, var_2)), (!var_0)))));
    var_21 = (((-8105880984368411782 && 23061) ? (31 >= -929867786535563939) : (~5359782417907922652)));
    #pragma endscop
}
