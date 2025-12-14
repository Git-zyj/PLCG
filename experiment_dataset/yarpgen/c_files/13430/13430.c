/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -var_2;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 |= (((arr_2 [i_0 - 3]) ? ((((arr_2 [i_1]) ? ((((arr_1 [i_0 + 1]) != 1))) : (((arr_3 [i_0] [i_1]) - (arr_1 [i_0 - 1])))))) : (~8765331506389421877)));
                arr_4 [i_0 + 1] [i_1] [i_1] = -423220896;
                arr_5 [i_0 + 1] |= ((((max(1, 11))) ? (~3758096384) : 127));
                arr_6 [i_0] [i_1] [i_1] = (max(5589976967902570229, (((~(arr_3 [i_0 + 2] [i_0 - 2]))))));
                var_14 -= (!204);
            }
        }
    }
    var_15 = (min(((~((var_0 ? 423220891 : var_6)))), (max((~var_8), (var_10 & 423220899)))));
    #pragma endscop
}
