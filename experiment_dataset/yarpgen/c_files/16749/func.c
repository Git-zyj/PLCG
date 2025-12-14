/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16749
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
    var_15 = var_2;
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((unsigned int) (-(9223372036854775796LL))));
        arr_3 [i_0] = arr_1 [i_0];
        /* LoopNest 2 */
        for (long long int i_1 = 4; i_1 < 8; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_8 [i_2] &= ((/* implicit */unsigned long long int) 1047414944U);
                    arr_9 [i_0] [i_2 + 1] = ((/* implicit */long long int) ((unsigned int) (+(arr_7 [i_1 - 4] [i_1 - 4] [i_1] [i_1 + 1]))));
                    arr_10 [i_0] [i_1 + 3] [i_0] [i_2] = ((/* implicit */unsigned int) arr_5 [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_1 + 1] [i_2] [i_3] = (~((+(arr_4 [i_0]))));
                        arr_14 [i_0] [i_0] [i_2 + 1] [i_0] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4129393102U))))), (3456716756U))) + (((unsigned int) (unsigned char)237))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_5);
                        arr_16 [i_0] = ((((/* implicit */_Bool) ((long long int) (((_Bool)1) ? (((/* implicit */long long int) -329895577)) : (-2338542249954469541LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) == (((/* implicit */unsigned long long int) arr_0 [i_1 + 2] [i_3])))))) : (((((/* implicit */_Bool) 5728683272119694996LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_3])) || (((/* implicit */_Bool) arr_1 [i_2 + 1])))))) : (3247552352U))));
                        arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((var_10) >> (((((((/* implicit */_Bool) -4464229468563960237LL)) ? (13636289007671094545ULL) : (((/* implicit */unsigned long long int) 3456716756U)))) - (13636289007671094535ULL)))));
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
    {
        arr_21 [i_4] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)111)), (var_10)));
        arr_22 [i_4] = ((/* implicit */unsigned char) arr_18 [i_4]);
    }
    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_6 = 1; i_6 < 9; i_6 += 3) 
        {
            arr_27 [i_6 + 1] [i_5] = ((/* implicit */_Bool) (-(arr_5 [i_6])));
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_30 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_9)) > (arr_25 [(unsigned char)6] [i_6])));
                /* LoopNest 2 */
                for (long long int i_8 = 1; i_8 < 9; i_8 += 4) 
                {
                    for (int i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        {
                            arr_36 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = (unsigned char)119;
                            arr_37 [i_9] [i_8 - 1] [i_8] [i_7] [9U] [9U] |= ((/* implicit */long long int) var_5);
                            arr_38 [i_6 - 1] [i_6 + 1] [3LL] [i_6 + 1] [i_6 + 1] = min((arr_28 [i_9] [i_8 + 1] [i_6 + 2] [i_6 - 1]), (((/* implicit */unsigned int) ((max((var_10), (var_11))) > (((/* implicit */unsigned long long int) 1047414927U))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_41 [i_5] &= ((/* implicit */long long int) var_2);
                arr_42 [i_5] [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) var_10)))));
                arr_43 [i_5] [i_6 + 1] [i_5] = ((((/* implicit */_Bool) arr_0 [i_6 - 1] [i_6 + 1])) ? (((var_6) ^ (((/* implicit */long long int) arr_31 [i_5] [i_5] [i_6] [i_6 + 1])))) : (((long long int) arr_19 [i_10] [6U])));
            }
            /* vectorizable */
            for (unsigned char i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                arr_47 [i_5] [i_6 + 2] [8LL] = ((/* implicit */unsigned int) var_3);
                arr_48 [i_6] [i_6] [i_5] = ((/* implicit */long long int) ((arr_12 [i_6 + 2] [i_6 + 2] [i_6 + 1]) < (((/* implicit */long long int) arr_6 [i_6 + 2]))));
                arr_49 [i_5] [i_6 + 2] [i_11] = ((/* implicit */unsigned int) (~(arr_35 [i_6 + 2] [i_6 - 1] [i_6 + 1] [i_6] [i_6 - 1] [i_6 - 1])));
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            arr_56 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) (unsigned char)133))));
                            arr_57 [i_5] = arr_25 [i_13] [i_12];
                            arr_58 [i_6 + 1] = ((/* implicit */_Bool) (~((~(4336647420533917214LL)))));
                            arr_59 [i_6] [i_6 - 1] [i_6] [i_6] [i_13] [i_5] |= arr_33 [i_5] [i_6 + 1] [i_5] [i_12];
                        }
                    } 
                } 
                arr_60 [i_11] [i_11] [i_6] [i_5] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1047414972U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) >= (arr_18 [i_6 + 2]));
            }
            for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 1) 
            {
                arr_65 [i_5] = ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */long long int) max((var_3), ((unsigned char)207)))), (arr_25 [i_5] [i_5]))));
                arr_66 [i_14] [i_6] [i_6 + 2] [i_14] = ((/* implicit */unsigned int) max((((unsigned long long int) arr_44 [i_6 + 2] [i_6 + 1])), (((/* implicit */unsigned long long int) ((7109243841629374202LL) << (((/* implicit */int) (_Bool)0)))))));
                arr_67 [i_5] [i_6] [i_6 - 1] [i_5] = ((/* implicit */unsigned char) ((long long int) arr_39 [i_5] [i_5] [i_14] [i_5]));
                arr_68 [i_14] [i_14] [i_14] [i_5] = ((/* implicit */_Bool) arr_51 [i_5] [i_6] [i_6 + 2] [i_5] [i_6 + 1]);
            }
        }
        for (unsigned int i_15 = 0; i_15 < 11; i_15 += 2) 
        {
            arr_71 [i_15] [i_15] [i_5] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_15])) ? (3247552363U) : (172070822U)))) && (((/* implicit */_Bool) var_3)))) ? (((((/* implicit */_Bool) ((6319626274020586635ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (min((((/* implicit */unsigned long long int) arr_33 [i_5] [i_5] [i_5] [8LL])), (var_11))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1312107238U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1047414965U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1047414919U))))))));
            arr_72 [i_15] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) arr_6 [i_5])) : (arr_45 [i_5]))))));
        }
        arr_73 [i_5] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) (!(var_13)))), (((((/* implicit */long long int) 1073610752U)) & (9223372036854775807LL))))) << (((((((/* implicit */_Bool) ((arr_51 [i_5] [(_Bool)0] [i_5] [i_5] [i_5]) | (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned long long int) arr_26 [i_5] [i_5] [i_5])) : (((10842239635083717880ULL) & (((/* implicit */unsigned long long int) var_1)))))) - (1704670991ULL)))));
        /* LoopNest 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (long long int i_17 = 0; i_17 < 11; i_17 += 2) 
            {
                {
                    arr_79 [i_17] [i_16] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((arr_69 [i_5] [i_5] [i_5]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_5] [i_17] [i_5] [i_5] [i_17] [i_5])))))), (((((/* implicit */long long int) 1478193041U)) | (-6299434647937901362LL)))))) ? (7604504438625833735ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                    arr_80 [i_17] [i_16] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_12 [i_17] [i_5] [i_5]) / (arr_12 [i_17] [i_16] [i_5])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)0)), (((arr_0 [i_16] [i_5]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) : (max((((unsigned long long int) arr_54 [i_17] [i_16] [i_5] [i_5])), (((/* implicit */unsigned long long int) arr_4 [i_5]))))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */unsigned char) var_11);
    var_17 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (var_10)))) && (((/* implicit */_Bool) var_14)));
}
