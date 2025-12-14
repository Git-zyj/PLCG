/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 ^= ((!((min(var_3, (arr_2 [i_0] [i_1 + 3]))))));
                                arr_14 [i_0] [i_1] [i_4] [i_1] [i_4] [i_4] [i_2] = (~1024);
                                var_13 = ((((var_2 / (arr_10 [i_0 + 2] [i_1 + 1] [i_2 + 3] [i_2 + 1] [i_2 + 3]))) * ((((arr_10 [i_0 + 2] [i_1 + 3] [i_2 + 1] [i_2 + 2] [i_2 + 1]) ? var_3 : 1003)))));
                                var_14 = (max(var_14, ((((max(65518, 65518))) % ((min((arr_13 [i_2] [i_2] [i_3] [i_2] [i_2] [i_2 - 1]), var_7)))))));
                            }
                        }
                    }
                    var_15 = (((((((var_11 % (arr_3 [i_0] [i_1] [i_0]))) < (min(5199867481160475629, (arr_8 [i_0] [i_1] [i_0])))))) % (max(var_10, var_7))));
                    var_16 -= ((max(1, -32482)));
                }

                for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    arr_17 [i_5] = var_2;
                    var_17 = (((~(541623692 ^ 7558710163743566834))) | var_5);
                    arr_18 [i_0] [i_0] [i_5] [i_0] = ((-(arr_15 [i_0] [i_0] [i_0])));
                }
                for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    var_18 = var_5;
                    arr_21 [i_0] [i_0] [i_6] &= 28672;
                    var_19 = (max(((var_5 + (arr_13 [i_6 + 2] [i_0] [8] [8] [i_0] [i_0]))), (arr_13 [i_6 + 2] [i_0] [18] [18] [i_0] [i_0])));
                    arr_22 [i_0] [i_1] [i_0] [i_6] = min(var_9, ((min(1, 36858))));
                }
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    var_20 = ((((~(((arr_25 [i_1] [i_1]) & (arr_25 [i_1] [i_0]))))) + 6));
                    var_21 = var_9;
                }
                var_22 -= (max(var_6, (~242)));
            }
        }
    }
    var_23 = ((((((var_5 ? var_2 : 11041493253858660518) < ((min(32489, var_3))))))));
    var_24 = var_10;
    #pragma endscop
}
