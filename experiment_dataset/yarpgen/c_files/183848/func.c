/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183848
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
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
    var_15 = var_11;
    var_16 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(3596381898902854246LL)))) ? (min((((/* implicit */long long int) var_13)), (7667913221173192246LL))) : (((/* implicit */long long int) var_9))))) - (((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned long long int) (+(7667913221173192265LL)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) (+((+(((/* implicit */int) var_2))))))) * (arr_3 [i_0])));
                    arr_8 [i_0 - 1] [i_0] = ((/* implicit */unsigned int) max((-7667913221173192247LL), (((/* implicit */long long int) (short)12169))));
                }
            } 
        } 
        var_17 |= ((/* implicit */_Bool) (short)22157);
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) min((((-7667913221173192247LL) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) (unsigned char)213)))))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) -5652685753732915702LL)) ? (-6116977384748274308LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-22157))))) >= (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_3]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))))))))));
        var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (signed char)13)), (var_0)));
    }
    var_20 = ((/* implicit */long long int) ((7667913221173192271LL) != (((max((((/* implicit */long long int) 2109341073U)), (-7667913221173192247LL))) >> (((max((((/* implicit */unsigned long long int) var_9)), (var_0))) - (18446744072831884170ULL)))))));
}
