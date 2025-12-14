/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138195
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
    var_16 = ((/* implicit */_Bool) max((4237670934771533633LL), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) -4237670934771533647LL))))), ((~(-4237670934771533633LL)))))));
    var_17 = 8643375491855419817LL;
    var_18 = ((/* implicit */int) var_6);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)47821)) ? (((/* implicit */unsigned long long int) -430265397)) : (7823542685126688315ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -4237670934771533633LL))))) & (((/* implicit */int) arr_0 [i_0])))))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)56600)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 1; i_1 < 6; i_1 += 1) 
    {
        for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (min((max((((/* implicit */long long int) arr_4 [i_2] [i_2])), (-4237670934771533633LL))), (max((arr_2 [i_3]), (-4237670934771533649LL)))))))));
                    arr_11 [i_2] [i_3] = arr_6 [i_1] [(signed char)7] [i_1];
                    var_21 = ((/* implicit */unsigned short) (((((~(4237670934771533635LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 2] [i_1 - 1])) - (40659)))));
                }
            } 
        } 
    } 
}
