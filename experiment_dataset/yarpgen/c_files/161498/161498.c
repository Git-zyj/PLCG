/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((max(var_7, (67 - -32254))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = ((((!9223372036854775807) ? var_11 : 6)));
                    var_17 = (((min(89, -8468248348858242888)) / (((max((!2335404274), (arr_0 [i_0])))))));
                    arr_7 [i_1 + 2] [i_1 + 2] = ((((!(arr_6 [i_2 + 1] [i_2 + 1] [i_1 + 1] [i_1 + 1]))) ? (((((min(-110, var_8)) > var_6)))) : ((~(arr_1 [i_2] [i_0])))));
                    var_18 = (((((-68 & (arr_0 [i_1 + 1])))) <= 2673139321));
                }
            }
        }
    }
    var_19 ^= ((((var_7 == (~var_0))) ? var_9 : var_9));
    #pragma endscop
}
