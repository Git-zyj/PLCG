/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max((max(var_8, 3101684011)), (3101684009 ^ var_0)))) ? (((3101684011 * var_6) ? 1193283270 : (((var_2 + 9223372036854775807) >> (3101684011 - 3101684010))))) : var_10));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_18 = ((var_7 ? var_2 : ((((-2147483647 - 1) ? 2147483647 : 1686191205)))));
                arr_5 [i_1] = ((((((arr_4 [i_0 - 3] [i_0 + 1]) + (arr_4 [i_0 - 3] [i_0 + 1])))) ? (((arr_0 [i_0 - 1]) ? (arr_1 [i_1]) : ((max(1, (arr_1 [8])))))) : (arr_1 [i_0])));
            }
        }
    }
    var_19 = var_6;
    var_20 = (min(var_20, (!var_6)));
    var_21 = var_15;
    #pragma endscop
}
