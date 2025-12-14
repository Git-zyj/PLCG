/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167369
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
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 - 3]))));
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_19 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)14904))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    var_20 -= ((((/* implicit */_Bool) 2305842734335787008ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */long long int) 1090295955U)) & ((-9223372036854775807LL - 1LL)))));
                    var_21 &= ((/* implicit */unsigned long long int) (~(41997411)));
                    var_22 -= ((/* implicit */short) ((_Bool) arr_3 [i_3]));
                }
                var_23 = ((/* implicit */unsigned char) min((var_23), (((unsigned char) 1090295969U))));
                var_24 = (~(((/* implicit */int) arr_2 [i_0 - 2] [i_1])));
            }
        }
        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 4) 
        {
            arr_12 [(signed char)14] [i_4] [(signed char)14] &= ((/* implicit */short) (-(((((arr_3 [(signed char)14]) + (9223372036854775807LL))) >> (((18446744073709551615ULL) - (18446744073709551571ULL)))))));
            arr_13 [i_0] = ((/* implicit */unsigned long long int) ((int) arr_1 [i_0 + 1] [i_0]));
        }
        for (int i_5 = 2; i_5 < 20; i_5 += 3) 
        {
            var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -41997401))));
            var_26 = ((/* implicit */signed char) arr_10 [i_0 + 2] [i_5 - 1] [i_5 + 1]);
        }
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_0 - 1]))));
            var_28 = (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0 - 1])));
            arr_18 [i_0] = ((/* implicit */_Bool) (unsigned short)12548);
        }
        var_29 = ((/* implicit */short) ((long long int) arr_0 [i_0 - 2]));
        var_30 = (-(2210149648U));
    }
    for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) arr_20 [i_7]))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_7] [i_7]))) : (var_9))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_10))))), (((var_9) + (((/* implicit */long long int) ((/* implicit */int) var_0))))))))))));
        var_32 = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 41997400)) && (((/* implicit */_Bool) arr_20 [10]))))))));
    }
    var_33 = ((/* implicit */unsigned long long int) var_14);
    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_4)))))) >> (((((/* implicit */int) var_12)) - (9401)))));
    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(7341611604976267091ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 41997421)) ? (((/* implicit */unsigned int) 41997401)) : (var_2)))) ? ((-(-5454665966920507087LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopSeq 2 */
    for (int i_8 = 4; i_8 < 17; i_8 += 2) /* same iter space */
    {
        arr_23 [i_8 - 4] [i_8] = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (var_6)))))));
        arr_24 [i_8] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_14 [i_8 - 3] [i_8 - 3] [i_8 - 1])) ? (var_14) : (41997401))) + (((/* implicit */int) var_13))));
        arr_25 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_8 - 1] [i_8 - 2] [i_8 - 2] [(unsigned char)15])) % (var_14)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1090295983U)) ? (((((/* implicit */_Bool) var_5)) ? (arr_17 [i_8] [i_8 - 2]) : (((/* implicit */unsigned int) 41997395)))) : (var_2)))) : (((max((((/* implicit */unsigned long long int) var_1)), (arr_15 [i_8]))) << (((((/* implicit */int) ((short) var_11))) + (29016)))))));
        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((((/* implicit */_Bool) max((arr_14 [i_8] [i_8 - 1] [i_8]), (2147483642)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (4294967295U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)91))))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_7)))))))));
    }
    for (int i_9 = 4; i_9 < 17; i_9 += 2) /* same iter space */
    {
        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) (signed char)3))));
        arr_28 [13LL] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [(unsigned short)7])) << (((min((-1338348672616455495LL), (((/* implicit */long long int) 3204671314U)))) + (1338348672616455505LL)))));
        var_38 = ((/* implicit */unsigned long long int) 654740551);
        arr_29 [i_9] |= ((/* implicit */signed char) ((((((/* implicit */int) arr_20 [i_9 - 1])) / (((((/* implicit */_Bool) -1338348672616455520LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-7)))))) * (((/* implicit */int) ((unsigned short) max((var_9), (var_9)))))));
    }
}
