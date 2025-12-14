/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = ((((65508 <= (8 + 8))) ? ((((!(arr_0 [i_0] [i_0]))))) : (((arr_0 [i_0] [i_0]) % (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))))));
        arr_2 [i_0] = ((((((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) + (arr_0 [i_0] [i_0])))) ? (((!((max(1, 1597558055)))))) : (arr_1 [i_0] [i_0])));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                {
                    var_20 += (((!(((~(arr_8 [i_1] [i_1] [i_1] [i_1])))))));
                    arr_11 [i_3 + 1] [i_2] [i_1] = (arr_10 [i_2]);
                }
            }
        }
    }
    var_21 = (!var_18);
    #pragma endscop
}
