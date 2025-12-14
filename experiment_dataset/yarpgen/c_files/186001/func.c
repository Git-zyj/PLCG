/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186001
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) | (((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (17370810740838793782ULL)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [(short)15] [i_0] [i_0] = ((/* implicit */unsigned short) (((((((_Bool)1) ? (-581972750874373754LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) % (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (signed char)33))))))) > (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))));
                    var_15 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [1U] [i_1]))))), (((((/* implicit */_Bool) (unsigned char)89)) ? (10059546268825093023ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
}
