/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 = (max(((!(arr_4 [i_0] [i_2]))), (((arr_3 [i_2]) != (arr_10 [i_0] [i_1] [i_2])))));
                    var_20 -= ((((min(var_6, 41))) ^ var_4));
                    var_21 = (max(-var_8, 41));
                    var_22 += (((((((!213) >= 213)))) != 239));
                }
            }
        }
    }
    #pragma endscop
}
