/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (min((min(1633351553, var_5)), ((min(var_4, 5264579879440606707)))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (((min((min(-1, 15)), 2))) ? 13 : (!23));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 *= (max(-1688520086, (min((7329438309212045794 + -5264579879440606707), (((-32767 - 1) ? 1424288452 : -5608453595709940117))))));
                    var_13 = (((((((~(arr_4 [i_0] [i_1]))) ^ (arr_1 [i_1])))) ? (((arr_0 [i_0 + 1]) | 10)) : -29));
                }
            }
        }
        var_14 = (((((-(arr_5 [8] [i_0])))) ? 13 : ((65535 ? ((~(arr_1 [i_0]))) : (arr_1 [i_0])))));
    }
    #pragma endscop
}
