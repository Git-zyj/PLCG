/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((9107878429138286425 ? (min(((213415192253704484 ? 5738627170246065586 : 12708116903463486017)), 8526543718302908979)) : 18446744073709551599));
    var_21 = var_13;
    var_22 = 183;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [2] [i_0] = (min(3363935333, 36028796951855104));
        var_23 = (((12288 | (arr_0 [1] [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_24 = (var_14 == 12276);
            var_25 = (((arr_3 [i_1 + 2] [i_1 - 3]) ^ (var_6 + var_17)));
        }
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            var_26 = (min(var_26, (arr_3 [i_1 - 2] [i_1 - 3])));
            var_27 = 18419071958783472150;
        }
        var_28 = 162;
    }
    #pragma endscop
}
