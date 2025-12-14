/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185581
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
    var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) 1427358557U)), (6651252861039151031LL)));
    var_19 = ((/* implicit */unsigned long long int) var_7);
    var_20 = ((/* implicit */short) (signed char)91);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((unsigned long long int) (((~(-6651252861039151002LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (min((((/* implicit */unsigned int) (unsigned short)65531)), (2867608739U))) : (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (2867608720U)))))));
        var_21 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_3) : (((/* implicit */int) var_0)))) | (((/* implicit */int) (signed char)91))))) - (((var_13) / (((/* implicit */unsigned long long int) arr_1 [i_0 + 3]))))));
    }
}
