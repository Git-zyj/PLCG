/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_18 -= min(((((min(var_11, (arr_3 [8] [8])))) ? (!172245656) : (min(var_14, var_4)))), ((8477620021606004392 ? 1609327379408043097 : -7563512011511831501)));
        arr_4 [7] [i_0] = (-9223372036854775785 ? var_9 : (236959764 ^ -7373767786130573779));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_19 = (((((arr_7 [i_1] [i_1]) ? var_10 : (arr_7 [i_1] [i_1]))) + (max(-1600903655, (arr_7 [i_1] [i_1])))));
        arr_8 [i_1] = ((-1634485595 ? 7563512011511831501 : (((((8189674288171522610 ? 1045665312 : -649461852))) ? (max((arr_0 [i_1]), 1274759533971515056)) : (min(9223372036854775807, 7719642022234511165))))));
        var_20 = ((min(((-3056007234127854150 ? (arr_2 [i_1]) : (arr_2 [i_1]))), (arr_5 [3] [i_1]))));
    }
    var_21 ^= (((((!831254779) ? ((-236959782 ? (-9223372036854775807 - 1) : -1630996072)) : (max(1158350895, -5341100139147485664))))) ? ((((min((-9223372036854775807 - 1), -6600243741932212672))) ? -365015689580797223 : 9223372036854775807)) : ((((!(((var_0 ? var_10 : var_9))))))));
    #pragma endscop
}
