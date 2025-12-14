/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165890
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_10 |= ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [2LL]))))), (((var_7) | (((/* implicit */unsigned long long int) 114688)))))), (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_0)))), (((var_5) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_11 -= ((/* implicit */signed char) var_7);
            var_12 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)0))));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))))) ? (-4435721258434967962LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
            var_13 -= ((/* implicit */unsigned long long int) ((arr_5 [i_1] [(unsigned short)4] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        }
        var_14 = ((/* implicit */long long int) (((+(max((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_4)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    }
    for (int i_2 = 1; i_2 < 20; i_2 += 1) 
    {
        var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned char)209), (((/* implicit */unsigned char) (_Bool)1)))))));
        var_16 = ((/* implicit */_Bool) (~(((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_11 [i_2] [i_2]))))) - (((/* implicit */int) var_9))))));
    }
    var_17 = ((/* implicit */unsigned long long int) var_0);
}
