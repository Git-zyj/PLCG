/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    var_17 = 15550;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = var_4;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_13 [10] [2] [i_2] [i_1] = ((((var_3 <= (227487205 > var_11))) ? (max((((279223176896970752 || (arr_1 [i_2] [i_2])))), 279223176896970742)) : (((3101516110 || (~33573))))));
                                var_19 = ((((max((min(var_11, 2905996877)), 227487205))) ? ((((arr_12 [i_1] [2] [2] [2] [i_4]) ? var_7 : 31962))) : (10 >= var_7)));
                            }
                        }
                    }
                }
            }
        }
        var_20 = ((((((!(arr_12 [2] [2] [i_0] [i_0] [i_0]))))) != (arr_5 [i_0] [i_0] [i_0] [6])));
        arr_14 [i_0] = ((-(arr_2 [i_0])));
    }
    #pragma endscop
}
