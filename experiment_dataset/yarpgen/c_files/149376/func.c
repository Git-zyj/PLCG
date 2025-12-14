/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149376
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
    var_20 ^= ((/* implicit */unsigned long long int) var_11);
    var_21 = var_4;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_0 [i_0])) >= (((((/* implicit */int) (unsigned short)38820)) << (((((/* implicit */int) var_9)) - (37))))))) ? ((((!((_Bool)1))) ? (((/* implicit */int) arr_0 [(unsigned char)4])) : (((/* implicit */int) max((((/* implicit */short) arr_0 [i_0])), (var_14)))))) : (max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)115)))), (((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) arr_0 [i_0])))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_23 = ((/* implicit */int) arr_3 [i_0] [i_1]);
            arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_1]);
        }
        var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (max((((/* implicit */unsigned long long int) var_11)), (18020049286308282655ULL))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 0U)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (3421582735U) : (((/* implicit */unsigned int) ((/* implicit */int) var_19))))))))));
    }
    for (unsigned int i_2 = 4; i_2 < 13; i_2 += 4) 
    {
        arr_7 [i_2] = ((/* implicit */unsigned int) arr_6 [i_2] [i_2]);
        /* LoopSeq 3 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (max((((15291180306843002191ULL) * (((/* implicit */unsigned long long int) ((-2020902166) / (((/* implicit */int) (unsigned char)173))))))), (((((/* implicit */_Bool) arr_8 [i_2 + 2] [i_3 - 1])) ? (min((((/* implicit */unsigned long long int) -1243900207)), (12738958047745147058ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [(unsigned char)3] [i_3] [i_2 - 3])) * (((/* implicit */int) arr_9 [i_2] [i_2] [i_2])))))))))));
            arr_10 [i_2] [i_3] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((18446744073709551611ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23243))))), (((/* implicit */unsigned long long int) arr_6 [i_3] [i_2])))))));
            var_26 = ((/* implicit */int) (-(((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)82)), (var_11)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_2] [i_2] [i_3])) >> (((((/* implicit */int) (short)-21939)) + (21947)))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)134))) : (12738958047745147068ULL)))))));
        }
        /* vectorizable */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)32)) >> (((((/* implicit */int) (signed char)53)) - (52)))));
            var_28 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_4 - 1]))) / (arr_5 [i_4 - 1] [i_4])));
            /* LoopSeq 3 */
            for (short i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */int) arr_6 [i_2 + 3] [i_4 - 1])) < (arr_13 [i_2 + 2] [i_2 - 1] [i_2] [i_2]))))));
                var_30 = ((/* implicit */short) var_2);
                var_31 = ((/* implicit */long long int) (+(((((/* implicit */int) var_5)) % (var_8)))));
                var_32 = ((/* implicit */long long int) (~(5ULL)));
                arr_15 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_2] [3LL])) ? (((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)91)))))));
            }
            for (short i_6 = 3; i_6 < 12; i_6 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    for (short i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        {
                            var_33 ^= ((/* implicit */long long int) ((arr_17 [i_6 + 1] [i_6 + 1] [i_2 - 3] [i_4 - 1]) != (arr_17 [i_6 + 4] [i_6 + 1] [i_2 - 3] [i_4 - 1])));
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_2] [i_4 - 1] [i_6])) << (((/* implicit */int) var_19))))) ? (arr_5 [i_2 + 2] [i_6 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_19)))));
                        }
                    } 
                } 
                var_35 |= ((/* implicit */signed char) ((arr_21 [i_6 - 2] [i_2] [i_2] [i_2 + 2]) < (((/* implicit */int) (unsigned char)134))));
            }
            for (short i_9 = 3; i_9 < 12; i_9 += 2) /* same iter space */
            {
                var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_21 [9LL] [i_4] [i_4] [i_2 + 3]) : (((/* implicit */int) ((unsigned short) var_11)))));
                arr_27 [i_2] [i_2] [i_9 + 4] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_2] [(short)10])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_16))));
                var_37 = ((/* implicit */unsigned long long int) min((var_37), (((((/* implicit */_Bool) 12738958047745147076ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31885))) : (18397757764724995241ULL)))));
            }
        }
        /* vectorizable */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
        {
            var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */int) (short)31865)) : (((/* implicit */int) (short)31884)))))));
            var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((((((/* implicit */unsigned long long int) var_8)) * (var_2))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))));
        }
        var_40 = ((/* implicit */signed char) ((((((((/* implicit */int) (unsigned short)25546)) - (((/* implicit */int) (unsigned char)238)))) != (((((/* implicit */_Bool) 4316444215008855068ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12)))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) -8LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_2 - 3] [i_2])))));
        /* LoopNest 3 */
        for (int i_11 = 1; i_11 < 15; i_11 += 2) 
        {
            for (unsigned long long int i_12 = 2; i_12 < 14; i_12 += 2) 
            {
                for (short i_13 = 0; i_13 < 16; i_13 += 3) 
                {
                    {
                        var_41 = ((/* implicit */unsigned long long int) max((var_41), (((((/* implicit */_Bool) 17183833478710976407ULL)) ? (7662124171182135193ULL) : (var_0)))));
                        var_42 |= ((/* implicit */unsigned long long int) var_11);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_14 = 1; i_14 < 13; i_14 += 3) /* same iter space */
        {
            var_43 = ((/* implicit */long long int) ((((unsigned int) var_0)) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_14])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_37 [i_14])))))));
            var_44 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_25 [i_2] [i_2])) / (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_40 [i_2] [i_14]))) + (arr_35 [i_14] [i_14] [i_2] [i_14])))) : (((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)113))) : (12738958047745147068ULL)))))));
        }
        for (unsigned long long int i_15 = 1; i_15 < 13; i_15 += 3) /* same iter space */
        {
            var_45 = ((/* implicit */short) ((0) << (((15552404724729124822ULL) - (15552404724729124796ULL)))));
            arr_45 [i_2 + 1] = var_13;
        }
    }
}
