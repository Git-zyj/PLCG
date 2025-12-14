/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = (min((((arr_5 [i_0]) ? (arr_5 [i_1]) : 36028779839094784)), -8500402576252008386));
                var_20 = ((-((((var_5 <= (arr_4 [i_1]))) ? (((((arr_2 [i_0]) == (arr_0 [i_0] [i_0]))))) : var_6))));
                var_21 = (((((!(-2147483647 - 1)))) <= (((36028779839094799 <= 8500402576252008359) ? (137 && 36028779839094784) : (((!(arr_2 [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
