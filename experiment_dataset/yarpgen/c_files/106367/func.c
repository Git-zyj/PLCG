/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106367
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
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (+((((+(((/* implicit */int) (unsigned char)234)))) ^ (((/* implicit */int) var_4)))))))));
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_12))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((608261120U) != (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_4), (var_11))))) : (((((((/* implicit */long long int) ((/* implicit */int) (signed char)-19))) % (8231521612897987195LL))) * (((/* implicit */long long int) ((/* implicit */int) var_12))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((max((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_4))))), (((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_4 [i_2 - 1])))) && (((((/* implicit */int) (unsigned char)4)) == (((/* implicit */int) var_3)))))))))))));
                    var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 1695998623U))))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_8)), ((unsigned char)150))))))) ? (((((/* implicit */_Bool) ((arr_6 [i_0] [i_2] [10U] [i_2]) % (var_1)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_12)) >> (((arr_4 [i_1]) + (2611235141327650408LL)))))) : ((+(-704756830163887708LL))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_1 [(unsigned char)17])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (3009257760U))), (((/* implicit */unsigned int) max((var_0), (var_8)))))))));
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_1])) ? (max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (792270602U)))), (arr_1 [1U]))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)96)) & (((/* implicit */int) (short)29521))))))))));
                    var_18 += ((/* implicit */short) var_8);
                }
            } 
        } 
    } 
}
