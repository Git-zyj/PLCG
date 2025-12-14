/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150100
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = (-(((/* implicit */int) ((unsigned short) 8182509456942037600ULL))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) > (5801085943361005388ULL))))) : ((-(arr_1 [i_0])))))));
    }
    var_14 = ((/* implicit */int) var_7);
    var_15 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_12)) ? (var_3) : (var_3))), (((/* implicit */unsigned long long int) (-(((-2050469938) + (((/* implicit */int) (signed char)-37)))))))));
    var_16 ^= ((/* implicit */unsigned short) max((var_3), (((/* implicit */unsigned long long int) var_11))));
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (min((((((/* implicit */unsigned long long int) var_2)) / (var_10))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-37))))), (min((var_12), (((/* implicit */long long int) var_8)))))))))));
}
