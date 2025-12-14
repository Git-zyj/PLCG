/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (((arr_4 [i_2] [i_1]) > (arr_2 [i_0] [i_1] [i_0])));
                    var_21 = (max(var_21, (((((((8153823465140593208 << (((arr_4 [i_1] [i_1]) - 1191841838)))) << (((((arr_0 [i_2]) >> (var_6 - 1629603651111750615))) - 466411210)))) | ((((arr_2 [i_0] [i_1] [9]) + (((arr_6 [i_0] [i_1] [i_1]) + (arr_6 [i_0] [i_0] [i_1])))))))))));
                    var_22 = (min(var_22, ((((!-var_18) + ((+(((arr_2 [i_2 - 1] [3] [3]) - var_14)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_23 = 9636;
                                var_24 = (((((((53186 && (arr_3 [i_4]))) ? ((-11869 ? 0 : var_8)) : (((!(arr_3 [i_1]))))))) && ((((((var_2 ? 188 : 53186))) ? ((var_6 ? -1923766311716360898 : (arr_9 [i_0] [i_2] [i_2] [i_3] [i_4]))) : (((max(var_8, 53183)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = ((~(~var_11)));
    var_26 = ((var_3 ? (min((~var_5), 108)) : var_5));
    #pragma endscop
}
