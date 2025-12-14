/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (30743 % -30745)));
                arr_4 [i_0] [i_0] = (arr_3 [i_0]);
                var_12 ^= ((((!((max(var_4, var_6)))))));
            }
        }
    }
    var_13 = ((!(var_3 && var_2)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            {
                var_14 = (arr_8 [i_3]);
                arr_10 [i_2] = ((((-(arr_5 [i_2] [i_3]))) != (((!(arr_9 [i_2] [i_3]))))));
                var_15 = (max((((!(((var_8 ? (arr_6 [i_3]) : (arr_7 [i_2] [i_2]))))))), (max(var_1, var_7))));
                arr_11 [i_3 + 1] = 7131577838773872191;
            }
        }
    }
    #pragma endscop
}
