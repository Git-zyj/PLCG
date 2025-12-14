/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189113
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
    var_17 = ((/* implicit */long long int) (~(((/* implicit */int) (!((_Bool)1))))));
    var_18 = ((/* implicit */unsigned char) (~((((+(((/* implicit */int) var_11)))) & (((/* implicit */int) ((unsigned short) var_16)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_10 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(7789179693470004785LL)))) ? (arr_5 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) (unsigned short)33963))))))));
                    var_19 = ((/* implicit */unsigned short) (+(var_9)));
                    var_20 = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_12))))));
                    var_21 = ((/* implicit */unsigned short) ((var_15) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((unsigned short) ((long long int) arr_4 [i_1] [i_2]))))));
                }
            } 
        } 
        var_22 += ((/* implicit */int) (_Bool)1);
        arr_11 [i_0] = ((/* implicit */long long int) 8431672331575564791ULL);
    }
    for (signed char i_3 = 1; i_3 < 20; i_3 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) 1274951003);
        var_24 = ((/* implicit */int) ((unsigned short) arr_13 [(unsigned short)8]));
    }
    for (short i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        arr_16 [(signed char)0] = ((/* implicit */unsigned int) max((max((var_1), ((+(((/* implicit */int) (signed char)77)))))), (((/* implicit */int) (_Bool)1))));
        var_25 = ((/* implicit */unsigned short) (((-((-(18446744073709551615ULL))))) >> (((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((1164887963838647501LL) - (1164887963838647496LL)))))) ? (((/* implicit */long long int) var_5)) : (max((((/* implicit */long long int) arr_12 [(unsigned char)7] [i_4])), (arr_15 [i_4] [i_4]))))) - (5534795598093653572LL)))));
    }
}
