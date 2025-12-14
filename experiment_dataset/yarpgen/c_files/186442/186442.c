/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_18 = (min((arr_6 [i_0] [i_0]), -23105));
                var_19 += ((((8707224460834258230 * (1779361527 / -107505150)))) ? (max((arr_6 [i_1 - 1] [i_1 - 1]), 15252112329073483555)) : 1779361527);
            }
        }
    }
    var_20 = var_14;
    var_21 = (max(var_21, (((var_5 ? 1513361462 : (((var_13 << (((max(13964360095186555069, -107505151)) - 18446744073602046464))))))))));
    var_22 = (max(var_22, ((max(var_2, var_14)))));
    #pragma endscop
}
