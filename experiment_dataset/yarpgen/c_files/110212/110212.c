/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max(16366419695345723412, 3317256266))) >> 16366419695345723404));
    var_14 = ((((var_1 || (!var_2))) && ((((var_0 || var_6) ? var_8 : (!var_7))))));
    var_15 = (max((max((max(281474976710655, -123)), ((var_3 ? 281474976710652 : var_1)))), 2080324378363828204));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (max((max((arr_4 [i_0] [i_0] [i_0]), ((~(arr_4 [i_0] [i_0] [i_0]))))), (18446462598732840964 >= 2147483646)));
                arr_6 [i_1] = ((-1 ^ (((!((max(103, 1))))))));
            }
        }
    }
    var_17 = 1274741233;
    #pragma endscop
}
