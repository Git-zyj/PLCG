/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155032
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
    var_10 = ((/* implicit */int) var_6);
    var_11 = ((/* implicit */int) (_Bool)1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_12 = ((/* implicit */int) arr_2 [i_0]);
        arr_3 [(signed char)7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -3760803627790300459LL))));
        var_13 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_2 [i_0])))) - ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    var_14 = ((/* implicit */unsigned long long int) max((max((((var_4) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((var_9) / (((/* implicit */unsigned int) var_8)))))), (((/* implicit */unsigned int) max(((+(var_8))), (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_6))))))))));
}
