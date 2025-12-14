/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((+((((-127 >= var_2) != ((23466 ? var_8 : var_9)))))));
    var_14 = (((max((var_3 / var_1), ((27338 << (((-1619042509 + 1619042526) - 16)))))) == -27338));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (((~((min(-107, (min(27338, (arr_5 [i_1])))))))))));
                    arr_9 [i_2 - 2] [10] = (max((arr_4 [i_0] [i_0] [i_0]), ((((min(var_4, (arr_7 [i_2] [i_1] [i_1] [i_0])))) / -1926880156))));
                    var_16 = (!27338);
                }
            }
        }
    }
    #pragma endscop
}
