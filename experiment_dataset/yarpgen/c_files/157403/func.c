/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157403
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
    var_10 = ((/* implicit */unsigned long long int) ((min((min((((/* implicit */unsigned long long int) var_9)), (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_8)) - (17494)))))))) == (((/* implicit */unsigned long long int) var_4))));
    var_11 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))));
    var_12 = ((/* implicit */_Bool) ((signed char) var_7));
    var_13 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))), (var_0))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */unsigned char) var_7)), (var_9)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */short) max((arr_0 [i_1]), (((/* implicit */long long int) min((var_3), (((/* implicit */signed char) (_Bool)1)))))));
                                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((long long int) (-(((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */signed char) var_7)), (arr_4 [i_1] [i_0] [i_0])))) ? (((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_0] [i_2] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)14155))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)14155)))))));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (min((((/* implicit */int) var_2)), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_9 [i_0])))))) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        arr_16 [i_5] [i_1] = arr_3 [i_5] [i_5];
                        var_17 = ((/* implicit */unsigned short) ((-4564021288966154604LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14173)))));
                    }
                    for (signed char i_6 = 1; i_6 < 10; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) (unsigned short)65141);
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            arr_23 [i_0] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_7))))));
                            arr_24 [i_0] [2] = ((/* implicit */unsigned int) var_5);
                            arr_25 [i_0] [i_1] [i_2] [i_6] [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0] [i_0]);
                            arr_26 [i_1] [i_1] [i_2] [1LL] [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
                            arr_27 [i_0] [i_1] [i_0] [i_6 - 1] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3627302327U)) ? (((/* implicit */int) (unsigned short)29)) : (((/* implicit */int) (signed char)18))));
                        }
                        for (long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            arr_30 [i_0] [i_1] [i_2] [i_8] [i_1] [4ULL] = (+(arr_3 [i_1] [i_6 + 2]));
                            arr_31 [9ULL] [9ULL] [i_8] [i_6] [(signed char)0] [i_8] = ((/* implicit */unsigned short) (_Bool)0);
                        }
                        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 2) 
                        {
                            var_19 = ((/* implicit */signed char) arr_9 [i_0]);
                            var_20 *= ((/* implicit */unsigned short) arr_21 [i_0]);
                            var_21 = ((/* implicit */unsigned int) min(((unsigned short)9999), (((/* implicit */unsigned short) arr_4 [i_9] [i_2] [i_1]))));
                            var_22 = ((/* implicit */_Bool) (unsigned short)9973);
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                        {
                            arr_38 [8ULL] [8ULL] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_14 [i_2] [i_6] [i_2] [i_1] [i_0]);
                            arr_39 [i_0] [(unsigned short)0] [i_0] [i_6] [i_6] = ((/* implicit */unsigned short) var_5);
                            var_23 |= ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) arr_36 [i_6 - 1] [i_6 + 2] [i_6 + 1] [i_6 + 1] [i_10] [i_10])), (var_1))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_10] [i_10])))));
                            var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0])))))) < (((unsigned int) arr_11 [i_0] [i_1] [i_2] [i_0] [i_10] [i_10])))))));
                        }
                        var_25 = ((/* implicit */unsigned long long int) ((-8575645003668493407LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28334)))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) arr_19 [i_11] [i_2] [i_1]);
                        arr_43 [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_11] [(unsigned char)8] [i_0]))));
                        var_27 = ((/* implicit */signed char) arr_41 [i_0] [6LL] [i_2] [i_11] [(signed char)1] [i_11]);
                        var_28 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_9)) ? (4564021288966154605LL) : (((/* implicit */long long int) arr_12 [i_1] [i_2] [i_1] [i_11] [i_11])))));
                    }
                }
            } 
        } 
    } 
}
