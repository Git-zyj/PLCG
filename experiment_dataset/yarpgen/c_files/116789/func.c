/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116789
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    var_14 -= ((/* implicit */int) ((max((((/* implicit */long long int) ((var_11) / (((/* implicit */int) (unsigned short)30471))))), (((long long int) arr_5 [17U])))) >> (((((/* implicit */int) var_12)) - (16567)))));
                    arr_9 [i_1] [7LL] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_0))));
                }
            } 
        } 
        var_15 = ((((/* implicit */long long int) ((/* implicit */int) var_0))) & ((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -4963254986244298388LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))) : ((+(arr_0 [i_0]))))));
        var_16 = ((unsigned short) var_5);
        arr_10 [i_0] [i_0] |= ((int) ((min((arr_8 [i_0]), (((/* implicit */int) var_12)))) & (((/* implicit */int) ((short) (unsigned short)30471)))));
        var_17 = ((((/* implicit */int) var_4)) >> (((max((arr_0 [i_0]), (((/* implicit */long long int) var_7)))) + (23LL))));
    }
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_4))));
}
