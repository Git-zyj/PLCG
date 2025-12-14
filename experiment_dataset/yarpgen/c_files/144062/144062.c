/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((((!(2147483647 == 255))) ? (~27) : 111));
                var_12 ^= (var_3 - (min((min((arr_4 [i_1]), (arr_2 [i_0] [i_0]))), ((((arr_3 [i_1]) + (arr_4 [i_0 + 1])))))));
                var_13 *= ((((((min(var_10, -83))) && ((min(229, (arr_2 [3] [i_1])))))) ? ((((!(!82))))) : (arr_2 [i_0 - 1] [i_0 + 1])));
                arr_7 [i_0] [12] [12] = ((((!(arr_1 [i_0 + 2]))) ? 420129318437910754 : var_4));
                arr_8 [i_0] [i_0] [i_0] &= (min((((0 ? (((arr_2 [i_0 - 1] [i_0 - 1]) ? 0 : -3988416051127127811)) : (((((arr_1 [i_0]) >= 1))))))), (min(3988416051127127811, 17803793259504836608))));
            }
        }
    }
    var_14 ^= var_5;
    #pragma endscop
}
