/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_19 = (max(var_19, ((((arr_1 [i_0] [7]) & (min(((-6102752707861699182 ? (-127 - 1) : 2250700302057472)), (arr_2 [i_0 + 1]))))))));
        arr_3 [i_0] = ((((max((arr_1 [i_0 + 1] [i_0 - 1]), (((arr_2 [i_0]) & var_5))))) ? (min((arr_2 [i_0 + 1]), ((11064 * (arr_2 [5]))))) : (((arr_2 [i_0 + 1]) ? ((var_3 ? (-32767 - 1) : 255)) : ((252 ? (arr_0 [7]) : 0))))));
        var_20 = (((!(arr_2 [i_0 + 1]))));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] = ((((((var_1 | 14208765334788577340) ? (((arr_4 [i_1] [i_1]) ? (arr_4 [i_1 - 2] [i_1 - 2]) : (arr_5 [0]))) : (arr_5 [i_1 - 2])))) ? (((arr_5 [i_1 + 1]) ? (arr_4 [i_1] [i_1 - 1]) : ((var_3 ? (arr_5 [i_1 + 1]) : 7)))) : ((~((var_4 ? (arr_5 [i_1]) : (arr_4 [i_1] [i_1])))))));
        arr_7 [0] = min(((((max(32760, (arr_5 [i_1])))) ? 255 : (((arr_5 [i_1]) ? 21436 : (arr_4 [8] [i_1]))))), var_12);
        var_21 = (((max(((min(63, var_2))), (arr_5 [i_1 - 2]))) % (((~(arr_4 [i_1 + 1] [i_1 + 1]))))));
        arr_8 [i_1] = (((((~(((-32767 - 1) | (arr_5 [i_1 - 1])))))) ? (((arr_4 [i_1] [i_1 - 1]) ? 0 : var_11)) : ((~(max((arr_5 [i_1 - 2]), (arr_4 [i_1 + 1] [i_1 + 1])))))));
    }
    var_22 = ((((min(var_15, var_3))) ? (((max(13905570613306966204, var_2)) - var_13)) : var_9));
    var_23 ^= (max((min(var_16, (min(var_8, 61)))), (((((32760 ? 8070450532247928832 : 7)) < var_17)))));
    var_24 = 22971;
    #pragma endscop
}
