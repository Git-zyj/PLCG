/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [0] = (((min(((var_1 ? -9223372036854775799 : -1853082704)), (arr_6 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 1]))) < 1046615988));
                    arr_8 [4] [6] [6] [0] = (((((56 ? -1046615988 : (max(55684, -1046615988))))) ? var_0 : ((((min(var_13, 4611686018427387904))) ? (max(var_18, var_0)) : (arr_5 [i_0] [i_0] [i_0] [i_0])))));
                    var_19 = (((((~(arr_2 [i_2 + 2])))) ? 3206034841 : -1046615988));
                }
            }
        }
    }
    var_20 = ((var_18 ? var_13 : 9088961893041105450));
    var_21 += var_2;
    var_22 = var_8;
    var_23 = var_18;
    #pragma endscop
}
