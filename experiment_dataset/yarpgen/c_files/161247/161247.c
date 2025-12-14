/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!(-32745 && var_9)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 &= ((((!(((~(arr_0 [i_0])))))) ? (arr_1 [i_0] [i_0]) : (((~(arr_0 [i_0]))))));
        var_22 = (arr_1 [i_0] [i_0]);
        var_23 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_24 = (max(var_24, (((!((!((((arr_2 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1])))))))))));
        var_25 = ((!(((-(arr_4 [15] [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 4; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_26 += 1632506522;
                        arr_18 [i_2] [i_2] [i_5] [i_5] = (((min((arr_15 [i_2] [i_4]), (arr_14 [4] [i_5] [4] [i_5] [4])))) ? (max(((2837663337 ? (arr_6 [i_2] [5]) : (arr_5 [i_3] [8]))), (~-1919753895759353965))) : 2837663337);
                        var_27 = ((!(arr_9 [5])));
                    }
                }
            }
        }
        var_28 += 1457303960;
        arr_19 [i_2] = ((arr_14 [i_2] [i_2] [i_2] [i_2] [i_2]) ? (max(1457303942, (arr_17 [i_2] [i_2]))) : (((((!(arr_9 [1])))))));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    var_29 = (--4133198940);
                    var_30 = (((arr_22 [i_6] [i_6] [i_8]) ? (((!58298) ? 97 : (arr_21 [i_7] [i_8]))) : 2837663337));
                    var_31 = ((((((arr_20 [i_7]) ? (arr_20 [i_7]) : (arr_20 [i_8])))) % (min(((((arr_17 [i_8] [i_6]) ? 5997103317514646091 : (arr_7 [i_6])))), (arr_27 [i_6])))));
                }
            }
        }
        arr_29 [13] = ((~(((2837663337 <= (arr_5 [i_6] [i_6]))))));
        arr_30 [i_6] = 5199237966123584201;
    }
    #pragma endscop
}
