/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147443
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = var_4;
        var_13 &= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((signed char) max(((unsigned short)43552), (((/* implicit */unsigned short) (short)0)))))), (max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) ((((/* implicit */int) var_7)) << (((var_4) - (3453611998U))))))))));
        var_14 += ((/* implicit */short) (-(((((((/* implicit */_Bool) (short)-10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))) - (((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0])))))));
        var_15 = (~(max(((-(arr_0 [i_0] [i_0]))), (arr_0 [i_0] [i_0]))));
    }
    var_16 -= ((/* implicit */unsigned short) max((min((((int) -4316322811865057563LL)), (((/* implicit */int) (unsigned short)21977)))), (((/* implicit */int) var_6))));
}
