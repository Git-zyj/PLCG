/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135451
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
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (-(((/* implicit */int) var_7)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        arr_3 [(short)10] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33587)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [10U] [10U]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [0ULL] [0ULL]))))) : (arr_0 [(short)2])));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [(signed char)9] [i_0 + 1] [i_0] [i_0]))));
                        var_21 = var_16;
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 4; i_5 < 11; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)27908)) ? (((/* implicit */int) (unsigned short)31948)) : (var_17)))));
                            var_23 = ((/* implicit */unsigned short) (_Bool)1);
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) var_9))));
            }
        }
        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            arr_23 [i_0] = ((/* implicit */unsigned char) (short)32422);
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) arr_17 [10] [i_7] [2U] [(_Bool)1])) : (((/* implicit */int) (signed char)78))))))))));
        }
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_8 = 2; i_8 < 9; i_8 += 1) 
    {
        arr_28 [i_8 - 1] = ((/* implicit */_Bool) arr_2 [i_8 - 2] [8U]);
        arr_29 [i_8] [i_8 - 2] = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), (var_16)));
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) 
    {
        arr_33 [i_9] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_16 [i_9] [i_9] [i_9] [i_9])) ? (arr_22 [i_9] [i_9] [i_9]) : (((/* implicit */long long int) var_1)))));
        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) var_10))));
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_9] [i_9] [i_9])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)78))))) : (((/* implicit */int) arr_9 [i_9] [i_9] [i_9] [i_9] [10ULL] [i_9]))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 23; i_11 += 1) 
        {
            for (int i_12 = 1; i_12 < 20; i_12 += 1) 
            {
                {
                    arr_42 [(signed char)1] [i_10] = ((/* implicit */int) var_6);
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned short) (~(max((arr_45 [i_10] [i_12 + 1]), (3295968335U)))));
                        var_29 = ((/* implicit */unsigned int) (~(((((arr_44 [i_10] [i_10] [i_12] [i_13]) ? (9312254959256991599ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_10] [i_10]))))) * (((/* implicit */unsigned long long int) arr_41 [i_10]))))));
                        arr_46 [i_10] [i_10] [i_11] [(unsigned char)6] [i_12 + 4] [i_13] |= ((/* implicit */long long int) min((((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (arr_39 [i_10] [14U])))) ? (((((/* implicit */_Bool) arr_43 [i_10] [(unsigned char)14])) ? (var_18) : (8946204407831243243ULL))) : (((/* implicit */unsigned long long int) arr_45 [20U] [i_11])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [10] [i_11 - 1] [10])) ? (-8256893143468432728LL) : (((/* implicit */long long int) (-(((/* implicit */int) arr_43 [i_10] [(unsigned short)0]))))))))));
                        arr_47 [i_10] [i_11] [i_10] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (signed char)21)) * (((/* implicit */int) var_2)))))) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)0))))));
                    }
                }
            } 
        } 
        var_30 |= ((/* implicit */signed char) (((~(((/* implicit */int) (short)-29180)))) * ((+(((/* implicit */int) (signed char)58))))));
    }
    for (signed char i_14 = 0; i_14 < 17; i_14 += 4) 
    {
        arr_50 [i_14] = ((/* implicit */short) ((unsigned long long int) 1750627071U));
        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((unsigned short) max((((/* implicit */unsigned char) (signed char)-59)), (arr_49 [i_14])))))));
    }
    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_18)))) ? (((/* implicit */int) (signed char)-49)) : ((~(((/* implicit */int) var_10))))))) : (((long long int) ((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14)))))))))));
}
