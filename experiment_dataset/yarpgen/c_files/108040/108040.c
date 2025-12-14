/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (arr_6 [i_2]);
                    arr_7 [i_2] [i_0] [i_0] = ((5894272716946262432 ? (((~((var_0 ? (arr_6 [i_2]) : (arr_3 [i_1] [i_1] [i_0])))))) : ((16585797752334156327 ? 6880939918665831736 : 15737865937909797055))));
                    var_19 &= (((((~(((arr_5 [i_1]) | (arr_2 [i_2])))))) ? ((((!(arr_6 [i_0]))))) : (max(var_10, 35184372088831))));
                    var_20 = (max(var_20, var_13));
                    var_21 = var_8;
                }
            }
        }
    }
    var_22 = min((941027398 | 32735), ((~(!var_9))));
    #pragma endscop
}
