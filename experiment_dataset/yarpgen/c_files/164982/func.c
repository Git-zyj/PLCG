/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164982
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
    var_20 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) min((var_16), (((/* implicit */long long int) var_17)))))), (((long long int) (signed char)-16))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((unsigned int) arr_3 [i_0]));
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) (signed char)17);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 7; i_4 += 2) 
                        {
                            {
                                arr_11 [1LL] [i_2 + 1] [i_1] [i_1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)16)) ? (((unsigned int) arr_8 [i_0] [i_1] [i_3] [7U])) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12)))));
                                arr_12 [7U] [i_1] [7U] [i_1] [i_3] [i_0] = ((/* implicit */int) arr_4 [i_0] [8LL] [(unsigned char)4]);
                            }
                        } 
                    } 
                }
                for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    var_23 = ((/* implicit */unsigned int) ((unsigned char) max((((arr_10 [i_0] [i_1] [i_1] [i_5] [i_5]) / (((/* implicit */unsigned long long int) arr_5 [4U] [i_1] [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)18))) < (arr_10 [i_0] [(_Bool)0] [(_Bool)0] [i_5] [i_5])))))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            {
                                var_24 = ((int) 10823485532032218410ULL);
                                arr_21 [i_0] [i_0] [i_1] [(_Bool)1] [i_0] [i_7] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (signed char)-18)) - (((/* implicit */int) (signed char)-16)))));
                                arr_22 [i_0] [i_0] [i_0] [i_6] [1ULL] = ((/* implicit */signed char) ((((/* implicit */int) ((max((arr_10 [i_7] [i_1] [i_5] [i_6] [i_7]), (((/* implicit */unsigned long long int) arr_19 [i_0] [i_0])))) <= (((/* implicit */unsigned long long int) ((arr_15 [i_0] [i_0] [i_0] [(signed char)8]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_7] [3LL] [i_5] [i_1] [i_0] [i_0]))))))))) << (min((((long long int) arr_13 [8LL] [i_0] [i_5] [8LL])), (((/* implicit */long long int) (unsigned char)0))))));
                            }
                        } 
                    } 
                    arr_23 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)25)) || (((/* implicit */_Bool) arr_16 [i_0] [i_0] [(_Bool)1] [(unsigned char)5]))));
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((int) min((min((arr_15 [i_0] [i_8] [i_5] [i_0]), (2507815431U))), (((/* implicit */unsigned int) 87238686)))));
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)-9))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [5])), (arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [i_8])) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (_Bool)1))))) : (((unsigned int) arr_15 [5U] [i_5] [i_5] [i_8])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_5] [i_0])))));
                        var_27 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)16))) + (((((/* implicit */_Bool) 87238686)) ? (636910969U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [9U]))))))));
                        arr_26 [(unsigned short)8] [i_5] [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) 2247840189U);
                    }
                    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned int) ((int) (unsigned char)238));
                        arr_29 [i_0] [i_1] [i_9] [i_9] [i_0] [i_0] = ((((/* implicit */_Bool) arr_7 [0LL])) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) ((_Bool) max(((short)-31403), (((/* implicit */short) arr_20 [i_0] [i_0] [i_0] [i_9] [3U] [i_0] [i_0])))))));
                        arr_30 [i_0] [i_1] [i_0] [(short)1] [i_5] [i_9] = ((/* implicit */_Bool) ((unsigned long long int) 1696926523));
                    }
                    for (long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        arr_33 [i_0] [i_0] = ((((/* implicit */_Bool) 1696926498)) ? (((/* implicit */int) ((unsigned char) arr_14 [i_0] [i_10]))) : (((/* implicit */int) (signed char)55)));
                        arr_34 [(_Bool)1] [i_0] [0ULL] [0ULL] [i_0] [i_10] = ((/* implicit */unsigned int) (unsigned char)172);
                        arr_35 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                        /* LoopSeq 2 */
                        for (long long int i_11 = 1; i_11 < 8; i_11 += 3) 
                        {
                            var_29 = ((/* implicit */int) arr_1 [i_0]);
                            var_30 = ((/* implicit */signed char) arr_0 [i_0]);
                        }
                        for (unsigned long long int i_12 = 1; i_12 < 7; i_12 += 1) 
                        {
                            arr_42 [i_0] [i_0] [i_0] [2U] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_20 [i_0] [i_10] [i_5] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)18))) : ((-9223372036854775807LL - 1LL)))))), (min((((/* implicit */long long int) (signed char)-11)), (((((/* implicit */_Bool) (unsigned char)67)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_12])))))))));
                            var_31 = ((unsigned long long int) arr_40 [i_10] [i_0] [i_10] [i_10] [(_Bool)1]);
                        }
                        arr_43 [i_0] [i_1] [i_1] [3ULL] [i_1] = ((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_5] [i_10]);
                    }
                }
                for (unsigned int i_13 = 3; i_13 < 9; i_13 += 2) 
                {
                    var_32 = ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_17 [i_0] [i_1] [(unsigned char)1] [i_13])), (max((-1179715922166866716LL), (((/* implicit */long long int) arr_28 [i_0] [i_0] [i_0] [i_0] [(unsigned short)3] [i_0]))))))) ? (12617207649516472128ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13088))));
                    var_33 = ((/* implicit */unsigned long long int) 4073595599906162989LL);
                    /* LoopSeq 1 */
                    for (int i_14 = 0; i_14 < 10; i_14 += 2) 
                    {
                        arr_50 [i_0] [i_1] [i_1] [(signed char)0] [i_14] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0] [(_Bool)1] [(signed char)8] [(_Bool)1])) ? (((/* implicit */int) arr_36 [i_0] [i_1] [i_1])) : (((/* implicit */int) (signed char)11))))) ? (((unsigned int) arr_47 [i_0] [i_1] [i_13 - 3] [i_14])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [4ULL] [i_1] [(_Bool)1] [i_1] [i_13 - 2]))))), (((/* implicit */unsigned int) arr_36 [i_0] [i_13 + 1] [5]))));
                        arr_51 [i_0] [i_0] [i_14] [i_14] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) (unsigned char)106)) >> (((((/* implicit */int) arr_2 [i_0] [i_1])) - (32114))))));
                    }
                }
                for (unsigned int i_15 = 1; i_15 < 9; i_15 += 3) 
                {
                    var_34 = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_8 [i_0] [i_0] [i_15 + 1] [(unsigned short)3])), (((((/* implicit */_Bool) (unsigned short)13088)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_49 [i_0] [i_0] [i_0])))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (arr_19 [5LL] [i_0])))))));
                    var_35 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 1610376989)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)8)))), (((/* implicit */int) arr_24 [i_0] [i_15] [i_15] [i_0] [i_15 - 1] [i_1]))));
                }
            }
        } 
    } 
    var_36 = ((/* implicit */long long int) ((((/* implicit */long long int) 0U)) <= (-8563222843166459398LL)));
}
