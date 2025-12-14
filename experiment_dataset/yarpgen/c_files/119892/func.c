/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119892
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) var_9);
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3382289017896583307ULL))))) : ((~(arr_6 [i_1 - 1])))));
                    arr_9 [i_2] [i_2] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) arr_7 [i_1 - 1] [i_2] [i_2] [i_1 + 3])) / (((/* implicit */int) arr_7 [i_1 + 1] [i_2] [i_2] [i_1 + 1])))));
                    arr_10 [i_2] [i_1 - 1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3575326474570423799LL)) ? (((((/* implicit */_Bool) 2488061762U)) ? ((+(((/* implicit */int) arr_4 [i_0] [i_0] [7U])))) : (((/* implicit */int) arr_1 [i_0] [i_1 + 3])))) : (var_7)));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((unsigned char) (_Bool)1))))))));
}
