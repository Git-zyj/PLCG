/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116937
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [i_1])))) ? (((/* implicit */int) max((((/* implicit */short) (signed char)-67)), ((short)28741)))) : ((+(((/* implicit */int) (signed char)64))))));
                var_14 = max((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0]))))) ^ (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (var_9) : (3582062256U)))))));
                var_15 = ((/* implicit */signed char) max(((+((+(arr_3 [i_0] [i_0]))))), (((/* implicit */int) (!((_Bool)1))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) 2543412343217501764LL)) ? (((/* implicit */int) (unsigned char)80)) : (((/* implicit */int) (signed char)-48)))))));
    var_17 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) (+(var_0)))) - ((-(var_1))))) + (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)13)), ((unsigned char)99)))), (((unsigned int) var_4)))))));
}
