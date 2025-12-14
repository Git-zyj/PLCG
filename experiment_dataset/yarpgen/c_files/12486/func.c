/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12486
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
    var_10 = var_0;
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) == ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)224)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (arr_4 [i_0] [i_0])))) - (((/* implicit */int) arr_4 [i_0] [i_1 + 2]))));
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_7))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65530))) : (min((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)4737)) : (((/* implicit */int) (short)-4737))))), (max((-4602560500940450413LL), (((/* implicit */long long int) (unsigned short)32))))))));
                var_14 = ((/* implicit */unsigned short) min(((-(var_3))), (((/* implicit */unsigned long long int) ((int) arr_0 [i_1 - 1] [i_1 + 1])))));
            }
        } 
    } 
    var_15 -= ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) var_6)), (var_3))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((var_3), (((/* implicit */unsigned long long int) 4602560500940450393LL)))))))));
}
