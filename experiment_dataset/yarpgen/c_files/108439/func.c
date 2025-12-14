/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108439
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? ((~(3632612911U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((long long int) 2903483451413252281LL)) <= (((/* implicit */long long int) 535659132U))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) 137437904896LL))) >> (((((((/* implicit */_Bool) (unsigned char)127)) ? (1934806889U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) - (1934806879U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [(unsigned short)11]))) : (var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)1894), (((/* implicit */unsigned short) (unsigned char)107)))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (5058638535706162279LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [1LL])) ? (7682041918335746749LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (unsigned char)129);
    var_19 = var_15;
}
