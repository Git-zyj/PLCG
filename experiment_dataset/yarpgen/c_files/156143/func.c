/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156143
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
    var_19 = var_14;
    var_20 = ((/* implicit */signed char) min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) max(((signed char)-100), ((signed char)-70)))) ? (-691285469) : (((/* implicit */int) var_10))))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)97)) ? (-4708795989091857200LL) : (9208030242141785066LL)))) ? (((/* implicit */int) var_11)) : ((~(((/* implicit */int) var_11))))));
    var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) 5887881990977389221LL)) ? ((~(((/* implicit */int) var_12)))) : (((/* implicit */int) var_11)))) != (((/* implicit */int) (((+(((/* implicit */int) var_11)))) >= (((/* implicit */int) var_15)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_23 &= ((/* implicit */signed char) ((unsigned short) ((int) min((((/* implicit */long long int) arr_2 [i_0])), (arr_5 [i_0])))));
                var_24 = ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) max((-9208030242141785042LL), (((/* implicit */long long int) arr_2 [12LL]))))))) : (var_6));
                var_25 = ((/* implicit */_Bool) arr_5 [i_0]);
            }
        } 
    } 
}
