/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-(var_16 >= var_4)));
    var_20 = (((var_16 * (var_16 > var_0))));
    var_21 = ((var_1 <= ((((var_4 / var_0) || var_7)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (90 - 29999);

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {

                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    var_22 = ((var_13 == (((((var_15 % (arr_9 [i_3] [i_2] [i_0] [i_0])))) ? ((((((arr_9 [i_0] [i_1] [i_2] [i_2]) + 2147483647)) >> var_15))) : 3857605420))));
                    var_23 = ((((min((arr_6 [i_0] [i_0] [i_1] [i_0]), (arr_8 [i_0] [1] [1] [i_0])))) || (((~(((!(arr_0 [i_0] [i_0])))))))));
                }
                var_24 = ((((min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))) ? (arr_1 [i_0]) : (((arr_9 [i_0] [i_1] [i_2] [i_2]) ? (((~(arr_10 [i_0] [i_1] [i_0] [i_2] [i_2])))) : var_10))));
            }
            var_25 = (max((arr_5 [i_1] [i_1] [i_1]), (arr_5 [i_0] [i_1] [i_0])));
            var_26 = ((!(arr_10 [i_0] [i_1] [i_0] [i_1] [i_0])));
        }
        var_27 = (min((arr_6 [i_0] [i_0] [i_0] [i_0]), ((4294967295 ? var_3 : var_8))));
    }
    var_28 &= ((((max(((var_6 ? 0 : var_6)), var_5))) * ((max(16104812620373227970, var_16)))));
    #pragma endscop
}
