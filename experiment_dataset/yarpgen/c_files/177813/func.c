/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177813
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) var_6);
                            var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)23))));
                            var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) ((_Bool) (-(11524728719332964746ULL))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
        {
            arr_16 [i_5] = ((((/* implicit */unsigned int) ((/* implicit */int) ((min((arr_9 [i_4] [i_4] [(_Bool)1] [i_4] [i_5] [i_5]), (((/* implicit */unsigned int) (_Bool)1)))) > (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) <= (((unsigned int) (_Bool)1)));
            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_11 [i_4] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_11 [i_4] [i_5]))), (((/* implicit */long long int) ((((/* implicit */_Bool) -1075357470)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)92))))))))));
            arr_17 [i_4] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)237))));
        }
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
        {
            var_17 *= ((/* implicit */signed char) arr_3 [i_4] [i_4]);
            arr_22 [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4] [i_6])) ? (((/* implicit */int) var_11)) : (var_9)))) ? (((18U) * (arr_7 [i_6] [i_6] [i_4] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6]))));
        }
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
        {
            var_18 = (+(((arr_15 [i_7] [i_7] [i_4]) ? (378464823U) : (var_0))));
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (5567946689424543352ULL)))) ? ((-(((/* implicit */int) arr_18 [i_4] [i_4])))) : (var_5)));
            var_20 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_6)) + (2147483647))) >> (((((/* implicit */int) (short)32658)) - (32652)))))) > (((((/* implicit */_Bool) var_0)) ? (67108856U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4] [i_4])))))));
            var_21 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_7] [i_4]))) : (var_8))) > (((/* implicit */unsigned int) var_9))));
            var_22 = ((/* implicit */signed char) (((_Bool)1) ? (288230376151711744LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)18)))));
        }
        arr_25 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_5), (((/* implicit */int) var_4))))) ? ((~(((((/* implicit */_Bool) (unsigned short)33625)) ? (var_2) : (4189021127U))))) : (var_0)));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 24; i_8 += 3) /* same iter space */
    {
        arr_28 [i_8] = ((/* implicit */short) (-(((/* implicit */int) arr_2 [i_8 - 1] [i_8 - 1]))));
        var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) var_11))));
    }
    for (int i_9 = 1; i_9 < 24; i_9 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) (signed char)117);
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 25; i_10 += 4) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    arr_36 [i_9] = ((/* implicit */unsigned int) (((-(0ULL))) - (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        arr_40 [i_9] = (i_9 % 2 == zero) ? (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (32767U)))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((arr_32 [i_9] [i_11] [i_12]) + (328225746408215128LL)))))), (arr_31 [i_9])))))) : (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (32767U)))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((arr_32 [i_9] [i_11] [i_12]) + (328225746408215128LL))) + (3014955601463060376LL)))))), (arr_31 [i_9]))))));
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)95))))) ? ((-(((/* implicit */int) arr_33 [i_9 + 1] [(short)14] [i_9] [i_9])))) : (((((/* implicit */_Bool) arr_38 [i_9] [i_9] [i_9] [i_10])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)75)))))))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 4) 
                    {
                        var_26 = ((/* implicit */signed char) max((((/* implicit */long long int) (~(67108840U)))), (((((/* implicit */_Bool) arr_7 [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9 + 1])) ? (arr_32 [i_9] [i_9 + 1] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 2; i_14 < 24; i_14 += 2) 
                        {
                            var_27 += ((/* implicit */unsigned int) var_12);
                            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_14]))) % (arr_7 [i_9 + 1] [i_9 - 1] [i_9] [i_9]))))))));
                            arr_45 [i_9] [i_13] [i_11] [i_11] [i_13] [2LL] &= ((/* implicit */unsigned char) var_6);
                            var_29 = (!(((/* implicit */_Bool) var_6)));
                            var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_13] [i_11] [i_9])) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) var_4)))))));
                        }
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(13835058055282163712ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_9])) * (((/* implicit */int) arr_6 [i_9 - 1] [i_9 - 1] [i_9 - 1]))))) : (arr_7 [i_9 + 1] [i_9 - 1] [i_9] [i_9 + 1])));
                    }
                    for (unsigned int i_15 = 2; i_15 < 24; i_15 += 4) 
                    {
                        var_32 = ((/* implicit */_Bool) max((4611686018427387904ULL), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (max((((/* implicit */long long int) var_0)), (var_1))))))));
                        var_33 = ((/* implicit */long long int) (-(18446744073709551615ULL)));
                    }
                }
            } 
        } 
    }
    for (int i_16 = 1; i_16 < 24; i_16 += 3) /* same iter space */
    {
        arr_51 [i_16] |= ((/* implicit */unsigned long long int) -2700761316439327814LL);
        var_34 = arr_39 [i_16] [6] [16LL] [16LL] [i_16] [i_16];
        arr_52 [i_16] = ((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_35 [i_16 + 1] [7U] [7U]), (arr_35 [i_16 - 1] [i_16] [i_16]))))));
    }
}
