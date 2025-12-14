/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, (((((((arr_3 [i_2] [i_0]) ? (arr_3 [i_2] [i_2]) : (arr_3 [i_2] [i_2])))) ? ((max(-2022917928767389060, var_4))) : (min(4579936203051504103, (arr_3 [i_2] [i_2]))))))));
                    var_12 = (((var_0 ? -97 : 23038)));
                    var_13 ^= (arr_3 [i_2] [i_2]);
                }
            }
        }
    }
    var_14 = (max((var_5 + 40127), ((min(((min(var_5, var_5))), (max(1713965386, 1249412608)))))));
    #pragma endscop
}
