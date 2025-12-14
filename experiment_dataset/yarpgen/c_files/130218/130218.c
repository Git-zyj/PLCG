/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((((((13889 ? var_11 : ((min(59581, 55960)))))) ? (min((var_11 <= 2596597208), 1930320167)) : -2364647128)))));
    var_17 = ((181 ? (min((!78), 1930320167)) : var_6));
    var_18 = var_7;
    var_19 = -1;

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = var_12;
        arr_4 [i_0] = (!(((((max(var_0, 1930320157))) ^ ((~(arr_1 [i_0] [i_0])))))));
        var_20 ^= ((55991 ? 2364647136 : 79));
        var_21 |= (~47175);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_22 = ((~((((arr_7 [i_1]) > (arr_7 [i_2]))))));
            arr_11 [i_1] [i_1] [i_1] = min(56000, 353591328);
            var_23 += (!1872373625);
            arr_12 [i_1] [i_2] [i_2] = (((((((min(1, 183))) ? (658733656 != 85) : (arr_7 [i_1])))) ? (min(((-(arr_10 [i_1] [i_2]))), ((1 ? 2364647112 : 1)))) : (((((6966195240794323388 >> (6966195240794323373 - 6966195240794323312)))) ? 2647847531 : var_3))));
        }
        arr_13 [i_1] [i_1] = ((((max(var_4, ((142 ? 9544 : -23275))))) ? ((((((arr_0 [i_1] [i_1]) ? 1 : var_8))) ? (arr_7 [i_1]) : ((247 ? 7799236325240194972 : 241)))) : ((((!(((var_5 ? var_9 : var_0)))))))));
        arr_14 [i_1] = ((((min(50, -17802))) ? var_12 : (arr_7 [i_1])));
    }
    #pragma endscop
}
