/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= ((((((19500 < -1251) > (min(1494610572, 1255))))) ^ (((!8855647765902852223) << ((((-(-32767 - 1))) - 32753))))));
    var_20 = (min(var_20, ((min(((110 % ((-1494610572 ? 145 : 1)))), (((13 || 1) ? var_0 : 1577619018)))))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_21 = (146 - 65535);
        var_22 ^= (1 && 65535);
    }
    #pragma endscop
}
