/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172647
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
    var_11 = ((/* implicit */short) min(((~(var_0))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-112))) ^ (574208952489738240ULL)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = arr_0 [i_0];
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)33)) | (((/* implicit */int) var_4))))) : (2624002031816362181ULL))) : (((/* implicit */unsigned long long int) -799762946))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_12 = ((/* implicit */short) 1552860644);
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) 799762946)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) min((arr_5 [i_1]), (var_4)))) : (((/* implicit */int) (signed char)-55))))));
    }
}
