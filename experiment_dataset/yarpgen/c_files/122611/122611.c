/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_5;

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            var_11 = (1 != ((min(-26079, 1))));

            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                var_12 = var_7;
                var_13 = (min(var_13, ((((arr_0 [i_0]) - ((-1 - ((3 - (arr_1 [0]))))))))));
            }
        }
        arr_8 [i_0 + 2] = ((1 ? (~1) : (min((((arr_0 [i_0]) | var_0)), 8192))));
        var_14 = (max(var_14, ((max(8176, ((((((arr_6 [i_0 + 2]) ? (arr_6 [i_0]) : (arr_7 [i_0 - 2] [i_0 - 2] [i_0])))) ? ((1 ? -1440232586 : 8191)) : (arr_2 [2] [4]))))))));
        var_15 = (arr_5 [i_0] [i_0] [i_0] [i_0]);
    }
    var_16 = ((((((((var_8 ? var_0 : var_6))) < 18446744073709551614))) << (((min(5333075478837170782, 127)) - 125))));
    #pragma endscop
}
