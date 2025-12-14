/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179868
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
    var_18 &= ((/* implicit */long long int) 16579280334852081287ULL);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [0ULL] &= ((/* implicit */_Bool) arr_2 [i_0]);
                    var_19 &= ((/* implicit */unsigned long long int) var_16);
                    var_20 &= ((/* implicit */signed char) (-(2111968284U)));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) - (var_6)))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) & (var_14)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_9);
    var_23 = ((/* implicit */unsigned int) min((((/* implicit */int) var_0)), ((+(((((/* implicit */_Bool) 7767403079594719586LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) 0ULL))));
}
