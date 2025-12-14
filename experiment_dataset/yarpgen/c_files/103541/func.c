/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103541
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
    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_4)), ((-(((/* implicit */int) var_10))))))) ? (var_12) : (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))));
    var_17 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14))))), (((var_8) << (((var_5) + (7112446647003000829LL))))))) >> (((((/* implicit */int) var_0)) - (159)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        arr_2 [0U] = ((/* implicit */_Bool) ((short) var_8));
        arr_3 [i_0] [i_0] &= ((/* implicit */unsigned char) var_1);
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_18 = max((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [8] [8]))) : (var_7))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_5 [i_1] [i_1])))))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_10)) : (var_3))) << (((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))) + (31383)))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1])) | (((/* implicit */int) var_1))))) > (min((min((((/* implicit */long long int) var_3)), (var_7))), (((/* implicit */long long int) arr_4 [i_1]))))));
    }
    var_19 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))));
}
