/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_4;
    var_16 = (min(var_16, var_10));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = -var_2;
                arr_5 [9] [9] [16] = 0;
                arr_6 [i_0] [i_1] = ((((!((max((arr_1 [11]), var_4))))) ? ((((max(9383893197475809019, 0))) ? (((((arr_0 [13]) || var_1)))) : (min((arr_0 [i_0 + 2]), -9146226882240747749)))) : (((max((!15), 19))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [1] = 0;
                            arr_14 [i_0 + 2] [8] [i_2] = ((~((1 ? var_2 : 9383893197475809011))));
                            arr_15 [i_0 - 2] [i_1] = min((((arr_12 [i_0] [i_2] [1]) & (((arr_3 [i_0] [i_0]) ? var_7 : (arr_9 [16]))))), ((min((min((arr_2 [i_2] [i_1]), var_7)), 221))));
                        }
                    }
                }
                var_18 = (((min((min(var_0, var_3)), (min((arr_9 [i_0 - 1]), var_0)))) <= (((((arr_0 [i_0 - 1]) != 29774))))));
            }
        }
    }
    #pragma endscop
}
