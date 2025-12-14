/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += 36;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((109 * (((!(arr_3 [i_0 + 3]))))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_17 ^= ((((min(-55, -123))) ? (((arr_4 [i_0 + 1] [i_0 + 3]) ? (arr_0 [i_0 - 1] [10]) : ((max(21, -2))))) : (min(((-65 ? var_11 : -127)), ((min(18, 32)))))));
                    var_18 = (((((arr_2 [12]) ? (arr_5 [i_0 + 3]) : ((max((arr_8 [i_0] [i_0] [i_0]), (arr_5 [i_1])))))) % ((125 * (arr_4 [i_0 - 2] [i_0 + 2])))));
                }
            }
        }
    }
    var_19 *= (!var_10);
    #pragma endscop
}
