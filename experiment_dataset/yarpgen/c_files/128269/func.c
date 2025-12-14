/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128269
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
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((14909252350603067889ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40904))))))));
    var_20 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_21 = ((((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) (unsigned short)65525)))) == (arr_0 [i_0] [7]));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = (!(((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0] [i_0 - 1])));
                    var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)40914))));
                }
            } 
        } 
    }
    for (short i_3 = 3; i_3 < 13; i_3 += 4) 
    {
        var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) arr_4 [2LL] [i_3] [2LL])))))))));
        var_25 = ((/* implicit */unsigned long long int) arr_1 [(unsigned short)8]);
    }
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        var_26 -= ((/* implicit */unsigned short) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_4])))))))));
        var_27 = ((/* implicit */unsigned int) (~((~(((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4]))) | (arr_10 [i_4] [(unsigned short)9])))))));
        var_28 -= ((/* implicit */unsigned short) arr_10 [i_4] [i_4]);
        var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_8 [i_4]))));
    }
    for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [(unsigned char)6] [(unsigned char)6])) <= ((~(((/* implicit */int) arr_13 [i_5] [0])))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            for (short i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                {
                    var_31 ^= ((/* implicit */_Bool) ((arr_18 [i_5]) / (((/* implicit */unsigned long long int) (+(((arr_16 [i_7] [15ULL] [15ULL]) << (((arr_15 [(short)5]) - (8886172913106172691ULL))))))))));
                    var_32 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5]))) / (arr_16 [i_5] [i_6] [i_7])))))))));
                    var_33 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_6] [i_6])) >> (((((/* implicit */int) arr_12 [i_6])) - (46262))))))));
                    var_34 = ((/* implicit */_Bool) arr_14 [i_5]);
                }
            } 
        } 
        var_35 = ((/* implicit */unsigned short) arr_17 [i_5] [i_5] [i_5] [i_5]);
        var_36 = ((/* implicit */long long int) (!((_Bool)1)));
    }
}
