/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    arr_8 [i_0 + 1] [i_0] [i_1] [17] = ((((max((((arr_1 [1] [i_1]) ? var_17 : 1)), (arr_5 [i_0 - 1] [i_0 - 2] [i_0] [i_2 + 2])))) ? var_10 : ((var_10 ? 16301171586716376073 : 3707564338005655945))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_19 -= ((23 ? var_8 : 45570));
                        var_20 = 6979683293122122789;
                    }
                }
                var_21 = 18446744073709551608;
            }
        }
    }
    var_22 = (((min(var_12, ((var_0 ? var_4 : var_14)))) << (var_17 - 30609)));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 17;i_5 += 1)
        {
            {
                var_23 = 6193150387358044015;
                arr_16 [i_4] = (((arr_10 [i_4] [i_4] [i_4] [i_4] [i_4]) > (arr_1 [i_5 - 1] [i_5 - 2])));
                arr_17 [18] [18] = (((min(77, (min(5193014220673880958, 2387)))) / (min(17710618113179960586, (((4294967295 ? var_15 : var_10)))))));
            }
        }
    }
    var_24 = (var_17 & 1);
    #pragma endscop
}
