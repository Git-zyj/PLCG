/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11021
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
    var_12 = ((/* implicit */unsigned char) var_11);
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((1073733632U) > (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))) && (((/* implicit */_Bool) max(((+(((/* implicit */int) var_6)))), (((/* implicit */int) (!(((/* implicit */_Bool) 3221233638U))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) (signed char)-70);
                    var_15 = ((/* implicit */_Bool) min(((+(((long long int) var_11)))), (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (1073733632U))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) > (arr_2 [i_0] [i_1]))))))))));
                }
            } 
        } 
    } 
}
