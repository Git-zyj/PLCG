/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122917
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
    var_18 &= ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) var_3))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))));
        var_20 = ((/* implicit */unsigned char) arr_1 [i_0 + 1]);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            var_21 = ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_1]);
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_5 [i_0 + 1])))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (18446744073709551604ULL))) : (((/* implicit */unsigned long long int) ((int) arr_2 [(signed char)2] [i_0] [i_0 + 1])))));
        }
        for (short i_2 = 4; i_2 < 9; i_2 += 2) 
        {
            var_23 = ((/* implicit */unsigned char) ((signed char) (-(arr_5 [i_2]))));
            arr_9 [i_2] [2ULL] [i_2] = ((/* implicit */unsigned int) arr_8 [i_0] [i_0 + 1]);
            var_24 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) -7177804171795228007LL)) ? (18446744073709551604ULL) : (18446744073709551614ULL)))));
        }
        var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 + 1]))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) -1)) / (764369191U)))) ? (2147483631) : (((/* implicit */int) ((((/* implicit */_Bool) 8388576U)) && (((/* implicit */_Bool) 16095475653395297642ULL)))))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                {
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) -8431503828471769142LL)) ? (8434575883921142115LL) : (((/* implicit */long long int) 2140423439))))))));
                    var_28 = ((/* implicit */short) 4294967295U);
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned int) ((unsigned long long int) (+(((/* implicit */int) arr_13 [7U])))));
        var_30 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (67108863LL)))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)230)))))));
        var_32 = ((/* implicit */unsigned int) max((var_32), ((-(4294967295U)))));
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                for (int i_9 = 2; i_9 < 13; i_9 += 1) 
                {
                    {
                        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) -2935819736037504937LL))))))));
                        arr_27 [i_6] = ((/* implicit */long long int) (+(((/* implicit */int) arr_24 [i_6] [i_9 + 1] [i_6] [i_8]))));
                        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_17 [i_9])))) ? ((-(max((arr_26 [i_6] [i_6] [i_9 - 1] [i_6]), (arr_22 [i_9 - 2] [i_8] [(signed char)8] [i_6]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))))))));
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */long long int) (~(18446744073709551615ULL)));
    }
}
