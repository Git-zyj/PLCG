/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(5467, -25640));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] &= (max((min(((min((arr_1 [i_0]), (arr_0 [i_2])))), (min((arr_0 [i_0]), (arr_2 [i_2]))))), ((max((min((arr_3 [i_0]), (arr_6 [i_2]))), (max((arr_3 [i_1]), (arr_1 [i_1]))))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (min((((arr_2 [i_0]) ? ((max((arr_6 [i_2]), (arr_3 [i_0])))) : (arr_0 [i_0]))), ((max((arr_1 [i_0]), (arr_1 [i_0]))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (max((arr_4 [i_2]), ((~(arr_4 [i_2])))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (max((min((((arr_4 [i_1]) ? (arr_6 [i_1]) : (arr_1 [i_1]))), (arr_5 [i_0]))), ((((((arr_5 [i_2]) ? (arr_5 [i_0]) : (arr_0 [i_0])))) ? ((max((arr_3 [i_0]), (arr_1 [i_1])))) : (((arr_6 [i_0]) ? (arr_5 [i_0]) : (arr_0 [i_1])))))));
                    arr_11 [i_0] [i_0] [i_0] = ((((max((arr_1 [i_0]), (((arr_5 [i_1]) ? (arr_6 [i_1]) : (arr_0 [i_1])))))) ? (min(6364212088652761083, ((max((arr_3 [i_1]), (arr_6 [i_1])))))) : (max((max((arr_2 [i_1]), (arr_6 [i_0]))), ((((arr_5 [i_1]) ? (arr_1 [i_1]) : (arr_1 [i_0]))))))));
                }
            }
        }
    }
    var_15 = (min((min((max(var_4, var_9)), var_12)), ((max(var_11, ((min(var_3, var_3))))))));
    #pragma endscop
}
