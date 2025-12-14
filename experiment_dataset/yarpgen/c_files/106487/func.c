/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106487
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
    var_14 = ((/* implicit */long long int) min((16682153039431146557ULL), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(242253167)))), (((var_3) / (var_4))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_15 -= ((/* implicit */unsigned short) 872862191U);
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (-(arr_0 [i_0] [2]))))));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (((_Bool)0) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) var_9))))))))));
        var_18 = ((/* implicit */short) (+(arr_1 [i_0])));
        var_19 += ((/* implicit */int) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)-5677)) : (((/* implicit */int) var_9))))) | (arr_1 [i_0])));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((((/* implicit */unsigned int) 0)) ^ (arr_1 [i_1]))) : (arr_1 [i_1])));
        /* LoopNest 2 */
        for (long long int i_2 = 4; i_2 < 13; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_21 = ((/* implicit */short) ((((((/* implicit */int) (unsigned short)65201)) < (((/* implicit */int) arr_3 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (short)5671))) : ((-9223372036854775807LL - 1LL))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_7 [i_1] [i_2] [i_2 + 1] [i_3]))));
                }
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        var_23 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 268435455)) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))) : ((+(4481574505697615662LL))))) | (((/* implicit */long long int) arr_1 [i_4]))));
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) 5046462093811623600ULL)) ? ((-(((/* implicit */int) arr_10 [i_4] [i_4])))) : (((/* implicit */int) (_Bool)0))));
        var_25 += ((/* implicit */long long int) (short)-4032);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 12457230728545906608ULL)) ? (14337618228012895969ULL) : (((/* implicit */unsigned long long int) 872862191U))));
                /* LoopSeq 2 */
                for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    var_27 = ((/* implicit */signed char) arr_12 [i_4] [i_4]);
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_7] [i_6] [i_4])) ? (arr_11 [i_5]) : (arr_11 [i_6])));
                }
                for (short i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    var_29 &= ((/* implicit */long long int) (((_Bool)0) ? (4524446902678240171ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_8] [i_6] [2LL] [i_4])))));
                    var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) arr_18 [i_4] [i_5] [i_6] [i_8]))));
                }
            }
            arr_21 [i_5] [6ULL] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_4] [i_5])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))));
            var_31 = ((/* implicit */_Bool) 2017612633061982208ULL);
            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_14 [i_4] [i_5])))))));
            var_33 = ((/* implicit */unsigned int) (!((_Bool)1)));
        }
        /* vectorizable */
        for (long long int i_9 = 1; i_9 < 15; i_9 += 4) 
        {
            arr_26 [12LL] [i_9 + 1] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_9 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4]))) : (4768808327393643201LL)));
            var_34 += ((/* implicit */unsigned int) -4513942621377668533LL);
            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-11180)) ? (((/* implicit */unsigned long long int) 7711944240137703772LL)) : (4757523143456838884ULL)));
        }
    }
    var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) min((var_11), (((short) ((((/* implicit */_Bool) var_0)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65527)))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_10 = 2; i_10 < 11; i_10 += 2) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned long long int i_12 = 3; i_12 < 10; i_12 += 1) 
            {
                {
                    var_37 = ((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (short)15795))))) != (((((/* implicit */_Bool) ((unsigned short) 8358305816466069560LL))) ? (((((/* implicit */_Bool) arr_32 [i_10] [i_11] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_7))) : (((/* implicit */long long int) -13))))));
                    var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) (~(min((((((/* implicit */_Bool) arr_11 [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (var_4))), (((/* implicit */long long int) (_Bool)0)))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 1) 
                    {
                        var_39 = ((/* implicit */_Bool) (signed char)116);
                        var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((long long int) 0U)))));
                        arr_35 [i_10] [i_10] [i_10] |= ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (625899128)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((-2106671738) * (((/* implicit */int) arr_3 [11ULL]))))))), ((+(min((-4513942621377668533LL), (((/* implicit */long long int) (_Bool)0))))))));
                        arr_36 [i_13] [i_11] [0ULL] [i_13] = ((/* implicit */_Bool) (-(8252023554336406500LL)));
                        var_41 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)1))));
                    }
                    /* vectorizable */
                    for (short i_14 = 0; i_14 < 12; i_14 += 2) 
                    {
                        var_42 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_27 [i_10] [i_12 + 1]))));
                        var_43 = ((((/* implicit */_Bool) arr_2 [i_10 - 2] [i_12 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)32512))) : (4768808327393643201LL));
                        var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) arr_3 [i_10 - 2]))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        var_45 = ((/* implicit */long long int) ((unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-74)) ? (-7096010716043931852LL) : (((/* implicit */long long int) arr_1 [i_10]))))), (11627426780365702667ULL))));
                        var_46 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_11] [i_15]))) < (((((/* implicit */unsigned long long int) 7928223512360928874LL)) + (arr_20 [i_10] [i_11] [i_12] [i_12] [i_12]))))) ? (-2886073569840274017LL) : (((((/* implicit */_Bool) ((arr_34 [i_10 - 2]) >> (((arr_31 [(unsigned short)2] [(unsigned short)2]) - (4370298977258364882ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((-(701899920486853581LL)))))));
                    }
                    /* vectorizable */
                    for (int i_16 = 3; i_16 < 11; i_16 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_17 = 0; i_17 < 12; i_17 += 3) 
                        {
                            var_47 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 8252023554336406500LL)) ? (var_8) : (arr_25 [5LL] [i_11])))));
                            var_48 = ((/* implicit */long long int) ((short) (+(arr_22 [1LL] [i_16] [1LL]))));
                            var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)11422)) ? (arr_46 [i_10 + 1] [i_16 - 1] [(unsigned short)7]) : (((/* implicit */long long int) ((/* implicit */int) (short)-32513)))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_18 = 0; i_18 < 12; i_18 += 1) 
                        {
                            var_50 += ((((/* implicit */_Bool) (unsigned char)98)) ? (((((/* implicit */_Bool) (short)-32485)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32492))) : (-4513942621377668508LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_10] [i_16] [i_12 + 2] [i_16]))));
                            var_51 += ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)32501)) ? (((/* implicit */int) arr_29 [i_10])) : (((/* implicit */int) (short)-19735))))));
                        }
                        var_52 *= ((/* implicit */short) (!(((/* implicit */_Bool) -8558316249770875180LL))));
                        arr_51 [i_11] [i_11] [i_12] [i_12] [i_12] [4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_11] [i_12 - 3] [i_11] [i_11])) ? (((/* implicit */int) (unsigned char)42)) : (((/* implicit */int) arr_23 [i_11] [i_11]))))) <= (arr_6 [i_10 + 1])));
                    }
                    for (signed char i_19 = 0; i_19 < 12; i_19 += 1) 
                    {
                        arr_55 [i_11] = ((/* implicit */unsigned char) (-((-((+(((/* implicit */int) var_10))))))));
                        var_53 -= ((/* implicit */short) (_Bool)1);
                    }
                }
            } 
        } 
    } 
}
