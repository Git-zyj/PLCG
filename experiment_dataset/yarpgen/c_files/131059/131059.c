/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1;
    var_21 += ((((((var_16 + -9104599101869339882) ? 4095 : (((var_9 ? 1 : var_1)))))) ? (-var_13 * var_7) : (max((max(var_17, var_19)), var_15))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                var_22 = 1;
                                var_23 = ((1 + ((~(arr_7 [i_1] [i_1])))));
                                var_24 = (max(var_24, (((((((max(7, 63))) ? (arr_11 [i_1] [i_1]) : (arr_2 [i_0])))) ? (max((((105 ? (arr_0 [i_0] [i_0]) : -114284437))), (arr_9 [i_1] [i_4]))) : (((((arr_7 [i_0] [i_1]) ? (arr_9 [i_1] [i_0]) : -124)) << (((arr_9 [i_1] [i_2]) - 10763886033016054751))))))));
                                var_25 = (((min(((5 ? (arr_0 [i_0] [i_0]) : 8591447811181159197)), (arr_1 [i_0] [i_1])))) ? 152 : (min((((arr_2 [i_2]) ? 1 : 20825)), -1)));
                                var_26 |= (((arr_6 [i_0] [i_1] [i_1]) - 1));
                            }
                            var_27 *= (!63488);
                        }
                    }
                }
                var_28 = (arr_10 [i_0] [i_1] [i_1] [1] [i_0] [1] [11]);
            }
        }
    }
    #pragma endscop
}
