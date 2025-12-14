/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 162;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_19 -= (arr_4 [i_2]);
                    var_20 = (max(var_20, (((637022565 > (((-1382749266 ? var_0 : (arr_6 [i_1 + 1] [i_1 - 1] [i_1])))))))));
                    var_21 = (min(var_21, (((~(max(((7686118327692150987 ? 3657944706 : 559397956)), (arr_8 [i_0] [i_2 + 2] [i_2 - 1]))))))));
                }
            }
        }
    }
    var_22 = ((var_11 > (~91)));

    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        var_23 = max((((arr_11 [i_3]) / (arr_11 [i_3]))), (((arr_11 [i_3]) ? (arr_11 [i_3]) : (arr_11 [i_3]))));
        arr_13 [i_3] = ((max(((max((arr_9 [i_3]), var_8))), var_16)));
        arr_14 [i_3] = ((((max((arr_12 [i_3]), ((~(arr_11 [i_3])))))) ? (max((arr_12 [i_3]), var_5)) : ((((var_5 - 1595656710811921673) ? (arr_9 [i_3]) : (arr_9 [i_3]))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] |= ((6565662606559044539 ? var_7 : (var_4 ^ 1790147645)));
        arr_18 [5] = (arr_10 [i_4] [i_4]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 2; i_6 < 13;i_6 += 1)
        {
            var_24 = var_1;
            var_25 = (((((var_4 - (arr_22 [i_5] [i_5] [i_6 + 1])))) == ((var_12 ? 4565997468818384028 : (arr_12 [i_5])))));
            var_26 = ((-27 ? 110 : -53));
        }

        for (int i_7 = 2; i_7 < 13;i_7 += 1)
        {
            var_27 = (arr_26 [i_7 - 1]);
            var_28 = (~3735569339);
        }
        arr_27 [i_5] = 637022589;
    }
    #pragma endscop
}
