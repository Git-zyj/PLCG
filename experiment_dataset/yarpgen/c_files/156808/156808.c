/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (-((((((var_5 ? -1 : 1))) >= -var_2))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = (((((((7904138877569662031 <= (arr_1 [1]))))) > -7955273098373273584)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_12 = ((var_3 ? -var_7 : 0));
            var_13 = (0 && 1);
            arr_5 [i_0] [i_0] [i_1] &= (((((var_1 ? 0 : 11698510056664396717))) ? 0 : var_1));
            var_14 |= (1 / 626633040628212316);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_15 = (max((250 || 65285), ((((max(65510, 10860))) ? 10721526572109602697 : -4294967292))));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_12 [i_0] [i_2] [i_3] &= ((11634 ? -15 : -2905139973399935123));
                var_16 = (max(((-0 * (65535 / 28161))), var_6));
                var_17 ^= (arr_8 [i_3] [i_2]);
            }
            var_18 += ((-(((arr_0 [i_0] [i_2]) ? 1 : (arr_0 [i_0] [i_2])))));
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            arr_17 [i_0] [i_4 + 2] = (((var_5 - 10851) > 65285));
            var_19 = (arr_0 [i_0] [i_0]);
        }
    }
    var_20 = ((((((min(var_3, 16512907049267630227)) - (max(0, 6029072008027774758))))) ? var_8 : var_0));
    var_21 += (((((-0 ? var_2 : -6279622111755523748))) ? var_1 : (min(var_9, var_1))));
    #pragma endscop
}
