/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124348
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
    var_10 = ((/* implicit */unsigned short) 3526623037U);
    var_11 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */long long int) 3526623037U)))))) != (((/* implicit */long long int) max((((((/* implicit */_Bool) var_8)) ? (3526623018U) : (768344259U))), (((/* implicit */unsigned int) var_4)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [13ULL] = ((/* implicit */unsigned long long int) (~((-(((unsigned int) arr_1 [i_0]))))));
        var_12 = ((/* implicit */unsigned char) ((((unsigned long long int) arr_1 [i_0])) > (((/* implicit */unsigned long long int) min((768344269U), (3526623039U))))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_2 = 3; i_2 < 21; i_2 += 3) 
            {
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 768344269U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2]))) : (3526623037U)))) ? (((((/* implicit */_Bool) 3526623037U)) ? (((/* implicit */long long int) 3526623051U)) : (var_2))) : (((/* implicit */long long int) ((3526623052U) + (3526623051U))))));
                arr_9 [i_0] [i_1] [i_2] [i_1] = ((unsigned long long int) arr_8 [i_2 - 2] [i_2 - 2] [i_2 - 3]);
                arr_10 [i_2] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) (-(((/* implicit */int) ((var_8) <= (((/* implicit */unsigned long long int) 768344244U)))))));
                var_14 = ((/* implicit */signed char) (~(768344276U)));
                var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
            }
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 3; i_5 < 20; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */long long int) arr_3 [(_Bool)1]);
                            var_17 = ((/* implicit */unsigned char) ((768344284U) % (768344259U)));
                            var_18 = ((short) var_8);
                        }
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_3]))) < (min((768344259U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4)))))))));
                        var_20 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (arr_7 [i_4] [(short)8] [i_3])))) ? (3526623019U) : (((768344244U) ^ (((((/* implicit */_Bool) var_5)) ? (768344244U) : (arr_14 [i_0] [i_0] [i_4] [i_0] [(short)10]))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((768344288U) >= (768344244U))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((768344276U) >= (arr_7 [i_1] [i_1] [8LL]))))) : (((((/* implicit */_Bool) 768344259U)) ? (arr_8 [i_0] [i_0] [i_1]) : (768344259U)))))) >= (arr_1 [i_0])));
        }
        for (short i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            var_22 = ((/* implicit */short) ((3526623034U) * (768344244U)));
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((768344259U) != (((((/* implicit */_Bool) (+(768344244U)))) ? (min((768344259U), (768344259U))) : (768344259U))))))));
            arr_19 [i_6] = ((/* implicit */unsigned short) 3526623015U);
            var_24 = ((/* implicit */signed char) (!(((arr_8 [i_6] [i_0] [i_0]) < (3526623037U)))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 1; i_9 < 19; i_9 += 3) 
                {
                    for (unsigned short i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_9 + 3] [i_9 - 1] [i_9 + 3])) ? (3526623051U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_9 + 1] [i_9 + 2] [i_9 + 1])))))) ? (max((((/* implicit */unsigned int) arr_23 [i_9 - 1] [i_9 + 2] [i_9 + 2])), (3526623052U))) : (min((3526623016U), (768344269U)))));
                            arr_29 [i_0] [i_0] [i_7] [i_0] [i_9] [i_9] [(signed char)18] = ((/* implicit */short) ((((/* implicit */int) ((768344264U) >= (3526623045U)))) << (((/* implicit */int) ((_Bool) arr_6 [i_8] [i_7] [i_8] [i_8])))));
                            var_26 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned int) 3526623001U))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 768344259U)) ? (768344294U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0])))))))) ? (min((((/* implicit */long long int) ((((/* implicit */unsigned int) arr_6 [i_0] [i_7] [i_0] [(short)3])) == (768344259U)))), ((-(var_2))))) : (((/* implicit */long long int) ((min((arr_21 [i_7] [i_10]), (3526623036U))) + (3526623027U))))));
                            var_27 += ((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) 3526623036U))) ? (((/* implicit */int) ((((/* implicit */long long int) 768344294U)) > (var_3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 768344267U)))))))) & ((+(min((var_2), (var_7))))));
                            arr_30 [(unsigned char)15] [i_7] [(unsigned char)15] [(unsigned char)15] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */long long int) 768344259U)) : (arr_0 [i_8])))) ? (((/* implicit */long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) ((short) 3526623052U)))))) : (max((((/* implicit */long long int) (~(768344294U)))), (min((((/* implicit */long long int) 3526623052U)), (var_7))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((768344259U) >= (768344267U)))) | (((/* implicit */int) ((signed char) 3526623001U)))))), (((unsigned long long int) (+(768344299U))))));
                /* LoopSeq 4 */
                for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 3) 
                {
                    arr_35 [i_7] [i_8] = ((/* implicit */unsigned short) min((3526623005U), (3526623005U)));
                    arr_36 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_14 [i_11] [i_0] [i_0] [i_0] [i_0])) ? ((-(3526623036U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))))) - (((((((/* implicit */_Bool) 3526623019U)) ? (3526623027U) : (3526623000U))) | ((~(3526623001U)))))));
                    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 768344313U)) ? (768344294U) : (arr_25 [i_0] [i_0] [i_8] [i_0]))) >> (((768344243U) - (768344235U)))))) || (((/* implicit */_Bool) max((3526623011U), (max((((/* implicit */unsigned int) arr_28 [i_0] [(short)21] [(unsigned short)17])), (arr_25 [i_0] [10U] [i_8] [i_11])))))))))));
                    var_30 = ((/* implicit */int) min((((long long int) ((768344291U) ^ (768344244U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_24 [i_0] [i_7] [i_11]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (768344297U))))));
                }
                for (unsigned short i_12 = 4; i_12 < 18; i_12 += 1) 
                {
                    arr_41 [i_12] [i_8] [i_7] [i_0] = ((/* implicit */_Bool) max((768344244U), (768344259U)));
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        var_31 ^= ((/* implicit */short) ((signed char) ((3526623052U) | (((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))))));
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_7] [i_8] [i_12 - 4])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 768344268U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [10U] [(short)5]))) : (768344269U)))) : (((((/* implicit */_Bool) 768344296U)) ? (arr_12 [i_8]) : (((/* implicit */long long int) 3526622983U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_3)))) : (max((var_9), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_12] [i_12]))))));
                    }
                }
                for (short i_14 = 0; i_14 < 22; i_14 += 3) /* same iter space */
                {
                    arr_48 [16ULL] [i_8] [i_7] [i_7] [16ULL] = ((/* implicit */unsigned long long int) 768344286U);
                    arr_49 [(_Bool)1] [i_7] [i_7] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_0] [i_7] [i_14] [i_14] [i_7])) ? (3526623058U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_0] [i_7] [i_8] [i_14] [i_14])))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_8] [7U] [20U] [i_8] [(unsigned short)6]))) : (3526623002U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_44 [i_0] [i_7] [i_8] [(_Bool)1] [i_14])) >> (((3526623018U) - (3526622989U))))))));
                    arr_50 [i_0] [9U] [15ULL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) 768344259U))) ? ((+(768344272U))) : (min((((/* implicit */unsigned int) arr_4 [i_0])), (((((/* implicit */_Bool) var_2)) ? (3526622999U) : (3526623002U)))))));
                }
                for (short i_15 = 0; i_15 < 22; i_15 += 3) /* same iter space */
                {
                    arr_53 [i_15] [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((min((arr_14 [i_7] [i_7] [i_7] [5U] [i_7]), (3526623002U))) <= (768344259U))))) & (((unsigned int) ((3526623027U) & (768344243U))))));
                    arr_54 [i_7] = ((/* implicit */unsigned short) (+(768344275U)));
                    arr_55 [i_0] [i_7] [i_15] [i_15] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3526623052U)) || (((/* implicit */_Bool) ((short) arr_31 [i_0] [i_7] [i_8] [i_15])))));
                }
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((768344303U) / (768344318U))) % (max((3526623052U), (768344275U)))))) : (max((((((/* implicit */unsigned long long int) 768344297U)) % (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (768344311U) : (768344297U))))))));
            }
            /* vectorizable */
            for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_17 = 0; i_17 < 22; i_17 += 1) 
                {
                    arr_61 [i_0] = 3526622985U;
                    var_34 = ((/* implicit */unsigned int) min((var_34), (3526622999U)));
                }
                for (short i_18 = 0; i_18 < 22; i_18 += 1) 
                {
                    var_35 ^= ((/* implicit */unsigned int) ((unsigned short) arr_26 [i_16] [i_0] [i_16] [i_18]));
                    var_36 = ((/* implicit */unsigned char) (-(768344313U)));
                    var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_51 [i_0] [i_0] [i_16] [i_18] [(short)11] [i_7])) % (((/* implicit */int) arr_51 [i_0] [i_0] [(short)3] [i_18] [i_16] [(short)2]))));
                }
                for (short i_19 = 0; i_19 < 22; i_19 += 1) 
                {
                    arr_68 [i_0] [i_7] [i_0] [i_19] = ((/* implicit */unsigned short) (~((+(var_8)))));
                    var_38 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_62 [i_0] [i_7] [i_16] [i_19])))) > (768344311U)));
                    arr_69 [i_0] [i_7] [i_16] [7U] = ((/* implicit */signed char) ((var_3) % (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                    var_39 = ((((/* implicit */_Bool) 768344297U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 768344275U)))) : (768344275U));
                }
                var_40 &= ((/* implicit */unsigned short) ((3526622985U) - (3526623028U)));
            }
            /* LoopSeq 1 */
            for (unsigned int i_20 = 2; i_20 < 21; i_20 += 3) 
            {
                var_41 ^= 768344297U;
                var_42 = ((/* implicit */unsigned long long int) ((unsigned int) ((short) ((768344272U) % (3526622999U)))));
                /* LoopNest 2 */
                for (signed char i_21 = 0; i_21 < 22; i_21 += 4) 
                {
                    for (unsigned long long int i_22 = 2; i_22 < 18; i_22 += 3) 
                    {
                        {
                            var_43 = ((/* implicit */unsigned short) (~(((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_20] [i_20 - 2] [(unsigned short)9] [i_20 + 1] [i_20 + 1] [i_20 + 1])))))));
                            arr_78 [i_0] [i_0] = ((/* implicit */unsigned char) ((3526623006U) * (768344267U)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_23 = 0; i_23 < 22; i_23 += 4) 
                {
                    for (short i_24 = 0; i_24 < 22; i_24 += 4) 
                    {
                        {
                            var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) ((int) ((3526622999U) >> (((3526622992U) - (3526622981U)))))))));
                            var_45 ^= ((/* implicit */signed char) 768344275U);
                        }
                    } 
                } 
                var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (768344296U) : (3526623020U))), (((((/* implicit */_Bool) 768344256U)) ? (3526623020U) : (3526623021U)))))) ? (((/* implicit */long long int) 3526622999U)) : (((long long int) 768344311U))));
            }
            var_47 = max((min(((-(var_8))), (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) 3526622985U))))))), (((/* implicit */unsigned long long int) var_6)));
            arr_85 [i_0] = ((unsigned long long int) min((min((3526623002U), (768344275U))), (((((/* implicit */_Bool) 3526623030U)) ? (768344270U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_7] [i_0] [i_0])))))));
        }
    }
    var_48 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_0)))) && (((/* implicit */_Bool) var_4))));
}
