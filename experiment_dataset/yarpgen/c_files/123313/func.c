/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123313
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
    var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)591))));
    var_18 ^= ((/* implicit */_Bool) var_1);
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((short) var_3)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_20 = (unsigned short)64944;
                    arr_9 [i_0] [i_1] [(short)10] [i_0] = ((/* implicit */unsigned char) (((+(arr_5 [i_0] [(short)0]))) * (((/* implicit */unsigned int) ((var_13) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [(_Bool)1])))))));
                    var_21 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_7)))) ? (max((((unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_2])), (((/* implicit */unsigned long long int) arr_8 [i_2] [(signed char)16] [(signed char)16] [i_0])))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)591)) ? (679772213) : (((/* implicit */int) (unsigned short)64949)))))))));
                    var_22 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (unsigned char)2))) & ((~(((((/* implicit */int) (unsigned short)592)) << (((-679772225) + (679772241)))))))));
                }
            } 
        } 
    } 
}
