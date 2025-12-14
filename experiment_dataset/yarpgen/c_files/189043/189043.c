/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = (max((!-423022491359171607), ((!((max(126, 33669)))))));
    var_16 = ((((-28049 ? 667966088 : 1))) ? ((((((331403796 ? 4856343909496742971 : 864418682))) ? ((5248652832160738982 ? var_1 : var_11)) : -var_2))) : var_7);

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_3 [4] = (((((~(max(0, 7689573514992321205))))) ? ((-(arr_0 [i_0]))) : (((arr_1 [i_0] [6]) ? (1 | 1301916950864623396) : ((65525 - (arr_1 [i_0] [i_0])))))));
        var_17 = (min(var_17, (~12330)));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_18 = max(var_8, ((min(13, var_9))));
        arr_6 [i_1] = (~(((((var_1 ? (arr_5 [10]) : 4))) ? ((var_8 ? (arr_2 [4]) : 16466751777975319542)) : 12630349009871183234)));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_9 [9] [9] = (arr_5 [5]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                {
                    var_19 = (arr_10 [i_2] [i_2]);
                    arr_16 [i_2] [i_4] [i_4] [i_2] = ((((!(arr_12 [i_4] [1] [i_4 + 2]))) ? (((arr_12 [i_3] [1] [i_4 + 2]) ? (arr_12 [5] [9] [i_4 + 2]) : (arr_12 [2] [2] [i_4 + 2]))) : (arr_12 [12] [2] [i_4 + 2])));
                    var_20 = (min(var_20, (((-69 ? 14019828551817795732 : -2230516490410769282)))));
                    arr_17 [i_2] [2] [i_4] [2] = (~0);
                    var_21 = (min(var_21, (((!(((~((-(arr_15 [i_2] [8] [i_2])))))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    var_22 = (min(var_22, ((min(-var_9, (((((var_11 << (var_10 - 91688933)))) ? (min(14789, (arr_20 [i_2] [i_2] [i_2] [i_2]))) : 1394934131)))))));
                    arr_24 [i_2] [i_2] = (((((arr_1 [i_2] [i_5]) ? var_5 : var_0)) ^ 3063));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                {
                    arr_29 [i_8] [i_8] [i_8] = (arr_28 [i_2] [i_2] [i_8]);
                    arr_30 [0] [4] [i_8] [3] = (((((6969382298263771502 ? 96 : 1))) ? var_10 : (arr_23 [0] [9] [9])));
                }
            }
        }
    }
    #pragma endscop
}
