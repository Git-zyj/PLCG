/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_10 -= (~47733);
                    arr_6 [i_1] = (min(26, 17806));
                    var_11 = (min((arr_5 [i_0] [i_0 + 3] [i_2] [2]), (var_7 - -1375972792)));
                    var_12 = var_4;
                }
            }
        }
    }
    var_13 &= ((((17804 ? (47711 != 47732) : 60614)) > var_1));
    var_14 = 8040673089461218145;
    #pragma endscop
}
