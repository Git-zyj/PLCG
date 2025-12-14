/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120207
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
    var_10 &= ((/* implicit */unsigned short) (-(max((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)3)))))))));
    var_11 = ((/* implicit */long long int) (unsigned char)3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 332328464))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-102)))));
    }
    for (unsigned char i_1 = 1; i_1 < 16; i_1 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) -332328464)), (var_3))), (((/* implicit */long long int) ((signed char) (unsigned short)29775)))));
        var_15 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) == (max((((/* implicit */unsigned long long int) (unsigned short)47623)), (((((/* implicit */_Bool) (unsigned char)3)) ? (var_8) : (((/* implicit */unsigned long long int) var_7))))))));
    }
    var_16 -= ((/* implicit */long long int) (signed char)-1);
}
