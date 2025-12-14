/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 &= max(var_16, (arr_2 [i_0]));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_21 = (arr_10 [i_2] [9] [i_2] [i_2] [i_2]);
                            var_22 = (max(var_22, ((((-6366655205781011613 % 2310847097846912229) <= (arr_2 [i_1]))))));
                            arr_11 [i_3] [i_2] [i_2] [i_2] [i_0] = -607848399543704982;
                        }
                    }
                }
                arr_12 [i_0] [10] = ((((-3311 ? (max(-8078207788024357115, var_16)) : var_0)) % ((((((max(42, 21082))) >= 94))))));

                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_23 |= -28;
                                var_24 = ((-607848399543704995 ? 2310847097846912229 : 4361738059222074477));
                                var_25 *= (((((-(arr_3 [i_5])))) ? var_14 : (((arr_3 [i_1]) & (arr_3 [i_4])))));
                                var_26 = (min((max((!var_16), (max(-607848399543704995, (arr_18 [i_0] [i_0] [16]))))), (--62)));
                            }
                        }
                    }
                    var_27 = (min(var_27, -3));
                }
            }
        }
    }
    #pragma endscop
}
