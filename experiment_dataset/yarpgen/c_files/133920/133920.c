/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max(((min(4294967295, var_2))), var_9))) && 23));
    var_21 = (min((var_5 != var_1), 122));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_22 = ((var_14 ? (!48927) : (4294967289 / 27063)));
                            var_23 = (37615 != 2922147569);
                        }
                    }
                }
                var_24 = 1836;
                arr_13 [i_0] = 253030845728249999;
                var_25 = ((((min(18446744073709551615, 36390))) ? (min(663974175, 12122)) : (((~(!-1686497676083654200))))));
            }
        }
    }
    #pragma endscop
}
