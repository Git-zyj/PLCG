/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144135
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        arr_3 [(short)2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (1892735721U)))) ? (var_13) : (((/* implicit */unsigned int) (-(arr_2 [i_0]))))));
        arr_4 [(_Bool)1] [(_Bool)1] |= (((+(var_7))) - (arr_1 [(unsigned short)4]));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 1) 
    {
        arr_9 [5ULL] [5ULL] = ((((/* implicit */_Bool) arr_1 [(signed char)0])) || (((((/* implicit */int) (_Bool)1)) > (-304558605))));
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_11) : (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (2937775685952416788ULL))))));
    }
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        arr_12 [22] [22] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) || ((_Bool)1)))), (((((/* implicit */_Bool) 2889119181U)) ? (arr_11 [i_2]) : (((/* implicit */long long int) (~(var_16))))))));
        arr_13 [i_2] = ((/* implicit */unsigned int) ((((unsigned long long int) arr_11 [i_2])) * (((((var_12) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) << (((((((/* implicit */_Bool) -1002607387)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1405848128U))) - (201U)))))));
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (unsigned char)192))));
    }
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_15))))), (((var_11) - (((/* implicit */unsigned long long int) var_13)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_11), (var_12)))) ? (((/* implicit */int) ((_Bool) var_0))) : (((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */int) var_10)) : (var_14)))))))))));
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (var_11))))))));
    var_21 = ((/* implicit */unsigned int) ((var_2) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3653761376460214767LL)) ? (((/* implicit */unsigned long long int) var_0)) : (var_6)))))))));
}
