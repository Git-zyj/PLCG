/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142232
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
    var_16 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (((unsigned long long int) ((long long int) (unsigned char)64))));
    var_17 ^= ((/* implicit */unsigned int) var_5);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (+((-(((((/* implicit */long long int) ((/* implicit */int) var_13))) / (var_8)))))));
        var_18 -= ((/* implicit */unsigned int) (unsigned char)5);
        var_19 *= ((/* implicit */long long int) ((((((6404329432910408989ULL) & (15297709460336566755ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_1)))))))) >= (((/* implicit */unsigned long long int) (+((~(var_7))))))));
    }
}
