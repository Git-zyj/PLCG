/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133545
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
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_15))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (((((/* implicit */unsigned long long int) arr_1 [i_0])) * (arr_3 [i_1] [i_1] [i_0])))))));
                var_18 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (-(arr_1 [i_1])))) ? (((/* implicit */int) var_4)) : (arr_1 [i_1])))));
            }
        } 
    } 
    var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65530)))) ? (((-1196698251295266002LL) & (((/* implicit */long long int) var_1)))) : (var_9)));
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_6 [i_2] = max((arr_0 [i_2]), (((/* implicit */long long int) arr_1 [i_2])));
        var_20 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (unsigned short)65511))))))))));
    }
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_13))));
}
