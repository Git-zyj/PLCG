/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138685
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (((16708899640268797350ULL) / (18387921890473593528ULL)))));
        arr_3 [i_0] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */signed char) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) || (((/* implicit */_Bool) var_11)))))) < (16708899640268797341ULL)));
        var_18 += ((/* implicit */unsigned long long int) arr_5 [(unsigned short)10] [(unsigned short)10]);
        var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [(short)10])) + (((/* implicit */int) var_14))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)(-127 - 1))) % (((/* implicit */int) arr_4 [i_1]))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                {
                    var_21 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_2]))) : (arr_8 [i_2])));
                    arr_13 [i_1] [3U] [3U] = (unsigned short)8307;
                }
            } 
        } 
    }
    var_22 *= ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) (unsigned char)253)))), (((_Bool) 16708899640268797341ULL))));
}
