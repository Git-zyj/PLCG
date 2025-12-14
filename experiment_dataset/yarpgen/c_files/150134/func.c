/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150134
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
    var_12 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (signed char)-72)), (((((/* implicit */_Bool) var_9)) ? (((var_4) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (var_5))))))));
    var_13 = ((/* implicit */long long int) (+(var_3)));
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_3)), (var_1)))), (var_4)))) ? (var_3) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != (((0U) + (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [0U] [9ULL] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_2)) && ((_Bool)1))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) var_6);
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        arr_6 [12] &= ((/* implicit */unsigned long long int) arr_4 [10LL]);
        var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) arr_5 [i_1])))) ? ((+(((/* implicit */int) arr_0 [i_1])))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_0 [i_1]))))));
        arr_7 [(signed char)12] &= ((/* implicit */unsigned long long int) arr_5 [7]);
    }
}
