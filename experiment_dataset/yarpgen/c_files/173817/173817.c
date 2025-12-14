/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_15 = (min(var_15, 155));
        var_16 = (min(var_16, (arr_2 [i_0])));
        var_17 *= (max(((((max(87, 0))) ? (max(165, 0)) : ((91 ? 18417506716970961594 : 110)))), (arr_0 [i_0] [i_0 + 3])));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (max((max((((arr_5 [i_1]) ? (arr_5 [i_1]) : -751921476)), ((min(100, 0))))), 20859));
        var_18 -= (~7073469024950187006);
    }
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        var_19 -= (arr_9 [i_2] [i_2]);
        var_20 = ((0 ? 156 : 283726776524341248));
        var_21 = (((((max(15361899929971480058, 44677)))) ? -182 : (min(281474976710528, 150))));
    }
    var_22 = (max(var_22, (((165 ? 99 : 114688)))));
    #pragma endscop
}
