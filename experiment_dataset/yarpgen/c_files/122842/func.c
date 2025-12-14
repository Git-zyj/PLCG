/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122842
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
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((1799907984U), (((/* implicit */unsigned int) (unsigned short)34715))))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0]))))) : (min((((/* implicit */long long int) (unsigned short)54099)), (var_7))))) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34717)))));
        var_12 = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) (unsigned short)30835)), (min((((/* implicit */unsigned int) (unsigned short)24477)), (4294967289U))))), (((((/* implicit */_Bool) min(((unsigned short)56933), ((unsigned short)26)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (695861727U)))));
        arr_3 [i_0] = ((((((/* implicit */_Bool) (unsigned short)11438)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1))) : (25U))) > (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)11449))))));
    }
    var_13 = ((/* implicit */unsigned short) ((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
}
