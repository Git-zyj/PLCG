/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108814
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
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))) <= (arr_1 [i_0]))))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((var_15), (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (549755813760ULL))))), (((/* implicit */unsigned long long int) var_10)))))));
    }
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) min((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)15175)) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) var_11)))) != (((/* implicit */int) ((((/* implicit */int) (unsigned char)33)) == (((/* implicit */int) (short)-12912)))))))), ((-(((/* implicit */int) (unsigned char)175)))))))));
}
