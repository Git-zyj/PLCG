/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_18 += ((((249 & 373620689) ? 222 : (arr_2 [i_0]))));
        arr_4 [i_0] [i_0] = ((!((-240888782 <= ((-1998538064 ? var_13 : var_1))))));
        var_19 = var_0;
        var_20 = (max(var_20, ((((max(var_4, 249))) ? (((!(arr_2 [i_0])))) : (((arr_2 [i_0]) ? (max(39, 96)) : ((var_4 ? 194 : var_5))))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_21 = ((((!(arr_7 [i_3] [i_2 - 1] [i_1]))) ? var_2 : (((arr_1 [i_1] [i_2]) << (var_3 - 109)))));
                    arr_13 [7] [i_3] [i_2] [i_3] = 39;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    var_22 = (-1803214274 < 104);
                    arr_21 [i_5] [i_4] [i_1] = (var_0 ? ((((min(-299606923, (arr_19 [i_1] [6] [i_5] [i_4])))) ? ((((arr_10 [i_1] [i_4] [i_5] [i_5]) != 163))) : ((((arr_2 [i_1]) != (arr_17 [i_1] [i_1])))))) : (((!((((arr_8 [i_1] [i_1]) ? 1327119053 : var_10)))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_23 = (63 ? 238 : 218086301);
                        var_24 &= ((((min(((var_16 ? var_13 : var_1)), ((222 ? 39 : (arr_11 [i_6 - 2] [i_6 - 2])))))) ? (((((var_10 ? var_16 : 42))) ? var_7 : (arr_19 [i_6 + 1] [i_6] [i_6 - 2] [i_6 - 2]))) : 222));
                        arr_30 [i_6] [i_6] [i_7] [8] [i_6] = ((((-(arr_27 [i_6 - 2] [i_6 - 3] [i_6 - 3])))) ? (248 & 1375423174) : (((arr_27 [i_6 - 3] [i_6 + 1] [i_6 - 2]) ? (arr_27 [i_6 + 1] [i_6 - 2] [i_6 - 3]) : (arr_27 [i_6 - 2] [i_6 + 1] [i_6 + 1]))));
                    }
                    var_25 &= ((74 && 42) ? (((!(arr_10 [i_1] [i_1] [i_7] [i_1])))) : (((!(arr_10 [i_7] [i_7] [i_7] [i_1])))));
                }
            }
        }
    }
    var_26 = var_15;
    var_27 = var_12;
    #pragma endscop
}
