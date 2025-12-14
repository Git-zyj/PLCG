/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 2130706432;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_12 = (((((!(413672061 + 30262)))) != (((((3306257765 ? 26459 : 2817757821))) ? ((18677 ? -8149 : 8149)) : 31))));
        arr_2 [i_0] = (((arr_0 [i_0]) ? (arr_1 [i_0] [2]) : (arr_0 [i_0])));
        var_13 = ((((8149 % (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_14 = (min((((-8149 + 2147483647) << (((((arr_0 [i_1]) * (arr_1 [16] [i_1]))) - 3709398)))), ((((arr_4 [i_1]) != (arr_0 [i_1]))))));
        var_15 = (max(((~(arr_0 [i_1]))), (((arr_0 [i_1]) ? (arr_0 [i_1]) : (arr_0 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_16 = ((+(((!((((arr_4 [11]) ? 8149 : (arr_5 [i_2])))))))));
        var_17 = ((!((((arr_0 [2]) >> (((!(arr_6 [i_2] [i_2])))))))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 7;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    arr_12 [i_2] [i_2] [i_4] [i_2] = (-8149 && 6421);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_18 = ((+(((arr_4 [13]) * ((0 ? 0 : -10))))));
                                var_19 = ((((-((10987329359700212505 * (arr_13 [i_3] [i_3] [i_5] [i_6]))))) / (-6230248623005554151 != 8149)));
                                var_20 = ((((253 >> (((arr_6 [i_4] [i_4]) - 44702))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
