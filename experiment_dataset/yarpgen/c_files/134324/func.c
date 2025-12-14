/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134324
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
    var_12 = ((/* implicit */unsigned short) (((((-(((/* implicit */int) var_3)))) / (((/* implicit */int) ((unsigned short) var_10))))) >> (((((/* implicit */int) var_5)) - (35042)))));
    var_13 = ((/* implicit */int) (~(var_4)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)201)) && (((/* implicit */_Bool) 7527309799472390053LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)15))))) : (((arr_2 [0LL]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36580)))))))) ? (((((/* implicit */_Bool) ((arr_2 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)54631)))) : (((/* implicit */int) var_0)))) : (((/* implicit */int) (_Bool)0))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            var_15 = ((/* implicit */_Bool) max((var_15), (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) > (var_4)))));
            var_16 -= ((/* implicit */signed char) (+(((((/* implicit */int) arr_1 [i_1 + 2])) << (((((/* implicit */int) arr_0 [i_0] [i_1 + 1])) - (11599)))))));
        }
    }
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_9)))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_4)) : (var_10)))))))))))));
}
