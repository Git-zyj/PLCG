/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157709
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
    var_12 = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) var_0)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned long long int) (!((((-(arr_0 [i_0] [i_0]))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_10))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (((((/* implicit */_Bool) max((11453420086699495187ULL), (((/* implicit */unsigned long long int) (unsigned short)63298))))) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (arr_1 [i_0 - 1])))));
        arr_3 [i_0] = ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) var_6)))))) ? (((unsigned int) max((arr_0 [i_0] [(short)17]), (-2607396370589559684LL)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        var_14 &= ((/* implicit */signed char) var_5);
        arr_6 [i_1 + 1] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) -1885349494)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49152))) : (2607396370589559684LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-59))) < (-7580641799951114734LL)))))));
    }
}
