/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((97 ? -8706087042634531671 : 2809088306143012847));
    var_14 |= var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = (~var_7);
                var_16 = var_6;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_17 = var_10;
        var_18 = 2809088306143012847;
    }
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_19 = 2809088306143012841;
            arr_13 [i_3] = (~var_8);
        }
        arr_14 [i_3] = -2809088306143012824;
        arr_15 [i_3] = ((~(min(((16125920958329062662 ? 15637655767566538791 : var_8)), 15637655767566538768))));
        var_20 = (max(var_20, (((((var_0 ? 15637655767566538788 : 5)) & (min(15637655767566538768, var_1)))))));
        var_21 = 15637655767566538769;
    }
    #pragma endscop
}
