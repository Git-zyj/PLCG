/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185452
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
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (-371110846642574194LL))) - (((/* implicit */long long int) ((/* implicit */int) (signed char)62))))) - (((/* implicit */long long int) -459959772))));
        arr_4 [i_0] = ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) -459959772)))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) <= (3207659618U)))));
        var_16 = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) -459959768)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (-459959772))), (((/* implicit */int) arr_0 [i_0])))) | (((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_0]))))));
    }
    for (unsigned char i_1 = 2; i_1 < 10; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) arr_1 [i_1 - 1] [i_1 + 1])), (((3263054230019189234ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))), (((/* implicit */unsigned long long int) var_1))));
        var_18 = ((/* implicit */short) var_3);
        var_19 = ((/* implicit */unsigned char) arr_6 [i_1]);
    }
    var_20 = ((/* implicit */unsigned short) var_4);
}
