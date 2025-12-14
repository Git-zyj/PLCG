/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((!(49932 && 49932)))) & var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (min(var_17, ((max((max((arr_2 [i_0] [i_0]), var_9)), (min(var_10, (arr_2 [i_0] [i_1]))))))));
                arr_5 [i_0] [i_0] = 15605;

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_18 = (min(var_18, 57438));
                        var_19 ^= (-(!15604));
                        arr_11 [i_0] [i_1] [i_0] [6] = ((!(((((max((arr_7 [i_0] [i_2] [i_0] [i_0]), 49924))) ? (arr_8 [1] [i_0] [i_2]) : (((15619 ? var_13 : var_12))))))));
                        var_20 = ((-var_2 + (((((var_11 ? (arr_4 [i_0]) : var_7))) ? 49931 : ((((arr_7 [i_0] [13] [i_2] [5]) == 15583)))))));
                    }
                    arr_12 [i_0] [i_1] [i_2] [i_0] = ((5577 >> ((((var_8 ? var_12 : ((15604 << (15604 - 15589))))) - 2101731144))));
                    var_21 += 4294967295;
                    var_22 = (min(var_22, ((((arr_9 [i_0] [i_1] [2] [4]) ? (!262128) : var_8)))));
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    var_23 = (arr_8 [i_4 + 2] [i_0] [i_4 - 1]);
                    arr_15 [8] |= ((49928 ? 15605 : 15596));
                    var_24 = (~var_7);
                }
            }
        }
    }
    #pragma endscop
}
