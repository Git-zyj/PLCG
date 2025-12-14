/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_10 [17] [i_2] [i_1] [i_1] [i_0] [i_0] = (!14822231245017412562);
                            var_13 = (max((arr_6 [i_1] [i_2] [i_2]), (arr_2 [i_1])));
                        }
                    }
                }
                arr_11 [i_0] [i_0] = ((((((arr_2 [i_1]) <= var_12))) > ((((min(var_10, var_3))) ? var_3 : ((((arr_5 [i_0] [i_0] [i_0] [i_0]) && (arr_8 [i_0] [i_1] [i_1] [18]))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    var_14 = (min(((var_4 ? (((1 ? (arr_19 [i_5] [i_5]) : 44))) : (min(var_4, 12094701553198541488)))), (((var_10 + var_0) ? (127 & 52) : (((arr_12 [i_4 + 2]) ^ -22936))))));
                    arr_21 [i_4] [4] [i_5] [i_6] = (max(((min(var_5, (arr_20 [23] [i_5] [6] [6])))), 0));
                    var_15 -= (min((((((arr_19 [i_4] [i_4]) ? 0 : 5309183774643559202)))), (min((arr_17 [i_6] [i_6] [i_4 + 3]), (arr_15 [i_4 - 1] [i_5] [i_6])))));
                }
            }
        }
    }
    #pragma endscop
}
