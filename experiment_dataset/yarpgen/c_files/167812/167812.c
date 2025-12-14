/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [1] [1] [1] = (((max((!0), 766502248))) - ((((((arr_3 [i_0] [i_1] [i_1]) ? (arr_0 [i_0] [i_0]) : var_3))) ? 1 : ((30 ? var_11 : -4358956670101906565)))));
                var_19 = (min(var_19, (((-1360212274225921977 ? ((((((arr_1 [i_0]) ? -1360212274225921974 : (arr_2 [i_0] [i_0] [i_0])))) ? ((((arr_0 [i_1] [i_1]) ? var_7 : -612480396))) : (((arr_2 [9] [9] [9]) ? (arr_2 [i_0] [1] [1]) : 8678220198342941914)))) : ((((!(((arr_0 [11] [i_1]) && (arr_0 [i_0] [i_1]))))))))))));
            }
        }
    }
    var_20 = (max(var_20, var_8));
    var_21 ^= -var_6;
    #pragma endscop
}
