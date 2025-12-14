/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [1] = ((((max((var_6 <= var_14), ((8109249127440077439 ? var_6 : -1))))) - (max(1024005884, var_5))));
                arr_6 [i_0] [i_0] = ((1051214070 ? ((max(-2147483625, ((max(60234, 8995)))))) : (((max(-7017226566240957350, 15921)) ^ var_3))));
                arr_7 [10] [i_1] [i_1] = ((65535 ^ (18395502964537603465 / -1)));
            }
        }
    }
    var_17 = max((max(-var_7, ((var_11 ? -5168 : var_15)))), ((var_5 ? var_13 : var_10)));
    #pragma endscop
}
