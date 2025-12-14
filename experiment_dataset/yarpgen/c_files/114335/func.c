/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114335
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
    var_15 = ((/* implicit */int) var_11);
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)217)) >> (((-1227160347) + (1227160372))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [0ULL] [i_1] [i_1] [i_2] |= ((/* implicit */int) arr_0 [i_2]);
                    arr_9 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)238)))))))), (arr_1 [i_0])));
                    arr_10 [i_2] [i_2] [i_0] [i_2] = ((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_0] [i_2]);
                    var_17 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (short)-5919))))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_2 [i_0] [6])))), (((/* implicit */int) arr_0 [5U]))));
                    var_18 = arr_1 [i_0];
                }
            } 
        } 
    } 
}
