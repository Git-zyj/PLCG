/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172463
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
    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (var_4)))) ? (((((/* implicit */_Bool) (unsigned short)57186)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
    var_21 = ((/* implicit */signed char) var_18);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (var_8)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (7491787816953950588ULL))))), (((/* implicit */unsigned long long int) arr_3 [i_0]))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) (+((-(min((((/* implicit */unsigned int) var_19)), (var_0)))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((var_13), (((/* implicit */short) arr_7 [i_0] [i_1] [(short)8])))))));
                        var_23 = ((/* implicit */unsigned char) (_Bool)1);
                        arr_12 [i_0] [i_0] [i_2 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((var_9), (((/* implicit */unsigned short) arr_10 [i_1] [6U] [6U] [i_1] [14U])))), (var_17)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [7ULL] [i_1])) ? (7491787816953950581ULL) : (((/* implicit */unsigned long long int) -5203012078490853138LL))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_12))))) : (min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)2))) : (arr_9 [i_0] [i_1] [i_2] [i_3]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_3])))))))));
                    }
                } 
            } 
        } 
    }
}
