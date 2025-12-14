/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141896
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
    var_12 = ((/* implicit */short) (~((((~(((/* implicit */int) var_7)))) << ((((~(((/* implicit */int) (signed char)30)))) + (41)))))));
    var_13 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(255)))) ? (((((/* implicit */int) var_3)) & (((/* implicit */int) var_2)))) : (((/* implicit */int) ((unsigned char) (unsigned char)166)))))) ? (((((((/* implicit */int) var_0)) * (((/* implicit */int) (signed char)19)))) - (((/* implicit */int) var_1)))) : ((~(((/* implicit */int) (signed char)-66))))));
    var_14 = ((/* implicit */short) (-(((((/* implicit */int) (!(((/* implicit */_Bool) (short)-23))))) & (((/* implicit */int) ((_Bool) (signed char)-70)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_15 = ((((/* implicit */_Bool) min((((/* implicit */int) max(((short)29449), ((short)24973)))), (2147483618)))) ? (1ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -17)) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) (short)9395))))));
                    arr_9 [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [8])) | (((((/* implicit */int) max(((short)4374), (((/* implicit */short) (_Bool)1))))) | (((/* implicit */int) arr_4 [i_0 + 1]))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) ((short) 3741463127U));
}
