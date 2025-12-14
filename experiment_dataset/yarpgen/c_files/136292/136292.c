/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] [i_0] [17] [3] = ((~((((-93414569 & 4089) != -9223372036854775805)))));
                    arr_8 [i_2] [i_1] [i_0] = min((((!((min(var_6, 336098695)))))), ((var_1 & (arr_5 [i_0] [i_1 - 2] [i_1 - 2] [i_1 - 2]))));
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_1] = ((((((max((arr_9 [i_0] [i_0] [i_0] [i_3]), (arr_1 [i_0])))) <= 16984)) ? (((((-63 || (arr_2 [i_0] [i_0])))) * (((arr_9 [i_0] [i_0] [20] [i_3]) ? (arr_10 [i_0]) : (arr_9 [i_3] [i_1] [15] [i_3]))))) : ((((arr_3 [i_0] [i_1]) ? 99 : 1062282283)))));
                    arr_12 [i_0] [i_3] [i_0] = ((3 ? 16986 : 111));
                }
                arr_13 [i_1] = ((!((((min((arr_9 [i_0] [i_1] [i_1] [i_1]), (arr_0 [i_0])))) <= (16974 <= 8408093433080564964)))));
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        arr_16 [i_4] = ((-118 >= (arr_6 [i_4] [i_4] [i_4] [i_4])));
        arr_17 [i_4] [i_4] = (arr_14 [i_4]);
    }
    #pragma endscop
}
