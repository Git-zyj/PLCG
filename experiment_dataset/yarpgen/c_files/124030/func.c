/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124030
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
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (min((8798918756000948950ULL), (max((max((var_3), (var_5))), ((-(var_3)))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    arr_10 [i_2] [i_1] [i_2] [i_0] = ((/* implicit */int) arr_6 [i_0] [i_2] [i_2]);
                    arr_11 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (short)1525))) >= (2251799809490944LL))) ? (var_14) : ((+(0ULL)))));
                }
                var_17 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)48))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-32752)) : (((/* implicit */int) var_11)))) <= (((/* implicit */int) var_0)))) ? (min((((/* implicit */unsigned long long int) max((var_12), (((/* implicit */long long int) var_4))))), (var_5))) : (6ULL)));
    var_19 = ((/* implicit */int) var_0);
}
