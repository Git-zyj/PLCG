/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_2 - var_9) ? -9007182074871808 : (1775740464 - 10786914310216631770))) < (((min(var_9, var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = 10786914310216631770;
                var_22 ^= ((~(var_11 && 255)));
                var_23 = max(((((var_3 ? var_2 : 64359841)) + ((((arr_3 [i_0] [i_0] [i_1]) ? var_1 : 2049929396))))), 110);
                arr_4 [i_1] [i_1] = (max(((-112 ? 17197403118805695961 : 4230607454)), var_12));
            }
        }
    }
    var_24 &= (((((10786914310216631770 ? -var_16 : (1775740464 / var_3)))) * ((((9007182074871808 ? var_5 : var_19)) * 3968))));
    var_25 = (((var_0 > 234) ? 9849578318882587343 : (343580860 / var_0)));
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                {
                    var_26 ^= ((((max((arr_13 [i_2 - 3] [i_3 + 3] [i_4 + 2]), var_0))) ? ((var_0 ? (arr_11 [i_2]) : (arr_12 [i_2] [i_2 + 1] [i_3 + 2] [i_4 + 1]))) : ((4230607455 ? 255 : 2824147577))));
                    arr_14 [i_4] = (arr_8 [i_2 - 2] [i_2 - 1]);
                    var_27 = (~var_10);
                }
            }
        }
    }
    #pragma endscop
}
