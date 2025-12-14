/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((((((((4294967295 - (arr_1 [i_0]))) != -1519279899)))) < 0));
                    arr_8 [i_0] [i_0] = ((~(((arr_3 [i_0] [i_1] [i_0 + 1]) % (arr_3 [i_0] [i_0] [i_0 + 1])))));
                    var_17 = (!213);
                }
            }
        }
    }
    var_18 = ((+(((((253 ? (-32767 - 1) : var_2)) == ((33609 ? var_3 : 2676141037)))))));
    var_19 = ((var_2 || (((((max(33621, 253))) ? var_9 : ((var_6 ? 7 : 32441)))))));
    #pragma endscop
}
