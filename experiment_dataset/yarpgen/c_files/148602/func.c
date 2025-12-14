/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148602
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 2) /* same iter space */
        {
            arr_5 [i_0] = ((/* implicit */unsigned int) 5009693142145852530LL);
            /* LoopNest 2 */
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */unsigned short) ((max((var_8), (((unsigned int) 1025001828U)))) - (((((/* implicit */_Bool) -7152269779128335513LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (283067978U)))));
                        arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)7050)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        }
        for (unsigned char i_4 = 3; i_4 < 14; i_4 += 2) /* same iter space */
        {
            arr_13 [i_0] [i_4] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((1025001832U) < (var_1))))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
            arr_14 [i_0] = ((/* implicit */unsigned short) max((((int) (+(arr_12 [i_0] [i_0])))), (((/* implicit */int) (_Bool)1))));
            var_14 = (~(((/* implicit */int) arr_8 [i_0] [i_4] [i_0] [i_4])));
            arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3269965438U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)115))))) && ((_Bool)1)));
            arr_16 [i_0] = ((/* implicit */unsigned short) (+((-9223372036854775807LL - 1LL))));
        }
        for (unsigned char i_5 = 3; i_5 < 14; i_5 += 2) /* same iter space */
        {
            arr_21 [i_0] [i_5] [(_Bool)1] &= ((/* implicit */_Bool) var_5);
            arr_22 [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) ((((unsigned long long int) arr_12 [i_5 - 2] [i_0])) >= (((/* implicit */unsigned long long int) (-(arr_12 [i_5 - 2] [i_0]))))));
            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0 + 1] [i_5])) << (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) var_7)))))) : (var_8)))))))));
            var_16 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(1535844148U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (-(3890923733378629951LL)))))) : (9223372036854775801LL)));
            var_17 *= ((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_5]);
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_6] [i_0 + 1]))) : ((-9223372036854775807LL - 1LL))));
            arr_25 [i_0] = ((((/* implicit */_Bool) arr_17 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_17 [i_0 + 1]));
            arr_26 [i_0] [i_0] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 - 1] [i_0] [i_0] [i_0 + 1]))) : ((~(-26783365241845913LL)))));
            arr_27 [(unsigned short)1] [i_0] = ((/* implicit */unsigned char) arr_12 [i_0] [i_0]);
        }
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_4 [i_0] [i_0 - 1]))));
    }
    for (int i_7 = 0; i_7 < 17; i_7 += 2) 
    {
        arr_32 [i_7] = ((/* implicit */long long int) ((((((3140441643748771448LL) != (-7067854818369192531LL))) ? (((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_11))) : (((/* implicit */unsigned long long int) ((arr_30 [i_7] [i_7]) >> (((((/* implicit */int) var_7)) + (11554)))))))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */long long int) var_8)) > (9223372036854775807LL)))))))));
        /* LoopSeq 3 */
        for (unsigned short i_8 = 1; i_8 < 16; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 17; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_20 ^= max((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) << (((((/* implicit */int) arr_35 [i_7] [i_8 + 1] [i_9])) - (61292)))))), (min((((/* implicit */unsigned int) arr_35 [i_10] [i_8 + 1] [i_9])), (1025001803U))));
                        arr_42 [i_10] [i_9] [i_9] [(unsigned char)13] [(unsigned short)4] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) max((972203199U), (3869020825U)))) : (min((var_11), (((/* implicit */unsigned long long int) var_7)))))), (((/* implicit */unsigned long long int) ((min((var_9), (((/* implicit */unsigned int) (unsigned short)59583)))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 832211686U)) > (var_0))))))))));
                    }
                } 
            } 
            arr_43 [i_7] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_8 + 1] [i_8] [i_8] [i_7])) ? (((/* implicit */int) arr_37 [i_8 - 1] [i_8] [i_8] [i_7])) : (((/* implicit */int) arr_37 [i_8 - 1] [i_8] [i_8] [i_7]))))), (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57548))) : (arr_41 [i_8] [i_8 + 1] [i_8] [i_7] [i_7] [i_7]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
        }
        /* vectorizable */
        for (long long int i_11 = 3; i_11 < 16; i_11 += 4) 
        {
            arr_46 [i_11] = ((/* implicit */_Bool) ((int) ((var_12) >= (arr_41 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))));
            arr_47 [i_11] = ((/* implicit */unsigned char) (-(((unsigned long long int) var_7))));
            var_21 &= ((/* implicit */unsigned int) (+(arr_30 [i_11 + 1] [i_11 - 2])));
        }
        for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 1) 
        {
            var_22 = ((/* implicit */unsigned short) 4294967283U);
            arr_50 [i_7] [i_7] |= ((/* implicit */unsigned short) (+(((/* implicit */int) (short)12042))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_13 = 2; i_13 < 14; i_13 += 3) 
        {
            var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_35 [i_13 - 1] [i_7] [i_7]))));
            /* LoopNest 3 */
            for (int i_14 = 3; i_14 < 15; i_14 += 3) 
            {
                for (unsigned char i_15 = 0; i_15 < 17; i_15 += 1) 
                {
                    for (unsigned int i_16 = 2; i_16 < 16; i_16 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) arr_57 [i_7] [i_7] [i_7] [i_7]);
                            var_25 += (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_7] [i_13] [(_Bool)1] [i_16]))) : (arr_36 [i_7] [i_7] [i_7])))));
                            var_26 |= ((/* implicit */short) ((arr_55 [i_14] [i_14] [i_14]) ? (9542641877676025385ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_60 [(_Bool)0] [(_Bool)0] [i_14 + 1] [i_14] [12U] [i_15] [i_15])) ^ (1849937851))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_17 = 0; i_17 < 17; i_17 += 3) 
        {
            var_27 = ((/* implicit */unsigned int) min((var_27), (var_9)));
            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_59 [i_7])) ? (((((/* implicit */_Bool) arr_57 [i_7] [i_17] [i_17] [(short)7])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 0U)))) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_52 [i_7] [(unsigned short)7] [i_7])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))))))));
            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((806140600453015319ULL) << (((((((/* implicit */_Bool) arr_35 [i_7] [i_7] [i_7])) ? (min((var_11), (((/* implicit */unsigned long long int) arr_36 [i_7] [i_7] [i_17])))) : (((/* implicit */unsigned long long int) max((539645496512765111LL), (((/* implicit */long long int) (unsigned char)226))))))) - (3740187067ULL))))))));
            var_30 = ((/* implicit */unsigned short) ((long long int) 539645496512765111LL));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_18 = 1; i_18 < 13; i_18 += 1) 
        {
            var_31 += ((/* implicit */unsigned short) var_6);
            var_32 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 26783365241845913LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)29301))) : (-26783365241845924LL)))));
            var_33 = ((/* implicit */unsigned int) ((8221774225930782690LL) << (((((((/* implicit */_Bool) 7153289334257641665LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) - (1)))));
        }
        arr_69 [i_7] [i_7] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_53 [i_7] [i_7] [i_7])), (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (var_8))) ? (((((/* implicit */_Bool) -277414161)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_7] [i_7] [15U] [15U] [15U] [i_7] [(short)11]))) : (0U))) : (((2759123147U) & (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
    }
    var_34 = var_8;
}
