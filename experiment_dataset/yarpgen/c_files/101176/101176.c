/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_0));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((((((4385001458376271762 ? 12755087911472001879 : 18446744073709551598))) ? 598392841121809566 : 4385001458376271746)) * ((~(arr_1 [i_0]))));
                var_18 = (max(var_18, (max((var_8 * 0), (~-var_6)))));
                arr_5 [i_0] = ((((17848351232587742050 ? var_3 : (arr_3 [i_0 + 2] [i_0 - 1])))) ? ((~(arr_3 [i_0 - 3] [i_0 + 1]))) : (((arr_3 [i_0 + 1] [i_0 - 1]) ? (arr_3 [i_0 + 1] [i_0 + 3]) : (arr_3 [i_0 + 2] [i_0 - 2]))));
            }
        }
    }
    #pragma endscop
}
