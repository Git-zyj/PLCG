/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175572
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
    var_19 |= ((/* implicit */long long int) min((max((var_5), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) max((min((1849207909445163118LL), (((/* implicit */long long int) (_Bool)1)))), (var_1))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 4; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((((-1849207909445163119LL) ^ (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (var_17)))))) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                arr_13 [i_1] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */long long int) (unsigned char)246);
                            }
                        } 
                    } 
                    var_21 |= ((/* implicit */short) ((((((arr_8 [(_Bool)1] [i_0 - 1] [i_1 + 1]) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) > (((/* implicit */int) (_Bool)1)))))))) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 17; i_5 += 1) 
                    {
                        for (long long int i_6 = 2; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) var_15);
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (min((arr_1 [i_0 - 1]), (arr_16 [i_0] [i_2 - 4] [i_5] [i_2 - 4] [i_6]))) : (((((/* implicit */_Bool) arr_16 [i_2 - 2] [i_2 - 3] [i_6] [i_6] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0 - 1] [i_1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_7 = 3; i_7 < 16; i_7 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_8 = 4; i_8 < 16; i_8 += 1) 
        {
            arr_24 [i_7] [i_8] = ((/* implicit */unsigned int) ((short) ((long long int) min((0ULL), (((/* implicit */unsigned long long int) 1698530123159614897LL))))));
            arr_25 [i_7] = ((/* implicit */short) arr_9 [i_7] [(signed char)2] [i_7] [i_8]);
            arr_26 [i_7] [i_7] = ((/* implicit */unsigned short) arr_1 [i_7]);
            var_24 = (~(((((/* implicit */_Bool) arr_16 [i_7 + 2] [i_7 + 2] [i_7] [i_8] [i_8])) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)-26311))))) : (max((arr_11 [i_7] [(_Bool)1]), (((/* implicit */long long int) arr_17 [i_8] [i_8] [i_7])))))));
        }
        for (unsigned char i_9 = 1; i_9 < 17; i_9 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_10 = 1; i_10 < 15; i_10 += 2) 
            {
                var_25 = ((/* implicit */long long int) min((arr_17 [i_7 - 1] [i_7 - 1] [i_7 + 2]), (var_18)));
                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) 70368710623232ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17114))) : (1698530123159614903LL)));
                arr_32 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(min((arr_15 [i_7] [i_9 + 1] [i_9] [i_9 + 1]), (((/* implicit */long long int) arr_9 [i_7] [i_7] [i_9] [i_10 + 3]))))))) || (((/* implicit */_Bool) ((max((((/* implicit */unsigned int) arr_16 [i_7] [i_9] [i_10] [i_9] [i_9])), (var_17))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_7 + 1] [i_7 + 1] [i_9 + 1] [7LL] [i_10 - 1]))))))));
            }
            for (unsigned short i_11 = 1; i_11 < 17; i_11 += 1) 
            {
                arr_35 [i_7] [i_7] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((30U), (((/* implicit */unsigned int) var_3)))) > (arr_4 [i_9 + 1] [i_9 + 1]))))) - (((arr_19 [i_11 - 1]) ? (((/* implicit */unsigned long long int) min((arr_16 [i_7] [i_7] [i_11] [i_9] [i_11]), (arr_16 [i_11] [i_9] [i_9] [i_7] [i_7])))) : (((var_10) >> (((((/* implicit */int) arr_18 [i_7])) - (199)))))))));
                arr_36 [i_7] [i_7 - 3] [i_9 + 1] [i_7] = ((/* implicit */short) min(((-((~(arr_29 [i_7] [i_9] [i_7]))))), (var_17)));
            }
            /* vectorizable */
            for (unsigned int i_12 = 1; i_12 < 17; i_12 += 2) 
            {
                arr_40 [(short)6] [(short)6] |= ((/* implicit */unsigned short) var_12);
                var_27 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139))) != (18446744073709551613ULL)));
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_9 - 1] [i_12 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_9] [i_9] [i_7]))) : (((18021238122627306915ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12947)))))));
            }
            var_29 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) (+(arr_30 [i_7])))) : (((unsigned long long int) (short)-24971)))), (((/* implicit */unsigned long long int) var_18))));
            /* LoopNest 3 */
            for (short i_13 = 3; i_13 < 17; i_13 += 1) 
            {
                for (unsigned int i_14 = 1; i_14 < 17; i_14 += 3) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            arr_51 [i_7] [i_13 + 1] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) arr_31 [i_7 + 2] [i_7 + 2] [i_14 - 1] [i_15]);
                            arr_52 [8U] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_7 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) min((var_18), (((/* implicit */unsigned short) arr_2 [(unsigned char)10]))))))) << (((((/* implicit */int) arr_41 [i_7 + 1] [i_7] [i_7 + 1])) - (14896)))));
                        }
                    } 
                } 
            } 
        }
        var_30 = ((/* implicit */_Bool) (+(((/* implicit */int) min(((short)32756), (min((((/* implicit */short) (signed char)127)), ((short)12932))))))));
        var_31 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)32768)) ? (18ULL) : (425505951082244674ULL)));
        arr_53 [i_7] = ((/* implicit */unsigned short) arr_44 [i_7] [i_7] [i_7 - 2]);
    }
    /* vectorizable */
    for (unsigned long long int i_16 = 2; i_16 < 20; i_16 += 3) 
    {
        var_32 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_54 [i_16 + 1])) ? (((/* implicit */int) arr_54 [i_16 + 1])) : (((/* implicit */int) arr_55 [i_16 + 1] [i_16 - 2]))));
        arr_56 [i_16] [i_16] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_54 [i_16 + 1]))));
        /* LoopSeq 3 */
        for (unsigned int i_17 = 1; i_17 < 20; i_17 += 4) 
        {
            var_33 = ((/* implicit */unsigned int) arr_54 [i_16 - 2]);
            /* LoopNest 3 */
            for (unsigned short i_18 = 1; i_18 < 21; i_18 += 3) 
            {
                for (long long int i_19 = 1; i_19 < 20; i_19 += 3) 
                {
                    for (unsigned int i_20 = 1; i_20 < 21; i_20 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */short) max((var_34), (arr_67 [(unsigned short)14] [(short)6] [(unsigned short)14] [(signed char)19])));
                            arr_68 [(unsigned char)8] [i_18] [(short)4] [i_20 - 1] |= ((/* implicit */unsigned char) ((arr_62 [i_16] [i_17] [i_18] [i_17] [i_20]) + (arr_62 [(short)9] [i_17 + 2] [i_18 + 1] [i_19 + 2] [i_20 - 1])));
                        }
                    } 
                } 
            } 
            arr_69 [i_16] [i_16] = ((/* implicit */short) arr_55 [i_16] [i_16]);
        }
        for (long long int i_21 = 1; i_21 < 20; i_21 += 1) 
        {
            arr_72 [i_16] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_55 [i_21 + 2] [i_16 + 2]))));
            var_35 |= ((/* implicit */long long int) (-(((/* implicit */int) arr_55 [i_16 + 2] [i_21 - 1]))));
            arr_73 [4LL] &= ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) -4)))));
        }
        for (short i_22 = 1; i_22 < 21; i_22 += 3) 
        {
            var_36 = ((/* implicit */long long int) arr_55 [9LL] [i_22]);
            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_54 [i_22 - 1])) ? (((/* implicit */int) arr_54 [i_22 - 1])) : (((/* implicit */int) arr_54 [i_22 - 1]))));
        }
    }
    for (unsigned char i_23 = 1; i_23 < 13; i_23 += 1) 
    {
        var_38 = ((/* implicit */unsigned char) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 143552238122434560LL))));
        var_39 = ((/* implicit */unsigned short) ((min((max((var_11), (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_23] [i_23] [i_23])) ? (((/* implicit */int) arr_22 [i_23])) : (((/* implicit */int) arr_47 [i_23] [i_23] [i_23 - 1] [i_23] [i_23] [i_23]))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_10 [i_23] [i_23 + 2] [i_23] [i_23] [i_23]))) <= (((/* implicit */int) ((signed char) arr_27 [i_23] [i_23] [i_23])))))))));
        var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) arr_34 [i_23 + 1] [(_Bool)1] [i_23 + 1]))))))));
    }
}
