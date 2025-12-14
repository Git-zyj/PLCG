/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164675
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
        var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)174))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((arr_2 [i_0]), ((~(((/* implicit */int) var_18))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (491359067U)))) ? ((((_Bool)0) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12341))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64)))))))))));
    }
    var_21 &= ((/* implicit */short) ((max((((/* implicit */unsigned int) min(((unsigned short)24970), (((/* implicit */unsigned short) (signed char)-49))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-36))) : (491359067U))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    var_22 = ((((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((var_12) >> (((((/* implicit */int) var_13)) - (52266))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))))) << ((((~(((/* implicit */int) min((var_2), ((_Bool)0)))))) + (4))));
}
