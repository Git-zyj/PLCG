/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169955
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
    var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? ((-(max((((/* implicit */int) (unsigned char)16)), (-910100174))))) : (((/* implicit */int) var_4))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0])))))) - (((((var_12) + (9223372036854775807LL))) << (((((arr_4 [i_0] [i_2]) + (2597611321603468788LL))) - (16LL)))))));
                    var_18 = ((((/* implicit */_Bool) ((-1108079889) / (((((/* implicit */_Bool) arr_5 [2ULL] [4LL] [i_2])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (signed char)-54))))))) ? ((~(min((((/* implicit */unsigned int) arr_1 [i_2])), (var_10))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) (short)23628)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) ((short) (_Bool)1))), ((~(var_14))))))))));
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            {
                var_20 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) (short)22217)) : (((/* implicit */int) var_0))))))) ? (((((min((((/* implicit */long long int) var_3)), (arr_4 [i_4] [i_4]))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) arr_11 [i_3])) ? (2147483624) : (((/* implicit */int) var_2)))) - (2147483624))))) : (((((/* implicit */_Bool) arr_6 [i_3])) ? (arr_12 [5ULL]) : ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_12 [i_3])))))));
                arr_13 [i_3] [(short)8] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) ((_Bool) (signed char)54))) & (((((/* implicit */int) (short)-11125)) % (((/* implicit */int) (short)15510)))))));
            }
        } 
    } 
}
