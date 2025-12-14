/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16884
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
    var_11 = (((_Bool)1) || ((!(((/* implicit */_Bool) (short)-18810)))));
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (_Bool)1)))) << (((((/* implicit */int) var_1)) - (119))))))));
    var_13 &= ((/* implicit */unsigned int) var_6);
    var_14 |= ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((17569893288615649355ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            var_15 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 2 */
            for (signed char i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_16 = ((/* implicit */long long int) var_1);
                    var_17 &= ((/* implicit */unsigned char) ((unsigned long long int) ((long long int) (short)18810)));
                    var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                }
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    arr_14 [i_0] [i_1] [i_0] [i_4] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((int) 17133700254929911104ULL))) != (var_6)));
                    var_19 = ((/* implicit */int) ((562936374U) << (((/* implicit */int) (_Bool)1))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    var_20 ^= ((((/* implicit */_Bool) arr_12 [(signed char)14] [i_2 + 1] [i_1 + 1] [i_1 + 1])) ? (((((/* implicit */int) (short)18805)) << (((4213747119286572266ULL) - (4213747119286572250ULL))))) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_1 - 1] [i_2 - 1])));
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_2] [i_5]))));
                    arr_17 [(_Bool)1] [i_5] [i_2 - 1] [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [0U] [i_0] [i_2 - 1] [i_5])) ? (arr_16 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-18810)) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) (_Bool)1)))))));
                }
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    arr_22 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) -1781841651);
                    var_22 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1 + 1] [(unsigned short)20] [i_1 - 1])) ? (arr_9 [(signed char)18] [i_1 - 1] [i_1 + 1] [i_6] [i_7]) : (((/* implicit */int) (_Bool)1))));
                }
                arr_23 [i_6] [18ULL] [i_1] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) 10460678865974937642ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1313043818779640506ULL)))));
                /* LoopSeq 4 */
                for (unsigned char i_8 = 2; i_8 < 18; i_8 += 1) 
                {
                    arr_26 [i_0] [i_6] [i_1] [i_0] [i_8] = ((/* implicit */_Bool) (+(((var_7) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_1 + 1] [13U] [i_0])))))));
                    var_23 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_1] [9] [i_1 + 1] [i_8 + 4] [i_8])) ? ((+(arr_6 [i_1 - 1] [i_6] [i_8 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_8 + 4] [i_8] [i_8 - 1] [i_8])))));
                }
                for (signed char i_9 = 2; i_9 < 19; i_9 += 2) /* same iter space */
                {
                    arr_29 [6U] [i_6] [i_1] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_1] [i_6] [12LL]))))) : (3718854367U)));
                    var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1 + 1] [i_9]))));
                }
                for (signed char i_10 = 2; i_10 < 19; i_10 += 2) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned short) arr_6 [i_0] [i_1 - 1] [i_0]);
                    arr_32 [(unsigned char)12] [i_0] [i_6] [i_0] = ((/* implicit */unsigned int) ((short) var_5));
                }
                for (signed char i_11 = 2; i_11 < 19; i_11 += 2) /* same iter space */
                {
                    arr_35 [i_0] [i_6] [i_6] [i_11 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_27 [i_0] [7] [i_6] [i_6]))));
                    var_26 = ((/* implicit */short) (~(((/* implicit */int) (signed char)-37))));
                    var_27 = (_Bool)1;
                    var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16828048044262939844ULL)))) ? ((-(4213747119286572266ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (18446744073709551615ULL)))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 2; i_12 < 20; i_12 += 1) 
                {
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((signed char) (+(var_9)))))));
                            var_30 = ((unsigned long long int) ((((/* implicit */_Bool) -1528680820)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */unsigned long long int) (+(arr_6 [i_0] [i_13] [i_13])))) & (16485804619891083188ULL))))));
                            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [(short)11] [(_Bool)1] [14LL] [(_Bool)1] [(_Bool)1] [(short)11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) != (arr_12 [i_13] [i_12 + 2] [i_6] [i_1 - 1]))))) : ((((_Bool)1) ? (10460678865974937642ULL) : (((/* implicit */unsigned long long int) arr_28 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]))))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((1994940805U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [6] [i_1 + 1] [i_6] [i_6] [i_6]))))))));
            }
            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_2 [i_1])) + (var_8)))) ? (((arr_1 [i_0]) % (arr_1 [i_1]))) : (var_6)))));
        }
        for (unsigned int i_14 = 0; i_14 < 22; i_14 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_15 = 0; i_15 < 22; i_15 += 1) 
            {
                for (unsigned int i_16 = 0; i_16 < 22; i_16 += 2) 
                {
                    for (signed char i_17 = 0; i_17 < 22; i_17 += 2) 
                    {
                        {
                            arr_50 [i_0] [i_15] [i_15] [i_15] [i_15] [i_17] = ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) 196398757U)))));
                            var_35 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_16])) ? (arr_2 [i_0]) : (arr_2 [i_16])));
                            var_36 &= ((/* implicit */int) (signed char)124);
                        }
                    } 
                } 
            } 
            var_37 = ((/* implicit */short) ((((4213747119286572268ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) -1808371668336015701LL)) : (((((/* implicit */_Bool) arr_44 [8] [i_0])) ? (arr_12 [i_0] [i_0] [i_0] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
            /* LoopNest 2 */
            for (short i_18 = 3; i_18 < 19; i_18 += 2) 
            {
                for (short i_19 = 0; i_19 < 22; i_19 += 2) 
                {
                    {
                        var_38 = ((/* implicit */signed char) arr_46 [i_0] [i_19] [(signed char)20] [i_0] [i_0]);
                        var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) ((unsigned long long int) 17133700254929911079ULL)))));
                        var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) arr_20 [i_0] [i_0] [i_18 + 3]))));
                    }
                } 
            } 
        }
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            var_41 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_20])) ? (((((/* implicit */unsigned long long int) -1808371668336015714LL)) - (17133700254929911079ULL))) : (15059138511825331640ULL)));
            var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_20] [i_20]))))))));
        }
        var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) ((((/* implicit */_Bool) 4213747119286572268ULL)) ? (((((/* implicit */_Bool) 12092064604216097569ULL)) ? (((/* implicit */long long int) var_8)) : (-7324088081128486382LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)84))))))))));
    }
}
