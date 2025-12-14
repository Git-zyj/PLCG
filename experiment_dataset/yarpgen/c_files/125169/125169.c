/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = ((!((((arr_2 [i_1 + 1]) | ((var_10 ? -2098601635009663505 : (arr_0 [i_0]))))))));
                    arr_9 [i_2] [i_1 + 1] = ((max(2098601635009663505, var_8)) == ((((var_6 >= (arr_3 [i_0] [i_1 + 1] [i_1 + 1]))))));
                    arr_10 [i_0] [i_0] = (arr_7 [i_1] [i_1 - 1] [i_1]);
                }
            }
        }
    }
    var_21 = ((!(((8676257302895895066 | (!var_6))))));
    var_22 = (((((var_7 <= (~17368715309636934383)))) | var_10));
    #pragma endscop
}
