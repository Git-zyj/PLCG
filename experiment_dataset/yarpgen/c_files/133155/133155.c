/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((1 == 1) ? var_2 : (((~(!var_10))))));
    var_13 |= (((3585042927 ? 1 : 1)));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0] &= (arr_1 [i_0]);
        arr_3 [i_0] = (min(742654346158448873, (((!(((var_6 >> (8466721241750489423 - 8466721241750489418)))))))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_14 = (min(var_14, (((((min(-15023, 4636414935294183023))) ? (((((arr_1 [i_1 - 1]) <= (arr_1 [i_1 - 1]))))) : (min(9100590751977154262, 9346153321732397353)))))));
        var_15 ^= ((!((((arr_5 [i_1 - 1]) ? var_4 : 13492425982481631242)))));
        var_16 = (((-((-15023 ? var_5 : var_11)))));
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                {
                    var_17 |= (((((var_7 && 18448) ? 2030898511 : -19771))) <= (arr_6 [i_2 + 3]));
                    var_18 += ((~(min((min(2333026437, 3003601876)), 65532))));
                    var_19 = (max(var_19, ((((((1291365420 ? -114 : 98))) == (arr_10 [i_4 + 1] [i_4] [i_4]))))));
                }
            }
        }
    }
    #pragma endscop
}
