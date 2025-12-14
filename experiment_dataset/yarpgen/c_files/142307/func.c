/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142307
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_15 = ((/* implicit */_Bool) (-(2398315464725625861ULL)));
        var_16 = ((unsigned char) (-(((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) (~(16048428608983925754ULL)));
        /* LoopNest 3 */
        for (unsigned int i_2 = 1; i_2 < 10; i_2 += 4) 
        {
            for (int i_3 = 1; i_3 < 11; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    {
                        var_18 = ((/* implicit */int) (((_Bool)1) ? ((+(max((((/* implicit */unsigned long long int) arr_10 [i_1] [i_4] [i_3])), (var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_19 = ((/* implicit */_Bool) arr_5 [i_4]);
                        arr_15 [i_1] [i_1] [(unsigned short)1] [i_2 + 1] [i_2 + 1] [i_4] &= ((/* implicit */unsigned int) (_Bool)1);
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((unsigned short) arr_10 [i_1] [i_2 + 1] [i_3]))));
                        arr_16 [i_1] [i_2] [(short)2] = ((/* implicit */unsigned short) 16048428608983925754ULL);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned int) var_10);
        /* LoopSeq 1 */
        for (unsigned char i_6 = 2; i_6 < 15; i_6 += 3) 
        {
            var_21 = ((/* implicit */unsigned int) arr_20 [(unsigned char)4]);
            arr_23 [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_22 [i_6 + 1] [i_6 + 2]))));
            arr_24 [i_6] [5U] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_18 [i_6]))))) >= (((((/* implicit */_Bool) (unsigned char)109)) ? (2398315464725625861ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_7 = 2; i_7 < 13; i_7 += 3) 
        {
            for (short i_8 = 3; i_8 < 14; i_8 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        var_22 *= ((/* implicit */unsigned char) 4095660952U);
                        arr_35 [i_5] [i_7] = ((/* implicit */unsigned int) ((unsigned char) (unsigned short)0));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_26 [i_7] [i_8] [i_9]))))) ? ((((_Bool)1) ? (arr_21 [i_7]) : (((/* implicit */int) (short)15063)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_5])) || (((/* implicit */_Bool) arr_21 [i_5])))))));
                        arr_36 [i_5] [(_Bool)1] [(short)4] [i_9] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_17 [i_8 + 2] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)40803)))) + (((/* implicit */int) arr_30 [i_7 + 3] [i_7 + 1] [i_7 + 4] [i_7 - 2]))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        arr_40 [i_8] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) (_Bool)1)))));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_5] [i_5])) ? (((/* implicit */int) arr_22 [i_7 + 1] [i_5])) : (((/* implicit */int) arr_22 [i_5] [i_8]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 0; i_11 < 17; i_11 += 4) 
                        {
                            arr_43 [i_5] [i_7] [i_11] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)0)))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) arr_21 [i_8 + 3])) : (var_8)))) ? (((var_2) + (((/* implicit */long long int) 4277711625U)))) : (arr_38 [i_10])));
                        }
                        var_26 &= (_Bool)1;
                    }
                    for (short i_12 = 0; i_12 < 17; i_12 += 4) 
                    {
                        var_27 = ((/* implicit */signed char) (~(((var_7) ? (((/* implicit */int) (short)23185)) : (((/* implicit */int) (_Bool)1))))));
                        arr_47 [i_5] [i_7 - 2] [i_7] [i_7] [i_12] = ((/* implicit */signed char) var_10);
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = 1; i_13 < 16; i_13 += 3) 
                        {
                            arr_51 [i_7] [i_7 + 1] [i_7 + 1] [(short)2] [i_13 - 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) arr_20 [i_5])))))) == (((unsigned int) arr_46 [i_7] [i_7] [i_8] [i_12]))));
                            arr_52 [i_7] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                        }
                    }
                    for (unsigned char i_14 = 0; i_14 < 17; i_14 += 4) /* same iter space */
                    {
                        arr_55 [i_5] [i_5] [i_7] [i_8] [i_7] = ((/* implicit */int) arr_41 [i_5] [i_5] [i_5] [i_5] [i_5]);
                        arr_56 [i_7] [i_14] = ((/* implicit */unsigned char) arr_18 [i_14]);
                        arr_57 [i_5] [i_5] [i_5] [i_7] [i_14] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)29669))));
                    }
                    for (unsigned char i_15 = 0; i_15 < 17; i_15 += 4) /* same iter space */
                    {
                        var_28 = ((/* implicit */short) ((16126128861972520357ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_61 [i_5] [i_7] [(_Bool)1] [i_15] = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_41 [i_15] [i_15] [i_15] [(unsigned short)11] [i_15])))) | (((/* implicit */int) arr_37 [i_8] [i_8 - 3] [i_8 + 1] [i_7]))));
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */int) arr_45 [i_8 - 3] [i_7 + 4])) - (((/* implicit */int) arr_45 [i_8 + 2] [i_7 - 2])))))));
                        arr_62 [i_5] [i_7] [i_8 + 3] [i_8 + 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_8 - 3] [i_8] [i_8 - 1] [i_7])) ? (arr_29 [i_8 - 3] [i_8 + 2] [i_8 + 1] [i_7 - 1]) : (17U)));
                    }
                    var_30 = ((/* implicit */unsigned short) (((+(((/* implicit */int) (signed char)7)))) != (((/* implicit */int) (!(((/* implicit */_Bool) 16596230439347667043ULL)))))));
                    var_31 ^= ((/* implicit */short) (((-(5106055104070649994ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25063)))));
                }
            } 
        } 
        arr_63 [i_5] [i_5] = ((/* implicit */long long int) ((var_11) >= (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_38 [i_5]))))));
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_39 [i_5] [i_5])) || (((/* implicit */_Bool) 5106055104070649994ULL))));
    }
    /* vectorizable */
    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
    {
        arr_66 [i_16] = ((/* implicit */unsigned int) ((unsigned long long int) arr_65 [i_16 - 1]));
        /* LoopNest 2 */
        for (int i_17 = 3; i_17 < 17; i_17 += 1) 
        {
            for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 3) 
            {
                {
                    arr_74 [5ULL] [i_17] [i_16] = ((/* implicit */unsigned long long int) (_Bool)0);
                    arr_75 [i_16] [i_16] [i_16] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_9))));
                    var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) (_Bool)1))));
                    arr_76 [i_16] [i_16] [i_18] = ((/* implicit */short) arr_73 [i_16] [i_16] [i_16] [i_16]);
                }
            } 
        } 
        var_34 += ((/* implicit */long long int) ((unsigned short) arr_68 [i_16 - 1] [i_16 - 1] [i_16 - 1]));
    }
    var_35 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)13229)) ? (9007199254740991LL) : (9007199254740991LL)))))) % (2398315464725625861ULL)));
    var_36 = ((/* implicit */unsigned long long int) var_7);
    var_37 = ((/* implicit */short) ((((/* implicit */_Bool) 8980530852277632052ULL)) ? (((/* implicit */int) (unsigned short)32)) : (((/* implicit */int) (_Bool)1))));
}
