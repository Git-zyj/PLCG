/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109602
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (min((((/* implicit */unsigned long long int) 2097449932U)), (6553860610511999334ULL)))))) ? (((unsigned long long int) ((long long int) var_7))) : (((/* implicit */unsigned long long int) ((4598107521355006737LL) + (min(((-9223372036854775807LL - 1LL)), (2090444429010460356LL))))))));
    var_21 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_3)), (var_6)));
    var_22 = (+(var_18));
    var_23 = ((unsigned int) ((((/* implicit */long long int) var_8)) <= (max((-4598107521355006738LL), (((/* implicit */long long int) var_13))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_24 = ((/* implicit */unsigned long long int) 5);
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                for (long long int i_3 = 1; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_25 = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1])) << (((((((/* implicit */_Bool) arr_5 [i_1] [i_2 + 2] [i_1])) ? (var_11) : (((/* implicit */unsigned int) -7)))) - (2504204844U)))));
                        var_26 = arr_1 [i_0];
                        var_27 &= ((/* implicit */short) ((((/* implicit */_Bool) 13)) || (((/* implicit */_Bool) var_12))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                for (int i_6 = 2; i_6 < 15; i_6 += 4) 
                {
                    {
                        arr_20 [i_0] [i_6] = ((/* implicit */long long int) var_19);
                        arr_21 [i_5] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) arr_8 [i_6] [i_4] [i_6 + 1] [i_4] [i_4]));
                        var_28 = ((/* implicit */short) ((((((/* implicit */long long int) 1228626182U)) > (arr_4 [i_5]))) ? (((/* implicit */unsigned long long int) (-(-6263503171039076308LL)))) : (((((/* implicit */_Bool) arr_12 [(signed char)2] [i_6])) ? (((/* implicit */unsigned long long int) var_15)) : (var_9)))));
                        arr_22 [(signed char)15] [i_4] [i_5] [i_5] = ((arr_17 [i_6] [i_6 - 1] [i_6 - 2] [i_6]) % (arr_17 [i_0] [i_6 + 1] [i_6 - 2] [i_6]));
                        arr_23 [i_0] [i_0] [i_0] [6ULL] = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                    }
                } 
            } 
            arr_24 [9] [i_0] = ((/* implicit */short) ((((((((/* implicit */int) (signed char)-53)) ^ (1229392542))) + (2147483647))) >> ((((+(var_4))) + (2137207003258996236LL)))));
        }
    }
    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            arr_29 [i_7] [i_8] = ((/* implicit */unsigned int) (signed char)6);
            /* LoopNest 2 */
            for (signed char i_9 = 1; i_9 < 12; i_9 += 1) 
            {
                for (signed char i_10 = 2; i_10 < 12; i_10 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_11 = 3; i_11 < 11; i_11 += 2) 
                        {
                            arr_39 [i_7] [i_7] [i_7] [i_10] [i_11 - 3] = ((/* implicit */signed char) ((max((arr_36 [i_9 + 1] [i_9] [i_10 - 2]), (arr_36 [i_9 + 1] [i_9] [i_10 - 2]))) >= ((-(1798908581U)))));
                            arr_40 [i_7] [i_7] [i_9] [i_9] [i_11] [i_11] = ((/* implicit */int) ((((((/* implicit */_Bool) ((long long int) arr_14 [i_7] [i_7] [i_11]))) ? ((~(var_11))) : (((var_2) - (arr_36 [i_9] [i_8] [i_7]))))) >= (((min((var_13), (((/* implicit */unsigned int) (short)-17962)))) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6)))))));
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)19))) : (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)17978))) : (arr_9 [i_10 + 1] [i_10]))))))));
                            arr_41 [5] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(3066341134U)))) ? (((((/* implicit */_Bool) -1769544933)) ? (998802491U) : (((/* implicit */unsigned int) -8)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1178601319U))))))));
                            arr_42 [i_7] = ((/* implicit */unsigned long long int) (((~(min((((/* implicit */long long int) (signed char)40)), (5754967974495031368LL))))) * (((/* implicit */long long int) (~(((int) var_15)))))));
                        }
                        arr_43 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_35 [i_9 - 1] [i_10 + 2] [i_10] [i_10 - 2])) ? (((/* implicit */long long int) arr_17 [i_9 - 1] [i_10 + 1] [i_10] [i_10 - 1])) : (-6514360760396928507LL)))));
                        var_30 = ((/* implicit */long long int) var_17);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_12 = 1; i_12 < 13; i_12 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 2) 
                {
                    for (signed char i_14 = 0; i_14 < 14; i_14 += 2) 
                    {
                        {
                            var_31 |= ((/* implicit */unsigned int) var_18);
                            var_32 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_12 - 1] [i_12 - 1])) ? (-1769544939) : (arr_12 [i_12 - 1] [i_12 + 1])))) + (((arr_3 [i_12 + 1] [i_8] [i_8]) ^ (arr_3 [i_12 + 1] [i_8] [i_8])))));
                            arr_54 [i_7] [9] [i_8] [i_12 + 1] [i_7] [i_12 + 1] [i_7] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_53 [13U] [(short)5] [13U] [i_12 + 1] [i_14]))) > ((+(1833243929U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_8)) < (4237617278U))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1373649312)) ? (4U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))) ? (((((/* implicit */unsigned long long int) 2552891936U)) ^ (2357222623724025451ULL))) : (((/* implicit */unsigned long long int) 1426439172503112958LL))))));
                            arr_55 [i_7] [i_8] [i_12] [i_13] [4LL] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) (short)32765))) / (2090444429010460358LL)))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned int) -158200202))))) ? (((6365608095388367886ULL) ^ (((/* implicit */unsigned long long int) 4294967295U)))) : (((((/* implicit */_Bool) 10146682257737995676ULL)) ? (((/* implicit */unsigned long long int) -1307065430)) : (15722387277265342284ULL)))))));
                            arr_56 [i_7] [i_12] [i_7] [i_14] = ((/* implicit */unsigned int) min((min((arr_11 [i_12 + 1] [i_8]), (((/* implicit */unsigned long long int) 4002344607U)))), (((/* implicit */unsigned long long int) ((var_18) % (((/* implicit */long long int) var_13)))))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned int) (+(2090444429010460368LL)));
            }
            arr_57 [i_7] = ((/* implicit */int) (+(var_2)));
        }
        arr_58 [i_7] = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) 2552891944U)) ? (((/* implicit */long long int) -223650015)) : (2090444429010460377LL))), (((/* implicit */long long int) ((short) var_16))))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((2552891938U) < (((/* implicit */unsigned int) 507904))))))))));
    }
}
