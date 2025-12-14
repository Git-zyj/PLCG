/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 6;i_3 += 1)
                    {
                        {
                            var_14 = (~(((!var_6) ? (((arr_1 [3] [i_1]) ? 0 : (arr_7 [i_2]))) : (((arr_0 [i_0] [i_1]) ? (arr_7 [i_2]) : -54)))));
                            var_15 = (((((255 ? ((var_1 ? (arr_5 [5] [1] [i_2 + 3] [i_3]) : (arr_5 [i_0] [i_1] [5] [i_2]))) : (arr_5 [i_0] [i_1] [i_2] [i_0])))) ? (((~-78) ? ((-(arr_8 [i_0] [i_3 - 1] [i_2 - 1] [i_3 - 1]))) : (!48))) : ((((!((((arr_2 [i_0]) ? (arr_4 [i_0] [i_1] [i_2]) : (arr_5 [i_0] [i_1] [i_1] [i_1]))))))))));
                        }
                    }
                }
                var_16 = ((!((((((3787 ? 194 : 0))) ? (~346309817) : (((arr_0 [i_0] [i_1]) ? var_12 : (arr_2 [i_0]))))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 8;i_6 += 1)
                        {
                            {
                                arr_16 [i_5] = ((((!((((arr_15 [i_0 - 1] [i_1] [i_0 - 1] [i_5]) ? var_4 : 51818))))) ? ((-((var_2 ? 0 : var_5)))) : ((~(!15)))));
                                var_17 = ((~((229 ? (((255 ? 0 : 182049409))) : (~3803959095)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((((((var_11 ? 147 : var_0)) ? -var_5 : ((var_4 ? var_7 : 121))))));
    #pragma endscop
}
