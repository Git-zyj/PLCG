/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (max(255278953, (min(((2088591190 ? 1898809790 : 2419579379297470675)), (2419579379297470675 - 30)))));
    var_19 = (min(2088591190, 0));
    var_20 = ((((8930 ? (-8930 <= -24) : (min(1212643743, 4039688335)))) >> ((-2497826004447871949 ? ((194 >> (-5 + 13))) : -1857648714))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0 - 2] = (((0 > (arr_0 [i_0]))) ? ((-1925530890525921513 ? var_0 : -261711908)) : ((-(arr_2 [i_0]))));

        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_0] [1] [i_1] = ((var_3 ? ((((arr_1 [i_1 + 2]) ? 6589 : (arr_0 [6])))) : ((4294967289 - (arr_0 [i_1 - 2])))));
            arr_7 [i_1 - 1] [i_0] = (((((var_3 + 2147483647) >> (5529383851188400635 - 5529383851188400625))) + (((!(arr_2 [3]))))));
        }
    }
    #pragma endscop
}
