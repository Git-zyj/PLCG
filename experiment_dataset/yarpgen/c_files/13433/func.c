/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13433
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
    var_20 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_19)) ? (var_6) : (((/* implicit */unsigned long long int) var_5)))) : (((((/* implicit */_Bool) (unsigned short)52204)) ? (11163368347386384889ULL) : (((/* implicit */unsigned long long int) 7638360324170336973LL))))))));
    var_21 &= var_7;
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) + (((/* implicit */int) arr_2 [i_0] [i_2]))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_0 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)52200)) || (((/* implicit */_Bool) arr_1 [i_0]))))))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((arr_0 [i_0]) & (((/* implicit */unsigned long long int) var_13)))))) : (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))))));
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */short) (unsigned short)2);
                }
            } 
        } 
    } 
}
