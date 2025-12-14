/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139024
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
    var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 68719476735LL))));
    var_12 = ((/* implicit */signed char) min(((+(((/* implicit */int) var_0)))), (min((((int) var_10)), (((/* implicit */int) ((((/* implicit */int) (unsigned char)126)) <= (((/* implicit */int) (unsigned char)126)))))))));
    var_13 -= ((/* implicit */int) ((17061678329444465098ULL) >> ((((~(((/* implicit */int) var_8)))) + (31)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) - (((/* implicit */int) arr_2 [i_0 - 1]))));
        arr_3 [(unsigned short)4] &= (unsigned char)126;
    }
}
