/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11520
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
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)60)))), (((/* implicit */int) var_17))))) ? (((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) (short)27715))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) max((var_3), (((/* implicit */unsigned long long int) (signed char)45)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) arr_1 [(unsigned short)18] [i_0]);
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_0 [i_0])))))));
    }
    var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((var_9) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) var_9)))))));
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((-4503390193308260342LL), (((/* implicit */long long int) arr_4 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (503316480LL))) < (min((((/* implicit */long long int) arr_3 [i_1])), (((((/* implicit */_Bool) arr_0 [i_1])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) 2810760043773448281LL)) ? (-4733972875980887035LL) : (5132819164163896856LL)));
        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((unsigned long long int) -456880007)))))));
    }
}
