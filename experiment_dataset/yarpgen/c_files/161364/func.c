/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161364
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
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) max((((max((1481692692), (((/* implicit */int) (_Bool)0)))) >> (((((/* implicit */int) var_2)) << (((13648510004148430241ULL) - (13648510004148430212ULL))))))), (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) >= (((/* implicit */int) var_2)))))));
                    arr_6 [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_10);
                    var_14 = ((/* implicit */unsigned long long int) var_4);
                    arr_7 [i_1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) var_2);
                }
            } 
        } 
    } 
    var_15 = var_7;
    var_16 = ((/* implicit */signed char) (+(((unsigned long long int) ((var_10) <= (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
}
