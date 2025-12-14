/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = -65521;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_16 = 35462;
                            arr_11 [i_0] [i_0] = (((((arr_8 [1]) ? 738518994792706059 : (((738518994792706064 ? -62 : var_6))))) ^ (-2147483647 - 1)));
                        }
                    }
                }
            }
        }
    }
    var_17 = (16 != 1023);
    var_18 = (max(var_18, 54682));
    var_19 = (((-78281203 > var_3) ? ((((!(~2327489967))))) : var_1));
    #pragma endscop
}
