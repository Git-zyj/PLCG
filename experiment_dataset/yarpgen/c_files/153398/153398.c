/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((((max(0, -1151552090142336136)))) ? (2762383342 >= var_11) : var_1);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = ((((((((arr_1 [i_0]) ? 3961 : (arr_1 [i_0]))) % (arr_1 [1])))) ? (max(((max(5954, (arr_1 [i_0])))), (min((arr_0 [i_0] [i_0]), 3968)))) : (arr_1 [i_0])));
        arr_2 [i_0] = ((((-((-3962 ? 104 : 3962)))) * (((3669237173 >= (arr_0 [9] [i_0]))))));
        arr_3 [i_0] |= (((((arr_1 [i_0]) ? ((max(114, -3933))) : (arr_1 [i_0]))) >> ((((!(arr_0 [i_0] [i_0])))))));
    }
    #pragma endscop
}
