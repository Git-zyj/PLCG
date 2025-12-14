/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = (((arr_0 [i_0] [i_1]) | ((((((var_0 ? var_7 : (arr_4 [i_0] [10] [i_1])))) || (arr_0 [i_1] [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_16 = (((1206289066 ? 1206289066 : 14719)));
                            arr_9 [i_0] [i_2] [i_3] = (((3088678244 & var_1) ? (max((max(16789152449931631514, (arr_6 [1] [i_2] [i_2] [i_1]))), (((16789152449931631514 ? (arr_1 [i_2]) : (arr_8 [i_2] [i_1])))))) : ((min((!var_7), ((1 ? 9223372036854775786 : -1604219411879447948)))))));
                            var_17 &= var_11;
                        }
                    }
                }
                var_18 = ((+((((((arr_1 [i_0]) <= 3494822986657254423))) ^ (~var_3)))));
            }
        }
    }
    var_19 = ((var_2 - ((((max(4190208, var_6))) ? (max(16789152449931631505, var_4)) : (-2016093338030981863 / 3088678240)))));
    var_20 = (min(var_11, var_13));
    #pragma endscop
}
