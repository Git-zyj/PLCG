/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(127 > 243963081)));
    var_14 = var_2;
    var_15 = var_5;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = (min(var_16, (((-6331 > ((~(((!(arr_0 [i_0] [i_0])))))))))));
        var_17 = ((-9223372036854775787 ? (arr_1 [i_0]) : (max(-32755, (max(4438304171439660664, (arr_0 [i_0] [i_0])))))));
        var_18 ^= (((((((max(2044, 4574886138347942972))) ? ((max((arr_0 [i_0] [i_0]), -6331))) : ((3604 ? 1728443895 : -162351844))))) ? (~-243963082) : -2045));

        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_19 = (((((arr_5 [i_0] [i_1] [i_1 - 3]) > 0)) ? (arr_8 [i_1] [i_1] [i_1 - 3] [i_2]) : var_9));
                        var_20 = ((~((((((arr_1 [i_1]) ? -1728443901 : -32766))) ? ((max(27057, 3609))) : ((3604 ? 61931 : 2035))))));

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_21 &= (((((-(arr_11 [i_1 + 1] [i_1 + 1] [i_2] [i_2] [i_2])))) ? 0 : ((min(17, 20)))));
                            var_22 = (((((~((min(-6, -1)))))) ? -243963082 : (min((~-32757), ((var_1 ? (arr_0 [i_3] [i_1]) : 2))))));
                            var_23 &= 6332;
                        }
                    }
                }
            }
            var_24 = 0;
        }
    }
    #pragma endscop
}
