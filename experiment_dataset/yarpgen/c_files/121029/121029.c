/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((max(var_5, var_6)))) ? (((((var_15 ? 6917529027641081856 : 2147483647))) ? var_1 : (max(var_3, var_13)))) : ((max(((8273935710763779729 ? 667867013 : 128)), var_14)))));
    var_19 -= 0;
    var_20 = min((--0), (max((min(var_14, var_11)), var_10)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    var_21 = (min(var_21, ((max((((((47913 ? 21655 : 130))) ? (arr_6 [i_2] [i_2 - 1] [i_1] [i_1]) : (255 && var_14))), (arr_0 [i_2] [i_0]))))));
                    var_22 *= var_14;
                    arr_7 [i_0] = ((((((-(arr_6 [i_0] [i_1] [i_2 - 3] [i_2 - 3])))) ? 18446744073709551615 : (((0 ? var_4 : var_15))))) <= ((((max(132, 147))))));
                }
                arr_8 [i_0 + 1] [i_0] = (((arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? -var_17 : (var_14 * var_5)));
                var_23 = (min(var_13, ((44025 ? (-2147483647 - 1) : 18446744073709551601))));
                var_24 = (max(var_24, ((((((((-1 && (arr_3 [i_1]))) ? var_1 : ((min(var_6, var_4)))))) ? var_16 : (arr_6 [i_0] [i_0] [i_0] [i_0]))))));
                var_25 = (arr_4 [i_0]);
            }
        }
    }
    #pragma endscop
}
