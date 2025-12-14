/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_10 = ((((min(155, 8759420650163631223))) || (((-(94 || -9))))));
                arr_6 [0] [i_0] = ((+((((~172) || (~9011170684396363453))))));
                arr_7 [i_1] [i_0] = ((!(((~(123 || 4294967295))))));
                arr_8 [i_1] &= ((148 || ((54 || (116 ^ 0)))));
            }
        }
    }
    var_11 = ((((((max(230, 8070450532247928832))) || (~7077))) || (5770886839650098944 / -115)));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 14;i_4 += 1)
            {
                {
                    var_12 *= 31;
                    var_13 = (~(((4200508185160715382 || 100) ? 1 : 228)));
                }
            }
        }
    }
    var_14 = 1;
    var_15 = ((108 / -7179460422176018885) ? (-4 / -3371534018830718093) : -1);
    #pragma endscop
}
