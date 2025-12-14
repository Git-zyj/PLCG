/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132417
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [18LL] = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) arr_2 [i_2])))), ((!(((/* implicit */_Bool) arr_5 [4U] [i_1]))))));
                    var_12 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) arr_0 [i_2 - 1] [i_2 + 2])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63))) ^ (3252956751958139274ULL)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)48))))) ^ (var_5))) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) ((unsigned char) (unsigned char)0)))))))));
    var_14 = ((/* implicit */signed char) (_Bool)0);
    /* LoopSeq 4 */
    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (_Bool)1))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_4 = 2; i_4 < 9; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_5 = 4; i_5 < 9; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    {
                        arr_21 [i_3] [i_3] [6] [i_3] [(unsigned short)11] [i_3] = ((/* implicit */unsigned short) 2911377374049735796LL);
                        var_16 = ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) ^ (arr_15 [i_4 + 3] [i_4 + 3]));
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned int) min((var_17), (((837652482U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4 - 2] [i_4 - 2] [i_4 - 2])))))));
        }
    }
    for (unsigned char i_7 = 3; i_7 < 16; i_7 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) arr_6 [i_7] [i_7 + 2] [i_7 - 2]);
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            for (int i_9 = 1; i_9 < 16; i_9 += 3) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((6295042443750611184ULL), (7356485938503968176ULL)))) ? (min((8758929490592652312LL), (-3736015398093869527LL))) : (((/* implicit */long long int) arr_28 [i_9] [i_8] [i_8] [i_10]))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 1) 
                        {
                            arr_36 [i_7 - 2] [i_8] [i_8] [i_9] [i_9 + 1] [i_10] [i_7] = ((/* implicit */unsigned short) 2434872280U);
                            arr_37 [i_11] [i_10] [i_10] [i_7] [(unsigned short)13] [(unsigned short)5] [i_7] = ((/* implicit */short) arr_28 [i_7] [i_7] [i_7] [i_7]);
                            var_20 += ((/* implicit */int) (unsigned short)0);
                            arr_38 [i_7] [8U] [i_10] [6ULL] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-16695)) ? (((14270138119529414082ULL) ^ ((-(0ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [i_7 - 2] [i_10] [i_10] [i_10] [i_11])) ^ (((((/* implicit */int) var_1)) ^ (((/* implicit */int) (unsigned char)181)))))))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_34 [i_7 - 1] [8ULL] [i_8] [4ULL] [i_8] [i_7 - 1]))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 1) 
                        {
                            var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)8)) ^ (((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-88)), ((unsigned short)45749)))) ^ (((/* implicit */int) (unsigned short)63563))))));
                            arr_43 [i_7] [(unsigned short)12] [i_9 - 1] [i_10] [i_8] &= ((/* implicit */long long int) (unsigned char)254);
                        }
                        for (unsigned int i_13 = 2; i_13 < 17; i_13 += 1) 
                        {
                            var_23 += ((/* implicit */unsigned char) var_5);
                            arr_47 [i_7] [i_10] = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (arr_39 [i_7] [i_7 - 3] [i_7] [i_7 - 3] [i_7 - 1] [i_7] [i_7])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25))) ^ (17266841534745520179ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)137)))))) ? (min((-55273547), (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) (unsigned short)17566)))))));
                            arr_48 [i_7] [i_8] [(signed char)16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)36))))) : (((/* implicit */int) (unsigned short)2630))))) ? (arr_34 [i_9 - 1] [i_7] [i_9 - 1] [i_9] [i_7] [i_7]) : (18446744073709551615ULL)));
                        }
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) 0ULL))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned short) (~(((((var_11) ^ (((/* implicit */unsigned long long int) 4294967295U)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_28 [i_7] [i_7] [i_7 - 2] [i_7 - 2])) ^ (0LL))))))));
        arr_49 [i_7] = ((/* implicit */int) arr_7 [i_7] [i_7] [i_7] [i_7]);
    }
    for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 2) 
    {
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (~(((((/* implicit */_Bool) min((905689013U), (((/* implicit */unsigned int) (unsigned char)255))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)225))) ^ (var_9))) : (((/* implicit */unsigned long long int) arr_0 [i_14] [i_14])))))))));
        arr_54 [i_14] = ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) ^ (914589357U))) : (2524595270U)));
        var_27 = ((/* implicit */unsigned int) max((var_27), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_14])))))) ^ (((arr_52 [i_14]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
    }
    for (unsigned short i_15 = 2; i_15 < 16; i_15 += 2) 
    {
        arr_57 [i_15] = ((/* implicit */unsigned short) min((((/* implicit */int) (signed char)-102)), (-1834045940)));
        /* LoopNest 2 */
        for (unsigned char i_16 = 0; i_16 < 17; i_16 += 4) 
        {
            for (unsigned char i_17 = 0; i_17 < 17; i_17 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_18 = 3; i_18 < 16; i_18 += 4) 
                    {
                        for (unsigned short i_19 = 0; i_19 < 17; i_19 += 3) 
                        {
                            {
                                arr_68 [i_15 - 2] [i_17] [i_15 - 2] [i_16] [i_16] [i_15 - 2] [i_19] = min((max((4552690911413679271ULL), (((/* implicit */unsigned long long int) (-(-1988619687)))))), (((/* implicit */unsigned long long int) (-(arr_33 [i_19] [i_19] [(unsigned char)1] [i_15] [i_19] [i_15])))));
                                var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) var_1))));
                                arr_69 [i_19] [i_19] [i_19] [i_19] [i_15 - 2] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 1038810253560712515ULL))))) ^ (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)95))) : (2547624244U)))))));
                            }
                        } 
                    } 
                    arr_70 [5U] [5U] [i_17] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((8569643349569390497ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_16] [i_16] [i_17]))))))))));
                    var_29 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) 14213199352034728590ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_15 - 2]))) : (((536870911U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37751)))))))));
                    var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (+(-1494880532184545065LL))))));
                }
            } 
        } 
        var_31 = (((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125))) ^ (67108863ULL)))))) ? ((-(((((/* implicit */_Bool) 1809501670)) ? (1035637458U) : (arr_39 [i_15 - 1] [i_15 - 2] [i_15 + 1] [i_15] [i_15 + 1] [i_15] [i_15 - 2]))))) : (((/* implicit */unsigned int) max((((/* implicit */int) arr_55 [i_15 - 2] [i_15 + 1])), (((arr_5 [i_15] [i_15]) ^ (-26)))))));
    }
}
