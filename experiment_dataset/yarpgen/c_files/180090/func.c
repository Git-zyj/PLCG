/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180090
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) arr_2 [(unsigned char)1]))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) arr_1 [(signed char)4]))))) | ((+(((/* implicit */int) (signed char)-80))))))))))));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)224)) & (((/* implicit */int) (unsigned short)10741)))))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? ((+(((arr_2 [i_0]) + (((/* implicit */long long int) var_12)))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_0 [i_0] [i_0])), (var_4)))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((arr_5 [i_1]) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1])))))));
        arr_6 [i_1] [i_1] = ((/* implicit */int) ((unsigned char) (unsigned short)65535));
    }
    for (unsigned char i_2 = 2; i_2 < 13; i_2 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)0))))) >> (min((((/* implicit */unsigned long long int) ((arr_3 [i_2 + 1]) == (((/* implicit */int) arr_0 [i_2] [i_2]))))), (((arr_4 [i_2] [(short)16]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))))));
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)24297)))))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 2; i_3 < 13; i_3 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    {
                        var_25 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_3 - 2]))));
                        var_26 = ((/* implicit */unsigned char) ((1968967301) >> (((((/* implicit */int) (unsigned char)85)) - (60)))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */int) arr_19 [i_3] [i_3])) : (((/* implicit */int) var_14)))))))));
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) var_6))));
        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (18446744073709551615ULL))))));
    }
    var_30 = ((/* implicit */int) max((((((/* implicit */_Bool) ((var_11) + (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned int) (+(-1741492544)))) : (var_11))), (var_11)));
}
