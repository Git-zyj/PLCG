/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-2144714741 <= var_1) == (var_0 + var_5));
    var_12 = (min(var_12, (((-((((!var_5) >= var_2))))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((arr_1 [13]) <= (((arr_1 [i_0]) ? (arr_1 [i_0]) : 255))))) > ((max((((arr_0 [9]) > (arr_0 [i_0]))), (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (arr_3 [i_2 - 1])));
                    arr_7 [i_0] [i_1] [i_2] = ((-(((arr_1 [i_0]) ^ (((!(arr_4 [1] [11] [i_2]))))))));
                    arr_8 [i_1] [i_0] [i_0] = ((((!4170069624130239733) < (((arr_6 [9] [i_1] [i_1] [i_2]) << (7568056260256765756 - 7568056260256765731))))));
                }
            }
        }
        arr_9 [2] = ((77 == (((((342821164 ? (arr_1 [7]) : (arr_0 [13])))) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_0 [10])))));
    }
    #pragma endscop
}
