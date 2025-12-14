/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131611
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
    var_17 *= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)7769)), (33554400))))))) % (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_4 [(unsigned short)21] [(unsigned short)6] = arr_0 [(unsigned char)10];
        var_18 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (((var_14) / (((/* implicit */unsigned long long int) 33554400))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) max((arr_2 [i_0]), (arr_2 [i_0])));
        arr_6 [i_0] [20U] = ((/* implicit */int) ((long long int) arr_3 [i_0] [i_0]));
        var_19 |= ((/* implicit */unsigned char) (~((+(arr_2 [i_0])))));
    }
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) var_9)) / (max((var_1), (((/* implicit */long long int) -818976746)))))))));
}
