/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17302
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_20 += ((/* implicit */signed char) (+(var_13)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0 + 1]))) == (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0 + 1]))) : (arr_0 [i_0 - 1])))));
        var_21 |= ((/* implicit */int) arr_2 [i_0 + 1] [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned char) (+(2467120747822684081ULL)));
    }
    for (unsigned char i_1 = 1; i_1 < 18; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) arr_5 [i_1]);
        var_23 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_12)) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) var_6))))));
    }
    var_24 = ((/* implicit */unsigned short) var_13);
    var_25 = ((/* implicit */unsigned long long int) var_19);
}
