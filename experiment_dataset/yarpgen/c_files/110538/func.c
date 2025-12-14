/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110538
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
    var_13 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_7)), (3999614315909142074ULL)));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_14 *= ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0])))))));
    }
    for (long long int i_1 = 1; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_16 *= ((/* implicit */short) max((((((/* implicit */long long int) ((/* implicit */int) arr_3 [(short)8]))) ^ (var_7))), (((/* implicit */long long int) ((_Bool) arr_3 [6LL])))));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) arr_3 [2]))));
        arr_4 [i_1] [(signed char)2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) max((var_11), (((/* implicit */signed char) arr_3 [(short)4]))))), (((short) (short)16327))))) ? (((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned int) (short)-12668)), (11U))))) : ((~(((((/* implicit */_Bool) (short)24443)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [2U]))) : (var_2)))))));
        var_18 *= ((/* implicit */unsigned short) var_10);
    }
    for (long long int i_2 = 1; i_2 < 13; i_2 += 3) /* same iter space */
    {
        var_19 -= ((/* implicit */unsigned char) ((arr_6 [3U] [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) arr_3 [2]))))))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) 40U))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 2; i_3 < 15; i_3 += 3) 
        {
            for (unsigned int i_4 = 1; i_4 < 15; i_4 += 4) 
            {
                {
                    var_21 *= ((/* implicit */unsigned char) (short)11652);
                    var_22 -= ((/* implicit */long long int) (~(((/* implicit */int) var_9))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 2) 
    {
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_5 - 2])) ? (24U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_0)))))))))));
        var_24 *= ((/* implicit */unsigned char) 4294967250U);
        var_25 *= ((/* implicit */unsigned int) ((var_5) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_5] [i_5]))))))));
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_14 [i_5 + 1] [i_5 - 1])) + (2147483647))) << (((((((/* implicit */int) arr_14 [i_5 + 1] [i_5 - 1])) + (114))) - (13))))))));
    }
}
