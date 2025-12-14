/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15328
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
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_15)), (((((/* implicit */_Bool) (short)9598)) ? (((/* implicit */int) (unsigned short)15499)) : (((/* implicit */int) (signed char)15)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [7U] [i_0] = ((/* implicit */unsigned int) var_18);
                    arr_8 [3ULL] [(unsigned char)11] [i_0] [i_0] = ((/* implicit */_Bool) ((((((((/* implicit */long long int) var_12)) + (arr_6 [i_1] [3]))) + (9223372036854775807LL))) << ((((((+(arr_6 [i_2] [i_1 + 1]))) + (1608345140071294588LL))) - (48LL)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((var_6) ? (((((/* implicit */_Bool) (short)30233)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) % (var_0))) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)3))))))))));
}
