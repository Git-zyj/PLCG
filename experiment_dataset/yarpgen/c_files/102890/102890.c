/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_11 = ((-1417142045 ? 1417142055 : 1));
        arr_3 [i_0] [i_0 - 1] = (min((((arr_1 [i_0 + 2]) ? (arr_1 [i_0 + 1]) : 1)), ((min(0, 2047)))));
    }
    var_12 |= 188521034830093016;
    var_13 = (max(101, -70));
    var_14 = ((((min((((0 ? 182 : var_9))), var_0))) ? ((((-70 ? 4089407478068736225 : 255)) | (31521 && var_10))) : (((~((min(var_6, var_5))))))));
    #pragma endscop
}
