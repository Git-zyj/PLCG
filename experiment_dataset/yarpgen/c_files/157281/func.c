/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157281
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((unsigned int) (short)15980))) + (((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (max((arr_2 [i_0]), (((/* implicit */long long int) var_9))))))));
        var_12 = ((/* implicit */unsigned long long int) max((arr_0 [i_0] [i_0]), (((/* implicit */signed char) (_Bool)1))));
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (short)-15977)) : (var_0))))) ? (((int) max(((short)15979), (((/* implicit */short) arr_1 [i_1]))))) : (((/* implicit */int) var_10))));
            arr_9 [i_1] [i_2] = ((/* implicit */long long int) ((max((arr_4 [i_1] [i_2]), (arr_4 [i_2] [i_2]))) ? (((/* implicit */unsigned int) ((arr_4 [i_1] [i_2]) ? (((/* implicit */int) arr_4 [i_1] [i_2])) : (((/* implicit */int) (unsigned short)9662))))) : (((unsigned int) arr_4 [i_1] [i_2]))));
        }
        arr_10 [i_1] = ((/* implicit */unsigned int) ((unsigned char) arr_2 [i_1]));
        /* LoopNest 3 */
        for (signed char i_3 = 1; i_3 < 19; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    {
                        arr_20 [i_1] [i_1] [i_4] [i_5] [i_5] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_7 [i_3 + 2] [i_1])) : (((/* implicit */int) ((((/* implicit */int) (signed char)5)) >= (((/* implicit */int) (unsigned short)21381))))))));
                        arr_21 [i_1] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_5] [i_4] [i_3] [i_1]))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                {
                    arr_29 [i_1] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */long long int) arr_12 [i_7] [i_6])) : ((~(arr_11 [i_7] [i_6] [i_1])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 2; i_8 < 18; i_8 += 2) 
                    {
                        for (int i_9 = 2; i_9 < 20; i_9 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_9 - 1] [i_6] [i_8 + 1] [i_6])) ? (arr_27 [i_9 - 2] [i_6] [i_8 + 3] [i_8 + 3]) : (arr_27 [i_9 - 1] [i_7] [i_8 + 1] [i_8 + 3])))) ? (((((/* implicit */_Bool) arr_27 [i_9 - 1] [i_9 - 1] [i_8 + 1] [i_8 + 1])) ? (arr_27 [i_9 - 2] [i_6] [i_8 + 3] [i_8 + 1]) : (arr_27 [i_9 - 2] [i_9 - 2] [i_8 + 2] [i_8 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)11931)))))))));
                                arr_35 [i_9] [i_6] [i_7] [i_1] [i_9 - 2] [i_7] [i_8 + 3] = ((/* implicit */_Bool) arr_7 [i_1] [i_1]);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)8)))))))) : (max((((/* implicit */unsigned int) ((unsigned char) arr_13 [i_1] [i_1] [i_1]))), (((unsigned int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-114)) ? (114688U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */_Bool) (short)15558)) ? (((/* implicit */unsigned long long int) 10U)) : (var_3)))))) ? (((/* implicit */int) (unsigned short)13900)) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_0)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
    {
        for (unsigned int i_11 = 1; i_11 < 23; i_11 += 2) 
        {
            {
                var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3051220332173559925LL)) ? (-2408981905228605360LL) : (((/* implicit */long long int) 2U))))) ? (((/* implicit */int) ((_Bool) 2163703240275202000ULL))) : (((/* implicit */int) (unsigned char)152))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_40 [i_10] [i_11 - 1] [i_11 + 1]))))) : (((((_Bool) (short)-27955)) ? (((/* implicit */unsigned long long int) var_8)) : (12900514917319533795ULL)))));
                var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned short)44142)))))))));
                /* LoopSeq 1 */
                for (signed char i_12 = 0; i_12 < 24; i_12 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 2) 
                    {
                        for (unsigned long long int i_14 = 2; i_14 < 22; i_14 += 2) 
                        {
                            {
                                var_19 += ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((short) arr_36 [i_11 + 1] [i_11 + 1]))) ? (var_0) : (((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_11 + 1] [i_11])) && (((/* implicit */_Bool) (unsigned short)51939))))))));
                                var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_11 - 1] [i_13])) ? (((/* implicit */int) arr_37 [i_12])) : (((/* implicit */int) arr_41 [i_14] [i_14]))))) ? (((((/* implicit */_Bool) arr_41 [i_10] [i_14])) ? (((/* implicit */int) arr_41 [i_10] [i_13])) : (((/* implicit */int) arr_41 [i_10] [i_14])))) : (((((/* implicit */int) var_1)) * (((/* implicit */int) arr_37 [i_12]))))))));
                                arr_49 [i_11] [i_12] [i_12] [i_13] = ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 24; i_15 += 4) 
                    {
                        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                        {
                            {
                                arr_54 [i_16 - 1] [i_15] [i_11] [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26001)) ? (((((/* implicit */unsigned long long int) arr_52 [i_11] [i_16] [i_16] [i_15])) - ((-(var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_43 [i_10] [i_11 + 1] [i_16 - 1]))))));
                                arr_55 [i_10] [i_11] [i_12] [i_11] [i_16 - 1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) arr_45 [i_10] [i_10])) - (17967887108860862633ULL)))))) >= (((((/* implicit */_Bool) ((short) -8522622724883827951LL))) ? (((((/* implicit */_Bool) arr_45 [i_10] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_7))) : (((/* implicit */unsigned long long int) (+(arr_44 [i_11] [i_12] [i_11]))))))));
                                var_21 = ((/* implicit */signed char) arr_38 [i_10] [i_10]);
                                arr_56 [i_10] [i_11 - 1] [i_10] [i_15] [i_11] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))))) | (var_3)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 3; i_17 < 22; i_17 += 4) 
                    {
                        for (signed char i_18 = 0; i_18 < 24; i_18 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_42 [i_17] [i_10] [i_10]))));
                                var_23 = ((/* implicit */unsigned int) arr_42 [i_12] [i_12] [i_12]);
                                arr_62 [i_10] [i_11] [i_12] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)71)) + (((/* implicit */int) var_2)))) * (((/* implicit */int) (unsigned short)51939))))) ? ((((-(var_7))) - (((/* implicit */unsigned long long int) 3142539510U)))) : (((((/* implicit */_Bool) 1587826981U)) ? (((((/* implicit */_Bool) arr_37 [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39522))) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_11 + 1])))))));
                                var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24165)) ? (13655296793055070535ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)10)))));
                            }
                        } 
                    } 
                    var_25 = (short)-32471;
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((_Bool) arr_58 [i_10]))) : (((/* implicit */int) arr_40 [i_11] [i_11 + 1] [i_11]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_12] [i_11 + 1] [i_12] [i_11] [i_11] [i_12] [i_11]))) : (((var_10) ? (((/* implicit */unsigned long long int) 279323540U)) : (((((/* implicit */_Bool) (short)-31111)) ? (arr_61 [i_11] [i_11 + 1] [i_11] [i_11] [i_11] [i_11 - 1] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_10] [i_10] [i_12] [i_11] [i_11] [i_11] [i_11])))))))));
                }
                arr_63 [i_11] [i_11] = arr_60 [i_10] [i_11] [i_10] [i_11] [i_11] [i_11] [i_11];
                arr_64 [i_11] = ((/* implicit */signed char) (~(((unsigned int) ((short) (unsigned char)115)))));
            }
        } 
    } 
    var_27 = var_6;
}
