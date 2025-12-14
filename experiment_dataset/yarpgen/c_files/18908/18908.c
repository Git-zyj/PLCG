/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [3] [i_2] = ((((((9223372036854775806 != var_1) - (arr_4 [i_2 + 2] [i_2 + 2] [i_2 - 2])))) ? (((((var_0 << (var_0 - 1341178120)))) ? (((arr_2 [i_0]) << var_4)) : (((var_2 ? var_12 : 32767))))) : ((((((var_4 ? -32767 : (arr_1 [i_0] [i_1])))) ? -var_12 : (((arr_0 [i_1] [i_2 - 1]) ? 10479 : var_13)))))));
                    var_15 = (((((var_4 ? 14642 : 32760))) & ((((((arr_1 [i_0] [i_2]) / 4294967291))) ? (48 | var_11) : var_10))));
                }
            }
        }
    }
    var_16 = ((32760 ? ((-((max(-32746, -9))))) : ((var_1 >> ((((var_9 ? var_3 : 207)) + 141))))));
    var_17 -= ((var_8 ? var_2 : ((~((var_13 ? var_3 : var_2))))));
    var_18 = (((((((5135211013103382331 ? var_3 : 32745)) % (var_11 != -15573)))) ? ((var_10 ^ (!5135211013103382331))) : ((((1489801157 * var_2) | var_4)))));
    #pragma endscop
}
