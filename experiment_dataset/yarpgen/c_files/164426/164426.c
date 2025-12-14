/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_17 = 19;
        var_18 += ((+((var_16 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_19 = (min(var_19, var_12));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    var_20 = 150;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_21 = max((arr_7 [i_3] [i_4] [i_5]), (((0 - var_7) ? var_3 : var_16)));
                                arr_17 [5] [i_5] [i_3] [i_3] [9] = max(((0 ? 226954271108571856 : 1)), var_3);
                                arr_18 [i_5] = ((((1 > (arr_3 [i_4]))) ? (((-(arr_4 [i_3])))) : var_11));
                            }
                        }
                    }
                }
            }
        }
        arr_19 [0] |= (min((((((var_1 ? var_8 : var_3))) ? -347462040 : ((~(arr_11 [i_1] [i_1]))))), (2235939768 || 64)));

        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            var_22 ^= 21738;
            var_23 += (((1 << 1) <= (max(((~(-32767 - 1))), ((1 ? var_9 : 18977))))));
        }
        var_24 = ((!((min((137 && 1048576), 127)))));
    }
    var_25 = (((((var_16 ? -var_16 : (((min(var_15, var_4))))))) ? ((-226954271108571856 ? 1 : (var_11 != -18958))) : ((var_4 ? var_4 : (var_12 > var_7)))));
    #pragma endscop
}
