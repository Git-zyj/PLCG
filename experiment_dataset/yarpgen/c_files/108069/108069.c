/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (min((max(var_9, ((var_1 ? var_0 : var_8)))), (~-4309468588592023069)));
    var_11 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = ((((((arr_0 [i_1]) ? var_8 : (arr_0 [i_2])))) ? ((var_7 ? (arr_6 [4] [3] [i_0]) : (arr_6 [i_2] [16] [11]))) : (((!(arr_3 [15] [4] [13]))))));
                    var_13 = (min((arr_8 [i_0] [17] [1] [i_2]), (min((arr_8 [i_0] [18] [7] [i_2]), -8537207120751500715))));
                    var_14 = (min(var_14, (((((max(4294967270, (((~(arr_3 [18] [17] [2]))))))) ? var_9 : (arr_0 [4]))))));
                    var_15 -= (max(((((arr_3 [i_0] [1] [i_2]) ? (arr_3 [i_0] [6] [11]) : var_2))), (min((((!(arr_8 [8] [14] [2] [1])))), -1))));
                }
            }
        }
    }
    #pragma endscop
}
