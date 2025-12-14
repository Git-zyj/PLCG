/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125735
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
    var_12 = ((/* implicit */int) var_8);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) -33439230))));
                    var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) max((((-3) / ((-2147483647 - 1)))), (((/* implicit */int) (unsigned char)1)))))));
                    arr_10 [i_0] [i_2] [(signed char)10] [(signed char)10] = ((/* implicit */unsigned long long int) arr_1 [i_1] [i_0]);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_0);
    var_16 = ((/* implicit */unsigned int) ((((((((/* implicit */int) var_7)) | (((/* implicit */int) var_0)))) >> (((var_8) - (8357701357390259636LL))))) & (max((((/* implicit */int) (_Bool)1)), (1)))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_7))));
}
