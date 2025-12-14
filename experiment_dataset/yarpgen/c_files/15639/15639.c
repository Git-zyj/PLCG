/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(31, -var_14));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_17 = (max(((54865 ? (arr_0 [i_0 - 1] [i_0 - 1]) : var_5)), (arr_3 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 *= (((((-30899 ? 65535 : -32761))) <= (min(((max(27616, 1))), (((arr_7 [i_0] [i_1] [i_1] [5]) ? var_8 : 30))))));
                    var_19 = (((((((arr_8 [i_0] [i_1] [i_2] [i_0]) ? var_7 : var_12)) <= (!var_10))) ? (min((30851 | 126), ((min(-115, 1))))) : ((((max(18446744073709551615, var_10))) ? (var_0 + var_15) : (((arr_8 [7] [i_1] [8] [i_0]) ? -7 : -9744))))));
                    var_20 ^= (((((min(var_7, -62)))) == 1006100894));
                }
            }
        }
    }
    #pragma endscop
}
