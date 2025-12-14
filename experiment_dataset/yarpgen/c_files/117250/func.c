/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117250
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (short)8574)) ? (-7LL) : (6595629606946465712LL))));
        arr_3 [i_0] = ((((((/* implicit */int) (short)867)) != (-1179631537))) ? (arr_0 [i_0] [6]) : (3280266091U));
    }
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) 8024466712785112664ULL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 1335087618)))) != (((var_1) % (((/* implicit */long long int) ((/* implicit */int) (short)7860)))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
}
