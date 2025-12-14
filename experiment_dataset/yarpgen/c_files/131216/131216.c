/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_17 = ((((((!((max(var_1, var_6))))))) - (min(((((arr_7 [i_0] [i_2] [5] [i_0]) == 1236072476))), ((2305843008139952128 & (arr_6 [i_0])))))));
                    arr_8 [i_0] [i_0] [i_0] = (max((((~var_3) ? (arr_5 [5] [5] [i_0]) : ((16138248336114078639 ? (arr_0 [i_0]) : var_16)))), (~1)));
                    var_18 = (min((((((arr_7 [1] [i_1] [i_2] [i_2]) ^ (arr_5 [i_0 - 2] [i_1] [i_0]))) ^ -109)), ((17226 >> (86 - 63)))));
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_19 = (max((((((~(arr_7 [i_0] [i_1] [i_3] [i_3])))) ? (~var_8) : (max(1236072467, var_10)))), (((var_10 < 1450741236850324861) + (arr_6 [i_0])))));
                    arr_11 [i_0] = ((((((arr_10 [i_0]) % var_6)) < ((24158 ^ (arr_10 [i_0]))))) ? ((((max(66, -51))) ? ((14973045129823772085 ? 8004741523449756208 : 17381254903519055398)) : (((max((arr_0 [i_0]), (arr_10 [i_0]))))))) : (min((min(var_7, (arr_6 [i_0]))), (8577198643606728391 ^ 0))));
                    arr_12 [i_0] [1] [4] = (min((min((!255), (min(16492674416640, 171)))), var_5));
                }
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_20 = (max(var_20, ((min(((((max(var_11, var_7)) * 1))), (min((arr_9 [10] [10] [i_4]), ((((arr_10 [6]) ? 207 : (arr_4 [8])))))))))));
                    var_21 = ((((max((((var_12 + (arr_10 [i_0])))), (min((arr_10 [i_0]), var_15))))) <= ((((((var_4 <= (arr_3 [1] [1] [i_4]))))) % (arr_9 [i_0] [i_0] [i_0])))));
                }
                arr_15 [i_0] [i_0] = var_10;
                var_22 = (min(var_22, (((!((((((arr_2 [2] [2]) ? 22671 : (arr_9 [i_0] [i_1] [0]))) + (((((arr_1 [6] [i_1]) <= var_13))))))))))));
            }
        }
    }
    var_23 = (max(var_23, (((((((14 ? var_6 : var_16)) & ((var_13 ? 16753621415682468353 : 1)))))))));
    var_24 = max(var_1, ((((65534 | 12378) ? (1 & var_9) : var_7))));
    #pragma endscop
}
