/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179483
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
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (-2147483640) : (0)))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2]))) : (4421270209310511032ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 2147483640))))));
        arr_5 [i_0] = ((((/* implicit */_Bool) max(((unsigned short)17324), (((/* implicit */unsigned short) arr_0 [i_0 + 2]))))) ? (((((/* implicit */_Bool) -2147483629)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-67)) || (((/* implicit */_Bool) (unsigned char)69))))) : (-2147483640))) : (((/* implicit */int) ((arr_1 [i_0]) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)3)) ? (1474863813) : (((/* implicit */int) (signed char)91)))))))));
    }
    var_14 = ((/* implicit */unsigned short) 3630509357U);
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_9))));
}
