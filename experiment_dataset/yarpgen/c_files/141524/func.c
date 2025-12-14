/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141524
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))))), (((arr_0 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_9 [i_2] [i_1] [i_0])) : (((/* implicit */int) (signed char)4)))) >= (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_2 - 1])) <= (((/* implicit */int) arr_9 [i_2 + 1] [i_1] [i_0])))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        arr_12 [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_17), (((/* implicit */unsigned char) var_8)))))) : (min((140737488093184ULL), (((/* implicit */unsigned long long int) var_4)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_19 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)9371))) < (4294967295U)));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */long long int) var_1);
                        var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) 4294967287U))) <= (min((arr_4 [i_2 + 1] [i_2 - 1] [i_2 - 1]), (arr_4 [i_0] [i_2 - 1] [i_2 - 1])))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_18 [i_5] [i_5] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) max((min((var_11), (((/* implicit */unsigned long long int) arr_0 [i_1])))), (((/* implicit */unsigned long long int) ((short) arr_14 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2] [6LL] [i_2 - 1])))));
                        var_22 = ((/* implicit */short) max((var_22), (var_14)));
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) var_6);
                            var_23 = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) >> (((/* implicit */int) var_9))))) ^ (((3047908412U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 3432565478824979873LL)) ? (((/* implicit */int) (short)25151)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_7 [i_5] [i_2 - 1] [i_0])))))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (var_9)));
                            var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_6) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_1] [i_1] [i_6] [i_5]))))))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 2; i_7 < 20; i_7 += 2) 
                        {
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */int) var_12)) | (((/* implicit */int) min((var_10), (((/* implicit */short) (_Bool)1))))))))));
                            arr_25 [i_7] [i_5] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)56))) - (((((/* implicit */_Bool) 18446744073709551596ULL)) ? (var_3) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)11041)) - (((/* implicit */int) (unsigned char)255))));
                            var_28 = ((/* implicit */_Bool) min((var_28), (arr_10 [i_0] [i_2 + 1] [i_5] [i_8])));
                            var_29 ^= ((/* implicit */short) (((+(var_4))) < (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_2 - 1])) * (((/* implicit */int) arr_9 [i_5] [i_2 - 1] [i_0])))))));
                        }
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_9 = 0; i_9 < 24; i_9 += 2) 
        {
            /* LoopNest 2 */
            for (short i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                for (short i_11 = 1; i_11 < 23; i_11 += 1) 
                {
                    {
                        var_30 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_8)))) + (18446744073709551614ULL)))));
                        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (((+(arr_3 [i_0] [i_9] [i_10]))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11 + 1] [i_11] [i_11 + 1] [i_11 - 1])))))), (var_6))))));
                        var_32 ^= ((/* implicit */unsigned int) var_9);
                        /* LoopSeq 2 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_43 [i_0] [i_12] [i_0] [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_11] [i_12] [i_11 + 1] [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11 - 1]))) + (var_3))), (((/* implicit */unsigned long long int) var_12))));
                            var_33 = ((/* implicit */_Bool) ((((unsigned long long int) (_Bool)1)) | (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)22943)) : (((/* implicit */int) (_Bool)1))))))));
                        }
                        for (short i_13 = 0; i_13 < 24; i_13 += 4) 
                        {
                            arr_46 [i_0] [i_9] [i_10] [i_10] [i_11 - 1] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((4294967295U), (((/* implicit */unsigned int) arr_20 [i_0] [i_9] [i_10] [i_11] [i_13])))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)121)), (arr_8 [i_0]))))))) ? (min(((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_22 [i_0] [i_10] [i_11] [i_13])))), (((/* implicit */int) ((signed char) arr_31 [i_11] [i_13]))))) : (((((/* implicit */_Bool) arr_35 [i_9] [i_9] [i_11 - 1] [i_11])) ? (((/* implicit */int) arr_35 [i_0] [i_9] [i_11 - 1] [i_11 + 1])) : (((/* implicit */int) arr_26 [i_0] [i_9] [i_11 - 1] [i_13]))))));
                            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) - (((/* implicit */int) (signed char)60)))))));
                        }
                    }
                } 
            } 
            arr_47 [i_0] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) max((var_14), (var_5))))) == (((/* implicit */int) arr_26 [i_0] [i_0] [i_9] [i_9]))));
            arr_48 [i_0] [i_9] [i_9] = ((/* implicit */long long int) (~((~(arr_14 [i_0] [i_0] [i_0] [i_0] [i_9] [i_9])))));
        }
    }
    /* LoopSeq 1 */
    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
        {
            for (signed char i_16 = 3; i_16 < 24; i_16 += 3) 
            {
                {
                    arr_57 [i_15 - 1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) max((arr_55 [i_14 + 1] [i_15] [i_16 + 1] [i_16 + 1]), (((/* implicit */short) var_17))))), (max((((/* implicit */int) ((signed char) var_15))), ((~(((/* implicit */int) arr_52 [i_14 + 1] [i_14 + 1]))))))));
                    var_35 = ((/* implicit */signed char) var_10);
                }
            } 
        } 
        arr_58 [i_14] = ((/* implicit */unsigned long long int) arr_55 [i_14 + 1] [i_14] [i_14 + 1] [i_14 + 1]);
    }
}
