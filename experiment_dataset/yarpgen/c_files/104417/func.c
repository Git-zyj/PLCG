/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104417
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
    var_17 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) max(((unsigned char)8), ((unsigned char)6))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (unsigned char)132)) / (((/* implicit */int) var_1)))))) ? (((/* implicit */long long int) ((var_7) / (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_1] [i_1] [i_0]))))))) : ((-(arr_0 [i_0] [i_0])))));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) -4580882341305641378LL)) && (((/* implicit */_Bool) (short)-22098)))))));
                var_18 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)116)) >> (((((/* implicit */int) (unsigned char)116)) - (114)))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0] [i_1 - 1])))))));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 1; i_4 < 14; i_4 += 4) 
                            {
                                arr_15 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) max((((/* implicit */long long int) arr_4 [i_0])), (((arr_8 [i_0] [i_0] [i_3] [i_4]) | (((/* implicit */long long int) var_8)))))));
                                arr_16 [i_0] [i_1] [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */int) min((((long long int) var_11)), (var_4)));
                                var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)133)), ((short)-22110)))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0 - 2] [i_0] [i_0 - 3] [i_0 + 1])) ? (var_0) : (((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_3])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_2])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_4 - 1])) : (arr_12 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 3] [i_4]))))));
                            }
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (!(max((((var_13) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 2] [i_1] [i_3]))))), (arr_14 [i_3] [i_2] [i_2] [i_1] [i_0]))))))));
                            arr_17 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) arr_1 [i_3] [i_0]);
                            var_22 = ((/* implicit */long long int) ((min((var_13), (((/* implicit */unsigned long long int) var_4)))) < (((/* implicit */unsigned long long int) ((arr_14 [i_0] [i_1 - 1] [i_2 + 3] [i_0 - 3] [i_0]) ? (((/* implicit */int) arr_14 [i_0] [i_1 + 1] [i_2 + 1] [i_0 - 1] [i_3])) : (((/* implicit */int) arr_14 [i_0] [i_1 + 1] [i_2 + 1] [i_0 - 2] [i_3])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            {
                var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_5]))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65472))))), (max((arr_22 [i_5]), (((/* implicit */long long int) var_6)))))))));
                var_24 = min((12ULL), (((/* implicit */unsigned long long int) (short)22098)));
                var_25 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((short) 1333218717238983518ULL)))) <= (max((arr_22 [i_5]), (arr_22 [i_6])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 24; i_7 += 4) 
    {
        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            {
                var_26 = var_13;
                var_27 *= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_26 [i_8] [i_7])))) || (((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) arr_25 [i_7])))))));
                var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_25 [i_7]) ? (arr_27 [i_8] [i_7]) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((arr_28 [i_7] [i_8] [i_8]) | (var_9)))) : ((~(var_2)))))) ? (((max((((/* implicit */int) (unsigned char)132)), (arr_28 [i_8] [i_8] [i_7]))) & (((/* implicit */int) ((unsigned char) var_15))))) : (((/* implicit */int) ((short) ((unsigned long long int) arr_28 [i_7] [i_8] [i_7])))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    var_29 -= ((/* implicit */unsigned long long int) var_5);
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 2; i_10 < 23; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 4) 
                        {
                            {
                                arr_36 [i_7] [i_8] [i_9] [i_10] [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_30 [i_7] [i_11] [i_10 - 2] [i_10]))));
                                var_30 = ((((var_4) / (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_8]))))) / (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)54614))))));
                                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_5)) ? (arr_28 [i_7] [i_7] [i_7]) : (((/* implicit */int) arr_24 [i_11])))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))));
                                var_32 = ((/* implicit */int) min((var_32), (var_7)));
                            }
                        } 
                    } 
                    arr_37 [i_7] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)255))));
                    var_33 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_33 [i_7] [i_8] [i_9])) <= (((unsigned long long int) var_10))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 4) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        {
                            arr_43 [i_7] [i_7] [i_7] = ((/* implicit */int) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_12])) ? (arr_38 [i_8]) : (((/* implicit */int) (unsigned char)14))))), (max((12ULL), (((/* implicit */unsigned long long int) 2147483647))))))));
                            var_34 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_7]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)114))) / (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_7] [i_8] [i_12] [i_13]))))) << (((((/* implicit */int) min((arr_34 [i_7] [i_7] [i_7] [i_13] [i_7] [i_8] [i_13]), (arr_34 [i_7] [i_8] [i_13] [i_13] [i_7] [i_7] [i_7])))) - (119)))));
                            arr_44 [i_7] [i_8] [i_12] [i_12] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) arr_39 [i_8] [i_8] [i_8])) & (arr_27 [i_7] [i_8])));
                            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) arr_33 [i_8] [i_8] [i_8]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_36 = ((/* implicit */short) max(((+((-(var_12))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_14)))))));
}
