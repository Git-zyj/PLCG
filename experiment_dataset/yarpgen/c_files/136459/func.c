/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136459
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
    var_11 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((var_1) ^ (var_7))))))), ((+(((/* implicit */int) var_5))))));
    var_12 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (min((((/* implicit */unsigned long long int) (_Bool)1)), (2094354536323954895ULL))));
    var_13 = var_9;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) max(((!((!((_Bool)1))))), ((!((!(((/* implicit */_Bool) var_10))))))));
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((arr_5 [i_1] [i_1] [i_0]) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((~(18446744073709551607ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0])))))))))))));
                    var_16 &= ((/* implicit */long long int) 12179245927302343140ULL);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)39425)) + (-1669984539)));
}
