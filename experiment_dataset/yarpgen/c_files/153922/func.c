/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153922
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = min((671441883), (((((/* implicit */_Bool) 10925557038163919676ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))));
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)56546))));
        var_18 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_1 [i_0]))))), (max((var_6), (((/* implicit */unsigned long long int) (unsigned short)56548))))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned long long int) 2416299678U);
        var_19 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)56546))))) <= (((unsigned int) (unsigned char)54)))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) arr_0 [i_2] [i_2]);
        var_21 = ((/* implicit */unsigned long long int) arr_0 [i_2] [i_2]);
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (int i_5 = 1; i_5 < 17; i_5 += 1) 
            {
                {
                    arr_20 [(signed char)4] [i_4] = (+(((((/* implicit */int) var_11)) | (1980321427))));
                    /* LoopSeq 2 */
                    for (int i_6 = 4; i_6 < 17; i_6 += 1) 
                    {
                        arr_25 [i_4] [(unsigned short)9] [(unsigned short)9] [i_4] = ((/* implicit */unsigned long long int) arr_14 [i_6 - 1] [i_6]);
                        var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1025554649)) ? (-1025554649) : (((/* implicit */int) (unsigned char)70))));
                        arr_26 [(unsigned char)5] [i_4] [i_4] [i_6] [i_6 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -118441553208615029LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4]))))) : (arr_21 [i_6] [i_6] [i_6 - 3] [i_6 - 3] [i_4])));
                        var_23 = ((/* implicit */short) (unsigned char)173);
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (+(arr_16 [10U] [4ULL] [i_5]))))));
                        arr_30 [i_3] [i_4] [i_4] [i_4] [i_4] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) arr_0 [i_3] [i_4])))));
                        arr_31 [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)56546))))) % (((arr_16 [i_7] [i_4] [i_4]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_4])))))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_3] [i_3] [i_5 - 1])) == (((/* implicit */int) arr_24 [i_3] [i_4] [i_5 - 1]))));
                    }
                    var_26 = ((/* implicit */short) arr_29 [i_4]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_8 = 3; i_8 < 17; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                {
                    arr_37 [i_8] [i_8] [i_9] [i_8] = ((/* implicit */long long int) ((arr_3 [i_8] [i_8 + 1]) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) arr_1 [i_9])) : (623372172))))));
                    arr_38 [i_8] [i_8] = ((/* implicit */unsigned int) arr_16 [(unsigned short)10] [i_8] [(unsigned char)2]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            for (signed char i_11 = 1; i_11 < 15; i_11 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (int i_13 = 0; i_13 < 18; i_13 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_11] [i_11 + 3] [i_11] [i_12] [i_11 + 3] [i_12])) ? (((((/* implicit */_Bool) 2143227284)) ? (((/* implicit */int) arr_48 [i_3] [i_10] [(unsigned char)7])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_11))));
                                arr_49 [(short)14] |= ((/* implicit */long long int) (~(((/* implicit */int) arr_44 [i_11] [i_11 - 1] [i_11] [i_11 - 1] [i_11 + 3]))));
                                var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_42 [i_11 - 1] [i_11]))));
                                var_29 += ((/* implicit */unsigned short) 2885033412859602845ULL);
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_11] [i_11 + 2] [i_11 + 1] [i_11])) ? (((/* implicit */int) arr_22 [(short)6] [i_11] [i_11] [i_11 + 1] [(unsigned char)7])) : (((/* implicit */int) (unsigned char)70))));
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 18; i_14 += 3) 
                    {
                        for (int i_15 = 1; i_15 < 15; i_15 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */int) ((((/* implicit */int) arr_19 [i_10] [i_11] [i_15 + 3])) > (((/* implicit */int) arr_19 [i_10] [i_11] [i_15 + 2]))));
                                arr_55 [i_3] [i_10] [i_11] [i_11] [i_14] [(signed char)0] [(signed char)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_11])) && (((/* implicit */_Bool) arr_29 [i_11]))));
                                arr_56 [i_15] [i_11] [i_3] [i_11] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_44 [i_14] [i_14] [i_14] [i_14] [i_14]))) <= (((((/* implicit */_Bool) (short)2092)) ? (arr_17 [i_11] [i_10] [i_11 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (short)9169)))))));
                                arr_57 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)56)) ? (8697450361708312995LL) : (8697450361708313000LL)));
                                var_32 |= ((/* implicit */int) ((unsigned long long int) arr_45 [i_15 - 1] [i_11 + 3] [4LL] [i_14]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        for (long long int i_17 = 0; i_17 < 18; i_17 += 1) 
                        {
                            {
                                arr_64 [i_11] [i_10] [i_10] [i_16] [i_10] = ((/* implicit */unsigned short) arr_27 [i_11] [i_11] [i_11 - 1] [i_11]);
                                arr_65 [i_10] [i_3] [i_10] [i_11] [i_10] = ((((/* implicit */_Bool) 2885033412859602839ULL)) ? (((/* implicit */int) (short)5956)) : (((/* implicit */int) (unsigned short)6093)));
                            }
                        } 
                    } 
                    var_33 -= ((/* implicit */unsigned long long int) arr_63 [i_10] [i_10] [16U] [i_10] [i_10]);
                }
            } 
        } 
    }
    var_34 ^= ((/* implicit */int) var_6);
}
