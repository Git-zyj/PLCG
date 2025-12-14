/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((((~var_9) | ((1 ? 1 : 18446744073709551615)))), ((max(0, 0)))));
    var_19 = (((max((~var_4), (max(var_13, 65535)))) ^ ((((~var_0) >> (2696392372 - 2696392356))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [14] [14] = (((((((1598574939 ? 1891912698 : var_0))))) >= ((var_17 * (((arr_1 [i_0]) ? (arr_5 [i_0] [i_1] [i_1]) : 6302312084396942529))))));
                arr_8 [3] = 1891912698;
                arr_9 [i_0] = arr_2 [i_1] [i_0];
            }
        }
    }
    #pragma endscop
}
