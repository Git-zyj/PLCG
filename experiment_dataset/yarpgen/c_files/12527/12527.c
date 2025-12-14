/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1268947541;

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_16 = (min(var_16, ((min(1268947570, (-6982 % 1268947549))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = (((max((arr_3 [i_0] [i_1] [i_2]), (min(var_14, (arr_0 [8] [i_1]))))) / ((-1268947544 ? (min(-1268947544, (arr_5 [i_0]))) : (min((arr_6 [i_1] [9]), -1268947544))))));
                    var_18 = (max(var_18, -13));
                    arr_8 [3] [i_2] = (min(1268947549, ((((~(arr_7 [i_0] [i_1]))) | (-1268947541 & var_13)))));
                    arr_9 [i_2] [1] [i_1] = var_1;
                    arr_10 [13] [i_1] [i_2] = (min(((((arr_5 [1]) ? (max(-1268947546, -1054233916)) : 32759))), (min((arr_2 [i_0] [4] [i_2]), ((max(1268947544, (arr_3 [12] [12] [0]))))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_19 = ((((min(-98, ((231 ? -17217 : var_5))))) ? (((min(var_5, var_2)))) : (max((((arr_2 [i_3] [i_3] [i_3]) ? -447249830 : var_12)), (((13641 ? -447249855 : 1268947541)))))));
        var_20 ^= ((-(((arr_3 [9] [i_3] [4]) ? ((var_5 >> (1268947544 - 1268947532))) : 31))));
        arr_14 [i_3] = (((arr_1 [6]) <= ((-(arr_1 [i_3])))));
        arr_15 [i_3] = ((((max(-32760, 1268947543))) == (max((~447249822), (arr_4 [i_3] [1] [1])))));
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_19 [i_4] [1] = (arr_4 [6] [i_4] [i_4]);
        arr_20 [i_4] [1] = ((((22382 ? var_8 : ((6 >> (((arr_2 [10] [i_4] [i_4]) - 4336036904983605835)))))) != -961541404));
        var_21 += (min(((~((min((arr_12 [i_4] [3]), (arr_12 [i_4] [i_4])))))), ((((max(var_5, 1268947519)) != ((var_6 ? (arr_6 [i_4] [i_4]) : -32755)))))));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_22 = min((!-11172), (arr_13 [1]));
        arr_23 [i_5] = (((((((min(1268947547, var_11))) ? (arr_7 [i_5] [i_5]) : (~96)))) ? (((var_8 != (~11170)))) : -32764));
        arr_24 [14] = ((((max((arr_21 [i_5]), var_3))) < (!var_4)));
    }
    #pragma endscop
}
