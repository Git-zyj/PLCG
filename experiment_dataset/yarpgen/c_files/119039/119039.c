/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = 9776682867912461765;
                    arr_8 [i_0] [i_0] [i_0] = (((((var_4 ? (((arr_2 [1] [1]) ? -13332 : 241)) : ((var_10 - (arr_3 [9] [i_2])))))) ^ (max(-13426632948883355782, ((var_10 ? (arr_3 [i_1] [i_2]) : 9776682867912461779))))));
                    var_12 = (min(var_12, (((!(((var_5 ? ((((arr_7 [i_0] [7] [7]) < 25269))) : ((24891 ? (arr_5 [7] [i_1] [i_0]) : 1065353216))))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            {
                var_13 = (min(var_13, (((((((min(49152, (arr_9 [i_3] [i_3])))) ? (arr_13 [8]) : (~218)))) ? 28759 : (((max(8670061205797089851, (arr_11 [i_3] [12])))))))));
                var_14 = (min((((arr_9 [i_4 - 1] [i_3]) ^ ((var_4 ? (arr_12 [i_3] [i_3]) : (arr_9 [i_4] [5]))))), ((((arr_13 [i_3]) >= ((var_9 ? 160 : 218)))))));
                var_15 = (arr_15 [i_3]);
                arr_16 [i_3] = arr_12 [i_3] [i_3];
            }
        }
    }
    var_16 = (min(var_2, (var_5 != 96)));
    #pragma endscop
}
