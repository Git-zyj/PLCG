/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177892
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
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_15 -= ((short) ((((/* implicit */_Bool) 2147483647)) ? ((+(var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483647)) ? (arr_4 [i_2] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
                    var_16 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((2147483647), (((/* implicit */int) arr_0 [i_1] [i_1]))))) ? (((int) (short)17281)) : ((-(((/* implicit */int) (short)-17277))))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -2147483644)) && (((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2])))))) : (((((/* implicit */_Bool) (short)-17275)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26655))) : (123145302310912ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (+(((/* implicit */int) var_2))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */int) (short)-17275)), (var_1)))) ? (((((/* implicit */_Bool) (short)19897)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6293))) : (16ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1478)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_7)))))) + (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) - (var_4)))) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)14805))) + (2090418221009358971ULL))))))))));
    var_18 ^= ((/* implicit */int) min((((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))), (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_4))) + (((/* implicit */long long int) ((var_5) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-8421))))))))));
    var_19 = ((/* implicit */unsigned long long int) var_6);
}
