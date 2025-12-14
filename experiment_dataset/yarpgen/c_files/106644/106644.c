/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((~((1 ? (~255) : (max((arr_2 [i_0]), 89026296))))));
        var_15 = (~0);
        arr_4 [i_0] = (!-15);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_16 = ((-(min(973050381, 65535))));
                var_17 = -2024;
                arr_11 [i_1] [i_1] [4] = (((((15279129434757812288 ? -2025 : 1))) ? ((((14 >= (804643477 && 3167614638951739335))))) : (((((-(arr_10 [i_0] [i_1])))) ? (((51 ? 51 : (arr_5 [i_1])))) : ((25934 ? 242 : 664403910))))));
            }
            var_18 = ((max(-2014, (min(-32762, 1)))));
        }
        var_19 = 32766;
    }
    var_20 = (((var_10 || -var_2) ? var_11 : (min(((var_2 ? var_13 : 8466589860150524655)), (var_6 > 32927)))));
    var_21 = (max((min((min(var_13, var_1)), var_10)), var_7));
    #pragma endscop
}
