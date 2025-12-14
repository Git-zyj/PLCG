/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180846
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((0ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-108))))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((var_12), (((/* implicit */signed char) (_Bool)1))))))))));
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_2 [i_0] [i_0] [i_2]))));
                    arr_7 [3LL] [i_1] [i_2] [i_1] = ((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (((18446744073709551601ULL) << (((/* implicit */int) (_Bool)1)))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_2] [i_1] [i_0]))) : (0ULL)))))))));
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */int) var_16);
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) (short)19147))));
}
