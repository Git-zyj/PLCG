/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133079
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
    for (signed char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) < (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_2))) ? (((/* implicit */int) ((unsigned short) var_2))) : (((/* implicit */int) var_10))))) : (arr_0 [i_0 + 1])));
        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) max(((~(((/* implicit */int) (unsigned char)198)))), (((int) arr_0 [i_0 - 1])))))));
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0]))))), (arr_0 [i_0]))))));
    }
    var_13 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)57))) : (var_7)))) ? (((/* implicit */unsigned long long int) var_8)) : (max((((/* implicit */unsigned long long int) (unsigned char)198)), (var_4)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)191))) : (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned long long int) 732037024U)))))) : (((/* implicit */unsigned long long int) ((var_8) + ((-(((/* implicit */int) (signed char)116)))))))));
    var_14 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)174)) & (((/* implicit */int) (unsigned char)57))))) ? (((/* implicit */unsigned long long int) max((var_7), (var_6)))) : (var_2))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(max((var_1), (((/* implicit */long long int) -1389831588))))))) ? (((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2965727119107400116LL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) : (var_2))) : (var_3)));
    var_16 &= ((/* implicit */int) var_6);
}
