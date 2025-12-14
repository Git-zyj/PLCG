/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138766
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
    var_17 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned long long int) 7998410705122083467LL)) : (4588710994552774343ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    var_18 -= ((/* implicit */_Bool) max(((-(max((((/* implicit */long long int) var_0)), (var_8))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_2)))) || (((/* implicit */_Bool) (unsigned char)255)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned short)5882)) ^ (((/* implicit */int) (unsigned short)12288))))));
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0]))));
        arr_3 [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
    }
}
