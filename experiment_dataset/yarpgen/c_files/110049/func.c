/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110049
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
    var_11 = ((/* implicit */unsigned char) ((var_3) == (((/* implicit */long long int) var_8))));
    var_12 = ((/* implicit */unsigned short) var_1);
    var_13 |= ((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) (unsigned char)107)));
    var_14 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((int) (short)-4125))), (var_1)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        var_16 *= ((/* implicit */unsigned long long int) max((((unsigned char) arr_1 [i_0])), (((/* implicit */unsigned char) ((((/* implicit */int) (short)4124)) <= (((/* implicit */int) (short)4111)))))));
        var_17 = ((/* implicit */int) max((((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) (short)4144)))) || (((/* implicit */_Bool) var_1))))), (arr_1 [i_0])));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    var_18 *= (short)-4125;
                    var_19 = arr_3 [i_0];
                }
            } 
        } 
    }
}
