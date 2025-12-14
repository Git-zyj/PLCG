/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100205
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
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) arr_2 [i_0] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_4] [i_0] [i_0] |= ((/* implicit */signed char) ((unsigned char) min(((+(18070184360680195074ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_7))))))));
                                arr_17 [i_1] [i_1] [i_1] [i_3] [i_4] [i_1] [i_1] = ((/* implicit */_Bool) arr_10 [i_4] [i_3]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 4; i_5 < 16; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                arr_23 [i_6] [i_5] [i_2] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)54239);
                                arr_24 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_1] [i_0] [i_5] [i_6])) <= (((/* implicit */int) (unsigned short)11297))));
                                var_19 = ((/* implicit */signed char) (~(((/* implicit */int) min((((/* implicit */short) arr_15 [i_6] [i_1] [i_5] [i_1] [i_5 - 1])), (arr_7 [i_6] [i_6] [i_5 - 3] [i_5 - 4]))))));
                                arr_25 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)56)) ^ (((/* implicit */int) arr_12 [i_1] [i_1] [i_2] [i_1] [i_2] [i_1] [i_1]))));
                            }
                        } 
                    } 
                    arr_26 [i_0] [i_1] [i_2] = ((/* implicit */int) (((+(390811485U))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_2])) && (((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_0] [i_1])) << (((var_16) - (1239280617))))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 3; i_7 < 24; i_7 += 3) 
    {
        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            {
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) max((660662458U), (((/* implicit */unsigned int) var_14))))), (9122947365830425965ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_27 [i_7])), (min((var_9), (((/* implicit */unsigned int) var_15))))))))))));
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) arr_27 [i_7 - 1])), (var_6))), (((/* implicit */unsigned long long int) ((var_4) >= (((/* implicit */int) arr_27 [i_7 + 1]))))))))));
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((arr_31 [i_7] [i_8] [i_8]) >> (((/* implicit */int) arr_28 [i_8])))))));
                            var_23 = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_9] [i_8]))) / (12247100141717475314ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_36 [i_7] [i_8])), (((((/* implicit */int) (signed char)109)) | (((/* implicit */int) (unsigned short)54239)))))))));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_36 [i_7] [i_7])) - (var_4))))) - (((((/* implicit */int) var_15)) | (((/* implicit */int) max(((unsigned short)29972), (((/* implicit */unsigned short) (short)-24002))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        for (unsigned char i_12 = 0; i_12 < 23; i_12 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 23; i_13 += 4) 
                {
                    for (signed char i_14 = 0; i_14 < 23; i_14 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) arr_31 [i_12] [i_13] [i_13]);
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_37 [i_12] [i_12] [i_12])) ? (arr_50 [i_11] [i_11] [i_13] [i_14]) : (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))))))))));
                            arr_51 [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_42 [i_12]) ? (arr_33 [i_11] [i_12] [i_13] [i_11]) : ((~(var_9)))))) ? (((/* implicit */int) arr_43 [i_11] [i_11])) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_6)))))))));
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (+(((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)987))) <= (arr_31 [i_11] [i_13] [i_11]))), (((((/* implicit */_Bool) 6199643931992076303ULL)) && ((_Bool)0)))))))))));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))) < (var_10)));
                        }
                    } 
                } 
                var_29 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) arr_41 [i_11])), (((arr_44 [i_12]) ? (arr_31 [i_12] [i_12] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29690))))))) | (((/* implicit */unsigned int) ((((((/* implicit */int) arr_34 [i_11] [i_12] [i_11] [i_12])) >> (((((/* implicit */int) (unsigned short)54239)) - (54237))))) / (((/* implicit */int) var_12)))))));
                arr_52 [i_11] [i_11] = ((/* implicit */unsigned short) var_15);
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 23; i_15 += 4) 
                {
                    for (short i_16 = 0; i_16 < 23; i_16 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */short) ((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 368317316U)) ? (arr_33 [i_11] [i_12] [i_15] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11297))))) : (arr_58 [i_11] [i_15]))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_39 [i_11] [i_11]), (((/* implicit */long long int) (unsigned short)35865)))))))))));
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned short)54220)))), (((((/* implicit */int) (_Bool)1)) < (var_4)))))) >> (((((/* implicit */int) min((arr_32 [i_12] [i_15]), (var_13)))) - (81)))));
                            arr_59 [i_11] [i_11] |= ((/* implicit */long long int) (unsigned short)51308);
                        }
                    } 
                } 
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 16; i_17 += 1) 
    {
        for (unsigned short i_18 = 0; i_18 < 16; i_18 += 2) 
        {
            for (unsigned char i_19 = 0; i_19 < 16; i_19 += 3) 
            {
                {
                    arr_67 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_43 [i_17] [i_19]))))) || ((!(((/* implicit */_Bool) arr_63 [i_17] [i_18]))))));
                    var_33 |= ((/* implicit */unsigned int) (-(((((((/* implicit */_Bool) 12247100141717475314ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-29127)))) - (((/* implicit */int) arr_20 [i_18] [i_19] [i_17] [i_18]))))));
                    arr_68 [i_17] [i_17] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_57 [i_17] [i_17] [i_18] [i_18] [i_19] [i_19]))))) ^ (((((/* implicit */_Bool) max((((/* implicit */short) var_12)), ((short)24001)))) ? (((unsigned int) arr_48 [i_17] [i_17] [i_17] [i_17])) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                    var_34 |= ((/* implicit */unsigned char) (((!(((((/* implicit */int) (unsigned short)54239)) >= (((/* implicit */int) (short)23989)))))) || (((/* implicit */_Bool) ((unsigned long long int) var_15)))));
                }
            } 
        } 
    } 
}
