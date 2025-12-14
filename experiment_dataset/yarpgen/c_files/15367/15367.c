/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = -39713059;
        arr_2 [i_0] [7] = max((max(123, var_6)), (((var_11 << (((arr_1 [i_0]) - 62432))))));
    }
    var_14 = (min(var_1, var_0));

    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_5 [i_1] = (min((((arr_4 [i_1]) ? 39713058 : var_3)), (((2251799813685248 ^ (arr_3 [i_1]))))));
        var_15 = (max(((max((arr_3 [i_1]), (arr_3 [i_1])))), (arr_4 [i_1])));
    }
    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        arr_9 [3] = (((((-39713059 ? (((max(var_7, var_5)))) : ((190 ? 1 : 7514747535317350178))))) ? ((max(5279204085272993653, -2251799813685258))) : 177));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 8;i_4 += 1)
            {
                {
                    var_16 = ((~((var_1 ? (arr_13 [i_2 + 2] [i_2 + 3] [i_2 + 3]) : (arr_13 [i_2 + 2] [i_2 + 2] [i_4])))));
                    var_17 = ((-(((((((arr_7 [i_4 + 1] [i_3]) ? 218 : 37))) && (var_8 || -2030727547046611211))))));
                    var_18 = (!(((min(2641988265393805468, 2030727547046611210)) > (((-2251799813685263 ? var_11 : var_9))))));
                    var_19 = 45;
                }
            }
        }
    }
    #pragma endscop
}
