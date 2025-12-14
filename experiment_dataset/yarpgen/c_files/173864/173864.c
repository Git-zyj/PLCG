/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_19 = ((((min((arr_2 [i_0] [i_1]), (arr_0 [i_0])))) ? (arr_1 [i_0]) : (arr_1 [i_0])));
                    var_20 += -var_11;
                    arr_6 [i_0] [i_1] [i_0 + 1] [i_0] = ((((((var_4 / (arr_4 [i_0] [i_0] [i_2 + 2]))))) ? -512 : ((((250 << (((arr_3 [1] [i_1]) - 177)))) & (arr_0 [i_0])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_21 = (arr_14 [i_3] [i_4] [i_5]);
                                var_22 = ((((((arr_10 [i_3 + 1] [6]) ? (((arr_19 [i_6]) << 0)) : (arr_9 [i_3])))) ? ((((!var_1) > ((var_16 ? (arr_11 [1] [i_4] [i_4]) : var_11))))) : ((((max(var_9, var_7))) ? ((864488007 ? var_4 : var_10)) : (-25 <= 0)))));
                                var_23 ^= 6863844654937527451;
                                var_24 = ((var_4 >= (min(var_1, ((25278 ? (arr_13 [i_3] [i_5] [5] [3]) : (arr_14 [i_3] [i_3] [i_3])))))));
                            }
                        }
                    }
                }
                var_25 = ((((max(65, 40095))) ? ((((-5805030410110346158 && (arr_8 [i_3]))))) : var_5));
                var_26 = (((~1) ? 1 : ((25278 ? 169 : ((-(arr_20 [i_3] [i_3] [i_4 + 3] [i_4] [12] [i_4])))))));
            }
        }
    }
    var_27 = 1936654981;
    #pragma endscop
}
