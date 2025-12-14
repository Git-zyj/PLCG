/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((((((!59336) | (arr_1 [i_0])))) ? ((6220 & (-9223372036854775807 - 1))) : ((((arr_4 [i_0]) ? ((~(arr_4 [i_0]))) : (max(0, 52693)))))));
                var_15 = (((!(576460752303423487 / 7325))) ? (max((arr_2 [i_1 + 1] [i_1 + 1] [7]), (arr_2 [i_1 + 1] [i_1 - 1] [0]))) : (arr_3 [i_0]));
                var_16 = -9223372036854775806;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 24;i_3 += 1)
        {
            {
                var_17 = (min(var_17, (~18446744073709551613)));
                arr_12 [i_3 + 1] = (((arr_9 [i_3 - 1]) ? ((+((18446744073709551598 ? (arr_11 [i_2] [i_3 + 1] [i_3 - 1]) : (arr_7 [i_3 - 2] [i_2]))))) : (((((arr_10 [i_2] [i_2]) ? (arr_11 [i_2] [i_2] [i_2]) : 531494706))))));
                arr_13 [i_2] [i_3] = ((((((arr_10 [i_3 - 2] [i_3 - 1]) ? (arr_10 [i_3 - 2] [i_3 + 1]) : (arr_10 [i_3 - 1] [i_3 - 2])))) ? (((!(~1040182438)))) : ((~(((!(arr_9 [i_2]))))))));
            }
        }
    }
    #pragma endscop
}
