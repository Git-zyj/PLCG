/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161513
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
    var_18 = ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_6 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 4123156210450041313ULL)))))));
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_2 [i_2] [(signed char)20] [(short)20]))));
                    arr_7 [i_2] [i_2] [i_0] = ((/* implicit */short) (_Bool)1);
                    var_20 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((-1998747393) / (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) var_15)))))))));
                }
                arr_8 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)138))))) < (((/* implicit */int) min((arr_3 [i_0]), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65534))) >= (var_5)))))))));
            }
        } 
    } 
}
