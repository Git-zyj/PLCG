/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121711
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
    var_14 &= var_6;
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((14190496487372603087ULL), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */int) var_3)) : (((int) (short)28013))))) / (var_12)));
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_12) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? ((((+(var_12))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) max(((-(var_10))), ((-(var_8))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [(signed char)9] = ((/* implicit */short) 4294967283U);
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_0 [i_0]))) ? (((var_2) ? (((/* implicit */int) arr_2 [(short)0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
}
