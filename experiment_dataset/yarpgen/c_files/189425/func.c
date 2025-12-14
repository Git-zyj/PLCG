/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189425
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
    var_11 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) arr_0 [0LL] [i_1])))))) : ((~(var_8)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) ((unsigned char) arr_2 [12LL]))) ? (min((((/* implicit */long long int) (signed char)-1)), (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15579))))))))));
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)0))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [(short)3])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) arr_3 [(unsigned short)21] [i_1] [i_1])) : (((((/* implicit */_Bool) arr_0 [i_0] [(unsigned short)12])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_5))))))) : (min((((/* implicit */long long int) var_3)), (((var_0) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            {
                var_14 = max((var_1), (((/* implicit */unsigned int) ((unsigned short) var_10))));
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)0), (((/* implicit */unsigned short) var_0))))) ? ((~(var_6))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1502494758711507885LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))))))) ? (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6081))) : (var_4))) * (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3]))))) : (max((((/* implicit */long long int) arr_7 [i_2] [13LL])), (max((var_6), (((/* implicit */long long int) var_3))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((max(((!(((/* implicit */_Bool) var_7)))), (((((/* implicit */int) var_0)) > (((/* implicit */int) var_5)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (min((((/* implicit */unsigned int) (unsigned short)65532)), (var_1))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))))) : (var_8)));
}
