/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137791
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
    var_16 = ((/* implicit */signed char) ((3847892388U) ^ (((((/* implicit */unsigned int) ((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_8)))))) + (max((447074889U), (((/* implicit */unsigned int) var_0))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((int) 12295167789271650621ULL))) != (max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))) + (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        arr_4 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-76)))))));
    }
}
