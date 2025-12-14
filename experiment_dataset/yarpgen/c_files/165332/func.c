/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165332
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
    var_20 = ((/* implicit */_Bool) ((var_8) << (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_11)), (var_16)))))))));
    var_21 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        var_22 = max((((/* implicit */unsigned long long int) arr_1 [i_0 - 2] [i_0 - 2])), ((+(11749913227338145026ULL))));
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_11))));
        var_24 = 1210193500U;
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_4 [i_1] = (-(((/* implicit */int) (!((!(((/* implicit */_Bool) var_16))))))));
        var_25 = max((((/* implicit */int) ((_Bool) arr_3 [i_1]))), ((-(arr_3 [i_1]))));
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (~(var_16))))));
    }
    var_27 = ((/* implicit */unsigned int) ((unsigned long long int) (+(((/* implicit */int) ((_Bool) var_3))))));
    var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1935682608))))), (min((var_6), (var_5))))))));
}
