/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_12 = (min(((((((var_7 ? (arr_2 [i_1] [i_2]) : (arr_2 [i_0] [i_2])))) ? ((min(var_8, var_11))) : (((var_4 || (arr_5 [i_1]))))))), (min(var_5, var_5))));
                    arr_7 [i_2] [22] [i_2] = var_4;
                    var_13 = (((((((min(6695465544128596839, 3442019853))) && (~246589704)))) * ((((min(4048377604, 458))) ? (!4048377591) : (arr_4 [i_0] [i_1] [i_1] [i_2])))));
                    arr_8 [i_1] [i_1] [i_1] |= (((((!(arr_3 [i_1] [i_1])))) == ((~(arr_3 [i_2] [i_0])))));
                }
            }
        }
    }
    var_14 = var_2;
    var_15 |= (1085724815318724526 >= 1085724815318724526);
    var_16 = (min(var_4, var_8));
    var_17 = (((((min(var_4, var_10)) & (246589689 >= var_9))) << (((min(var_7, ((-18016 ? var_11 : var_10)))) - 14888))));
    #pragma endscop
}
