/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (var_2 * var_7)));
                arr_4 [i_0] = (arr_1 [i_1]);
            }
        }
    }
    var_15 = 127;
    var_16 = var_8;
    var_17 = (((((max(0, var_12)) ? (!var_10) : ((var_3 ? 1 : -1949919543))))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_18 = (min((arr_8 [i_2]), (min((((1 ? (arr_7 [i_4]) : (arr_11 [14] [i_3] [i_2])))), ((-(arr_5 [i_2] [i_3])))))));
                    var_19 = ((0 ? ((55 ? -1949919552 : -205017326)) : (min((arr_8 [i_2]), (arr_8 [i_2])))));
                }
                var_20 = 1;

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_21 = (arr_6 [i_2] [i_2 + 1]);
                    var_22 = 127;
                    var_23 = -1949919534;
                }
            }
        }
    }
    #pragma endscop
}
