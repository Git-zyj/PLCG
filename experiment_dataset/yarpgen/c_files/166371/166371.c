/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_12));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 |= (min(((-(arr_2 [10] [i_0]))), (max((((arr_1 [i_0] [16]) ? -1041107846 : var_1)), ((-588832464 ? (arr_2 [i_0] [i_0]) : var_3))))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] [i_1] |= ((((min(-1041107820, ((588832452 ? -2142190485 : var_7))))) && (((((((arr_3 [i_0] [i_1]) / -1041107846))) ? 144115188075839488 : var_5)))));
            arr_6 [i_0] [i_0] = ((!((max(-2217763597, (var_5 ^ 547443539251175571))))));
        }
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    var_15 = (max(var_15, (((!((((((~(arr_9 [10])))) ? (!var_11) : (((arr_2 [15] [i_2]) ? var_9 : 1729415269))))))))));
                    var_16 = (min(var_16, (min((min((max(var_9, var_11)), (min(15210059682245199026, (arr_10 [i_3] [i_3]))))), (((-(arr_2 [i_0] [i_2 + 1]))))))));
                    var_17 = ((!((min(var_5, (arr_8 [i_2]))))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_18 = (arr_13 [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    arr_21 [i_6] [i_5] [i_4] = min((((0 > (max(108681362296746667, var_3))))), (((((-32766 ? (arr_15 [i_6]) : 4294967295))) % (arr_18 [i_4] [i_4] [i_5] [i_6]))));
                    arr_22 [i_4] |= var_12;
                    arr_23 [i_4] [i_5] [i_6] [i_4] = max((max((min((arr_16 [i_4] [i_4]), 0)), (arr_17 [i_6] [i_5] [i_6]))), (((arr_12 [i_5] [i_6]) ? var_5 : 18446744073709551588)));
                }
            }
        }
        arr_24 [i_4] = (((((var_3 + (min(0, var_1))))) ? (~var_1) : (max(2217763597, -903526581))));
    }
    var_19 = ((min(((max(-546, var_3))), (15903504781764444407 % var_5))) * (((((var_11 <= var_6) > (max(var_12, var_7)))))));
    #pragma endscop
}
