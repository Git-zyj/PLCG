/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= 1;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = (min((min(103, ((15895444436568483240 * (arr_1 [4]))))), (((0 | (arr_3 [i_0] [i_0]))))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = (arr_1 [i_0]);
            var_15 = 1;
        }
        arr_8 [i_0] &= (((((((max(576390383559245824, 1))) ? 1 : ((-123 ? (arr_5 [i_0] [i_0]) : (arr_1 [i_0])))))) ? ((max((arr_2 [i_0] [7]), (arr_6 [i_0] [i_0] [i_0])))) : (1 <= 6805231137618558398)));
    }
    var_16 = ((!((((1 != 1) ? ((var_0 ? 0 : var_4)) : 27883)))));
    var_17 = -2083192906;
    #pragma endscop
}
