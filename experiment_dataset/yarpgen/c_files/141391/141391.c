/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((((!((max(var_3, var_5)))))), ((64 | (39483 && var_0)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_14 = (((((~(((arr_1 [i_0]) ? -1 : 96))))) ? (((-(arr_2 [i_0])))) : var_12));
        var_15 = (min(((-27416 ? (arr_1 [i_0]) : (((32640 ? 192 : 1023))))), ((min(57, var_5)))));
        var_16 ^= (((((!(arr_2 [i_0])))) * ((-(arr_2 [4])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] [i_2] [6] = 67;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_15 [6] [i_2] [i_3] [6] [i_2] [i_0] = ((((((arr_1 [i_0]) ? (min(0, var_10)) : ((min(3418854589, (arr_5 [i_3] [i_2] [i_1]))))))) ? (arr_4 [i_2] [i_2 - 1] [i_3]) : ((max((arr_2 [i_2 - 1]), var_5)))));
                                arr_16 [i_2] [i_2] = (((((arr_5 [i_0] [i_2 + 1] [i_2 + 1]) ? (arr_4 [i_0] [i_2 - 1] [i_2]) : 1))) ? (((((-2147483647 - 1) <= 26052)))) : var_11);
                            }
                        }
                    }
                    arr_17 [i_2] [i_1] = 242;
                    arr_18 [i_2] [i_1] [i_2] = ((~((3849498534686975471 ? -7928151166432615262 : ((min(65532, 876112705)))))));
                    var_17 ^= (arr_1 [i_0]);
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        arr_21 [4] [6] |= (min((arr_8 [4] [4] [4] [4]), ((37092 ? ((var_8 ? var_8 : var_3)) : ((-410 ? (arr_3 [i_5] [i_5] [i_5]) : (arr_10 [i_5] [i_5] [10] [i_5])))))));
        arr_22 [i_5] = -74;
        arr_23 [i_5] = ((((((arr_1 [i_5]) ? 26049 : (arr_20 [i_5])))) ? (-12 / 191) : -15721));
    }
    #pragma endscop
}
