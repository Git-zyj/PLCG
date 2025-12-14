/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((((((4064 ? var_3 : 1))) ? 1 : ((2048 ? 4064 : 1024))))) ? (!var_10) : var_12));
                var_14 -= max(1, ((3163680039914222411 ? 190 : 1)));
                var_15 = var_5;
            }
        }
    }
    var_16 *= (min((((var_12 || (((-55 ? var_12 : 18446744073701163008)))))), ((min(var_5, var_3)))));
    var_17 = (min(((((var_0 ? var_1 : 31)) == var_13)), (!0)));
    var_18 = (32766 && 4069);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_19 = (min(var_19, 1));
                var_20 ^= (min(12206, 1204554211));
                var_21 ^= var_4;
            }
        }
    }
    #pragma endscop
}
