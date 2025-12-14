/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155547
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
    var_14 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12)))))), ((+(-390712651)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_15 = (-((~(((/* implicit */int) arr_2 [i_0])))));
        var_16 = ((/* implicit */short) min(((~(((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0])))))), (390712651)));
        arr_3 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) 390712659)), (((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) arr_2 [i_0]))))) ? (((/* implicit */long long int) -390712641)) : (-8969303139978841789LL)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 21; i_1 += 1) 
    {
        var_17 = 390712663;
        arr_8 [i_1 - 1] = ((/* implicit */short) (+(((/* implicit */int) arr_7 [i_1 + 1]))));
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 22; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    {
                        var_18 = ((/* implicit */short) ((int) var_12));
                        arr_17 [i_1 + 1] [i_4] [i_2] [i_4] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) -390712654)) | (((((/* implicit */_Bool) (short)28)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))) : (1207569137283488573LL)))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_5 = 1; i_5 < 12; i_5 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)18)) || (((/* implicit */_Bool) 390712650)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_5] [i_5]))))) : ((+(((/* implicit */int) (unsigned char)244)))))))));
        var_20 += ((/* implicit */int) ((((/* implicit */int) arr_9 [i_5])) <= (((/* implicit */int) arr_16 [i_5] [i_5 + 3] [i_5] [i_5]))));
        var_21 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_13 [i_5 + 1] [i_5 + 3] [i_5 + 2]) : (((/* implicit */int) var_3))));
        var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_5 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1072))) : (arr_5 [i_5 + 3])));
    }
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned int) (unsigned short)64950))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_4))) : (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */long long int) var_13)) < (var_4)))), ((~(((/* implicit */int) var_6)))))))));
}
