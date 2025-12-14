/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161317
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
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_10 &= ((((arr_6 [i_3 + 2] [i_1] [i_1] [4]) ? var_6 : (arr_6 [i_3 + 1] [2] [i_3] [i_0]))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                            {
                                var_11 = (-8498293338529319241 && -var_5);
                                arr_14 [10] [10] [10] [10] [i_4] |= (((arr_10 [i_0] [i_3 - 2] [i_2] [i_3 - 1]) + (arr_4 [i_3 + 2] [i_2 - 2])));
                                arr_15 [0] [9] [i_2 + 1] [i_2] [9] [9] = (arr_7 [i_2] [i_2 + 1] [5]);
                            }
                            for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                            {
                                arr_19 [i_0] [i_2] [i_0] [i_0] &= (((arr_7 [i_0] [i_0] [8]) ? (arr_3 [i_0]) : (var_2 + var_7)));
                                arr_20 [i_2] [i_3 + 1] [i_2] [i_1] [i_0] &= (((((((var_1 / (arr_11 [i_3] [i_3] [i_3] [i_3])))) * (65535 / var_3))) * (((1 + ((12 ? var_9 : 65523)))))));
                                var_12 = (max(var_12, ((((((((((arr_3 [i_0]) ? -1 : (arr_12 [i_0])))) ? var_5 : ((max(22235, var_5)))))) ? ((((((1 ? 41 : -1))) ? ((max((arr_12 [i_0]), var_5))) : (!9)))) : (min(63, ((-8498293338529319229 ? 5734310518689400355 : 22235)))))))));
                                var_13 = (((110 ? (arr_5 [i_2 - 2] [i_2 - 3] [i_3 - 1]) : (((arr_8 [i_5] [i_2] [i_0]) ? var_9 : -22229)))));
                                arr_21 [i_0] [0] = ((~((-1 ? ((5734310518689400354 ? 43 : var_6)) : 1))));
                            }
                            var_14 = (min(var_14, ((min(23643, (arr_10 [i_3 + 2] [i_3 - 2] [i_2 - 2] [i_2 - 1]))))));
                        }
                    }
                }
                var_15 |= ((!(((13 ? 65523 : 114)))));
            }
        }
    }
    var_16 = (((((var_9 ? ((-1 ? var_3 : 9)) : (((min(22223, var_6))))))) ? var_5 : (max(var_9, var_8))));
    var_17 -= (((!var_1) >> ((var_0 ? (((282318601 ? 24 : -115))) : ((0 ? 12 : -601633248613359855))))));
    var_18 = (max(((21984 ? 165 : var_6)), var_4));
    #pragma endscop
}
