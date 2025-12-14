/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161666
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((int) var_11))))) ? ((~(((int) var_10)))) : ((-(((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) > (var_13))))))));
    var_15 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (-(-6409652381636566512LL)))), ((-(var_7))))), (((/* implicit */unsigned long long int) var_11))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) max((-6409652381636566516LL), (((/* implicit */long long int) arr_2 [i_0]))))) : (((((/* implicit */unsigned long long int) max((366341508U), (((/* implicit */unsigned int) arr_0 [i_0]))))) % (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [1]))) : (arr_1 [i_0]))))))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((~(var_3))), (((/* implicit */long long int) (short)-27722))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) / (arr_1 [i_0]))))));
    }
}
