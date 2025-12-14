/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10629
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_14 = min((((unsigned int) min((var_10), (((/* implicit */int) (unsigned char)242))))), (((/* implicit */unsigned int) ((234881024) - (-234881024)))));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_6) % (((/* implicit */unsigned int) -234881023))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1] [i_1]))))) ? (((/* implicit */unsigned int) var_5)) : ((+(arr_0 [i_1]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2034270126873827190LL)) ? (max((-423498186), (((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) (unsigned char)113)))))));
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) min((arr_3 [i_1]), (((/* implicit */short) (unsigned char)15)))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_3 [i_1]))) < (var_10)));
                    var_19 += ((/* implicit */signed char) (((+(var_7))) == (max((arr_0 [i_1]), (((/* implicit */unsigned int) ((1846110405350012106ULL) >= (((/* implicit */unsigned long long int) arr_5 [i_3])))))))));
                }
            } 
        } 
    }
    var_20 &= ((/* implicit */short) var_8);
}
