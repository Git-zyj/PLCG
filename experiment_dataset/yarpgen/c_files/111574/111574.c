/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = var_6;
    var_15 = (-14456 ^ var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((((!(arr_3 [i_1 + 4] [i_0]))) ? ((((max((arr_5 [i_0] [i_0]), (arr_6 [i_1] [i_1])))) % (arr_4 [i_0] [i_1 - 2]))) : (~-var_1)));
                arr_8 [i_0] = var_8;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_15 [1] [i_0] [i_0] [i_3] = ((min((arr_3 [i_0] [i_0]), (!35))));
                            var_16 = ((arr_2 [i_0] [i_2]) % (~-11));
                            var_17 = (((min(((0 <= (arr_11 [10] [i_1] [0] [i_1]))), (((arr_11 [i_0] [i_1] [i_2] [i_3]) && 4294967295)))) ? ((((max((arr_11 [13] [10] [i_2] [i_3]), var_9))))) : (var_8 % var_1)));
                        }
                    }
                }
                arr_16 [i_0] [i_0] [i_0] = 25;
                arr_17 [i_0] [i_0] = ((((arr_4 [i_0] [i_1 - 2]) ? 7956250924895603362 : 13407252015214180210)));
            }
        }
    }
    var_18 = (max((max(var_11, -var_1)), var_6));
    #pragma endscop
}
