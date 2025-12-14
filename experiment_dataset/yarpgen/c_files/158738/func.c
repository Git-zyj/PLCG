/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158738
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
    var_15 = ((/* implicit */signed char) min((((/* implicit */int) var_14)), (((((/* implicit */_Bool) (~(((/* implicit */int) (short)5941))))) ? (((/* implicit */int) (unsigned char)125)) : (((/* implicit */int) (unsigned short)63865))))));
    var_16 = ((/* implicit */unsigned long long int) 3815445323278253106LL);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (((+(25ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)183))) : (4294967295U))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14654)) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? ((+(arr_0 [i_0]))) : (((arr_0 [i_0]) ^ (arr_0 [i_0])))));
    }
}
