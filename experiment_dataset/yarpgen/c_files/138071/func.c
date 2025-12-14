/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138071
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
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_0 + 1]))))));
        var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (arr_2 [i_0 - 2] [i_0 + 3]))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            var_12 *= ((/* implicit */unsigned short) (unsigned char)131);
            var_13 = ((/* implicit */int) var_4);
            var_14 = ((/* implicit */unsigned int) var_4);
        }
        for (int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            var_15 = ((/* implicit */int) arr_1 [i_0 + 3]);
            /* LoopNest 2 */
            for (int i_3 = 4; i_3 < 15; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    {
                        var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) (short)-12)) : (((/* implicit */int) (signed char)-1))));
                        var_17 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)57))));
                    }
                } 
            } 
            arr_14 [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) + (arr_2 [i_0 + 3] [i_0 + 1])))) ? (((((/* implicit */_Bool) (short)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65530))) : (arr_2 [i_0 - 2] [i_0 + 3]))) : (((((/* implicit */_Bool) (signed char)-19)) ? (arr_2 [i_0 + 2] [i_0 + 1]) : (arr_2 [i_0 - 3] [i_0 - 1]))));
            var_18 = ((/* implicit */signed char) var_6);
            var_19 = ((/* implicit */signed char) arr_12 [i_0] [i_2] [i_0 - 3] [i_2]);
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_18 [i_0] [i_5] = ((/* implicit */unsigned int) (+((-(arr_5 [i_0 - 3] [i_0])))));
            var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_0 + 3])) * (((/* implicit */int) (signed char)-1))));
        }
    }
    var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_9)))) ? (var_6) : (min((((/* implicit */long long int) var_8)), (var_1)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_4)), ((short)-3657)))) ? (min((var_9), (((((/* implicit */unsigned int) -17)) & (var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    var_23 += (+(((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) var_3)))));
}
