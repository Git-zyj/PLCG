/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (((16758187844806059908 != (arr_0 [i_1]))) ? ((((var_14 && (arr_3 [i_0] [i_1] [i_1]))))) : (arr_4 [i_0]));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, (arr_11 [i_0] [i_2])));
                                arr_17 [i_4] [i_1] [i_1] [i_0] = (((((211009991312377366 ? var_12 : (min((arr_1 [i_1]), (arr_9 [i_1])))))) ? ((18235734082397174247 ? 18235734082397174247 : (arr_16 [i_3] [i_0] [i_2] [i_2] [i_4] [i_0] [i_4]))) : 5868594339401973380));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_26 [i_0] [i_0] [6] [i_6 - 1] [i_1] = (arr_25 [i_0] [i_1] [i_1] [i_1] [i_6] [i_6] [i_7]);
                                var_17 = min((((arr_13 [i_0] [i_1] [i_6 - 2] [i_6]) + (arr_13 [i_0] [i_1] [i_6 - 3] [i_6 - 1]))), var_8);
                            }
                        }
                    }
                }
                var_18 = (((max(10726462037291248669, 18235734082397174242))) ? ((((var_8 < (arr_21 [10] [i_1] [i_1] [i_0]))) ? (!16395637175865737835) : ((-26518 * (arr_15 [i_0] [i_0] [i_0] [i_1] [i_1]))))) : (arr_3 [i_0] [i_1] [i_1]));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 8;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 11;i_9 += 1)
                    {
                        {
                            arr_33 [i_0] [i_1] [i_8 - 1] = min(17351174013647845805, (min(((var_15 ? 5771889860115303788 : var_7)), (arr_11 [i_1] [i_1]))));
                            var_19 = (((min((arr_29 [i_1] [i_1] [i_1]), (((arr_14 [i_0] [i_1]) ? (arr_31 [6] [i_1] [i_8 + 1] [5]) : 9098856274765876650))))) ? (min((arr_6 [i_9 - 1] [i_9] [i_8 + 2] [i_8 + 3]), ((-(arr_3 [4] [i_1] [i_9]))))) : ((9820846656054265065 * (arr_8 [i_0] [i_1] [i_0]))));
                        }
                    }
                }
            }
        }
    }
    var_20 = ((var_3 ^ var_10) ? ((((min(var_15, var_3))) ? (!18446744073709551615) : 12578149734307578235)) : ((((18235734082397174275 ? -9119 : var_3)) / (((var_7 ? var_2 : var_6))))));
    #pragma endscop
}
