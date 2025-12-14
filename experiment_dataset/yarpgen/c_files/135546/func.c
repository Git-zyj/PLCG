/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135546
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_14 &= ((/* implicit */signed char) ((((/* implicit */_Bool) 2704180319072257827ULL)) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) & (var_0))))));
        var_15 *= ((((var_7) & (var_1))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    {
                        arr_14 [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_12 [i_4] [i_2 - 2])), (((((/* implicit */int) arr_13 [i_1] [i_2 - 1] [i_3] [i_4])) | (((/* implicit */int) var_2))))));
                        var_16 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) ((var_4) || (((/* implicit */_Bool) 2U))))) < (((/* implicit */int) var_2))))));
                        arr_15 [i_1] [i_2] [i_4] [i_1] = ((/* implicit */signed char) (~((~(((/* implicit */int) var_2))))));
                        arr_16 [i_1] [i_4] = ((/* implicit */unsigned short) var_10);
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */long long int) var_4);
        var_18 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_13)))), (max((arr_4 [i_1]), (((/* implicit */int) var_5))))));
        var_19 = ((/* implicit */unsigned int) 2704180319072257801ULL);
    }
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */long long int) var_4)), (5498808489212309386LL))))), ((-(4435252273631230829ULL))))))));
}
