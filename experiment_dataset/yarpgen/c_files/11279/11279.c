/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((!var_2) ^ -var_0)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [1] = ((-(min(var_9, (arr_0 [i_0] [i_0])))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_11 = (!((((arr_4 [i_0] [i_0] [i_1]) ? ((((6727195451663651474 > (arr_0 [2] [12]))))) : (max(66, 6727195451663651474))))));
            var_12 = (((min(((var_7 ? 6727195451663651474 : (arr_1 [9] [i_0]))), 1))) ? (((((~(arr_4 [i_0] [i_0] [i_1])))) ? ((var_1 ? (arr_4 [i_0] [i_0] [i_0]) : 6727195451663651478)) : (((arr_3 [i_0] [i_1]) & (arr_0 [i_1] [i_0]))))) : (((((((arr_0 [15] [1]) | var_6)) == (((min((arr_4 [i_0] [i_1] [5]), (arr_3 [i_0] [i_0]))))))))));
            arr_5 [i_0] [i_0] [i_0] = ((((max(((12706225515319383638 ? 1315290706 : 3980368388295805308)), -1681914154767515975))) ? (min(((var_7 ? var_3 : (arr_0 [i_1] [i_0]))), ((((arr_4 [i_0] [i_0] [i_0]) < var_9))))) : ((1315290700 - (((arr_0 [i_0] [i_0]) / var_2))))));
            var_13 = ((~(((((arr_4 [i_0] [i_0] [i_0]) ? (arr_1 [i_1] [i_0]) : 1)) >> (arr_3 [i_0] [i_1])))));
            arr_6 [i_0] = max((((~(arr_3 [i_0] [2])))), (((arr_0 [i_1] [i_0]) - (arr_4 [2] [i_1] [i_1]))));
        }
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_14 = (max(var_14, (((-((-(arr_9 [i_2]))))))));
        var_15 = 1;
        var_16 = -1;
        var_17 = ((var_4 ? 0 : (((+(min((arr_7 [i_2]), (arr_4 [i_2] [i_2] [i_2]))))))));
        var_18 = (min(var_18, ((((((((6727195451663651484 || (arr_9 [i_2]))) ? (min(6727195451663651471, 11719548622045900148)) : (((min(var_4, 1))))))) || ((!(1 && var_8))))))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        var_19 = (min(var_19, ((!(((-((max(7875, 108))))))))));
        var_20 = (max(var_20, (((-(min((((arr_8 [i_3]) % 2251799813685247)), (((-1579003430 ? (arr_11 [i_3] [i_3]) : 1246771072))))))))));
    }
    var_21 = (((((~((max(1, var_8)))))) ? var_7 : (((~(~1))))));
    #pragma endscop
}
