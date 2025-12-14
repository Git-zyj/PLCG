/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149956
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
    var_12 = ((/* implicit */unsigned char) max((var_7), (((/* implicit */unsigned long long int) var_0))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)1))))) ? (((unsigned long long int) var_11)) : (var_6))) / (((((/* implicit */_Bool) (-(var_2)))) ? (((var_5) >> (((((/* implicit */int) (unsigned char)255)) - (207))))) : (((5301677854400260921ULL) | (var_8))))))))));
        arr_2 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((18446744073709551587ULL) | (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) var_1))))))));
    }
    for (int i_1 = 2; i_1 < 17; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned long long int) var_9);
        var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_4 [i_1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_4 [12U]))))) ? (((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned long long int) 2672347945733279585LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_1]))))))));
    }
    var_16 = ((((/* implicit */unsigned long long int) max((min((var_2), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) ((var_7) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))) == (((((/* implicit */unsigned long long int) var_2)) + (((unsigned long long int) var_3)))));
}
