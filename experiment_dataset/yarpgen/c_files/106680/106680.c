/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((((((21611 >> (var_6 - 27768)))) ? var_5 : var_4))), 0));
    var_11 &= (min(((24492 ? 1 : 65535)), var_0));
    var_12 = 7262180786744924420;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((var_6 ? (~27413) : (arr_4 [i_0 + 1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_14 = (((!43925) >> ((2063661601 ? (min(var_8, 11375612772166211120)) : (((min(var_5, (arr_1 [i_3])))))))));
                            var_15 = (min((((arr_4 [i_0]) ? 8191 : (arr_6 [i_2]))), (((!(arr_7 [i_3 - 1] [i_1 - 1] [i_0 + 1]))))));
                        }
                    }
                }
                var_16 = (((((var_7 ? var_5 : var_0))) ? (!0) : (arr_4 [i_0])));
            }
        }
    }
    #pragma endscop
}
