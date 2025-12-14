/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130238
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0]))))), (arr_1 [i_0] [i_2]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0]))))))))));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                            {
                                var_19 *= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1 - 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (short)17816)) : (((/* implicit */int) var_18))))) : (var_10)))));
                                var_20 *= ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_11 [i_0] [i_4] [i_2] [i_3] [i_4] [i_4])))) << (((/* implicit */int) min((arr_11 [i_0] [i_4] [i_2] [i_3] [i_3] [i_2]), (arr_11 [(short)14] [i_4] [14LL] [i_2] [i_3] [i_4]))))));
                            }
                            var_21 = ((/* implicit */_Bool) (-(((unsigned int) arr_14 [i_3] [i_3] [i_3] [i_0] [(short)15] [(short)9] [i_3]))));
                            var_22 = ((_Bool) ((((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])) * (((/* implicit */int) (_Bool)1)))) <= ((-(((/* implicit */int) var_0))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (var_12)));
                arr_15 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_5 [(_Bool)1] [i_1] [i_0]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        for (int i_6 = 2; i_6 < 9; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                {
                    var_24 += ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) ((var_5) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5])))))))));
                    /* LoopNest 2 */
                    for (short i_8 = 2; i_8 < 7; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 1; i_9 < 7; i_9 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) var_15)) / (((/* implicit */int) arr_24 [i_5] [i_8]))));
                                var_26 = ((/* implicit */short) (+((~(((/* implicit */int) arr_3 [i_6] [i_9]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        for (long long int i_11 = 0; i_11 < 10; i_11 += 1) 
                        {
                            {
                                arr_36 [i_5] [i_7] [i_11] = ((/* implicit */unsigned short) arr_22 [i_5]);
                                arr_37 [i_5] [i_6] [i_7] [i_10] [i_10] = ((/* implicit */unsigned short) ((short) min((((/* implicit */unsigned long long int) (~(arr_31 [i_5] [i_6] [i_7] [i_10] [i_11])))), (min((10830394996091893020ULL), (((/* implicit */unsigned long long int) var_14)))))));
                                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (unsigned short)3599))));
                                var_28 += ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)3590)) : (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) (unsigned short)3596)) ? (((/* implicit */int) (unsigned short)61936)) : (((/* implicit */int) arr_8 [i_5] [i_6] [(unsigned short)2] [i_10]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        var_29 = (((!((!(((/* implicit */_Bool) arr_10 [i_5] [i_6] [i_7] [7])))))) ? (((((/* implicit */unsigned long long int) var_2)) - (min((arr_13 [i_5] [i_7]), (((/* implicit */unsigned long long int) arr_3 [i_5] [16ULL])))))) : ((+(((((/* implicit */_Bool) arr_38 [i_5] [i_6] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))) : (arr_1 [i_7] [i_7]))))));
                        /* LoopSeq 2 */
                        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)3564)))))))) >= (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_28 [i_12] [i_6] [i_7] [i_6 - 1] [i_13]))))), (min((((/* implicit */unsigned short) arr_3 [i_6] [i_12])), ((unsigned short)3564))))))));
                            var_31 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)61958)) ? ((+(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) arr_14 [i_5] [i_5] [i_5] [i_7] [i_5] [i_5] [i_5])) ? (((/* implicit */int) (unsigned short)3590)) : (((/* implicit */int) arr_4 [i_7]))))))));
                            arr_44 [1] [7U] [i_7] [i_12 - 1] [i_13] = ((/* implicit */_Bool) arr_38 [i_5] [(unsigned short)7] [i_7] [i_12]);
                        }
                        /* vectorizable */
                        for (unsigned int i_14 = 0; i_14 < 10; i_14 += 2) 
                        {
                            var_32 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_45 [i_6] [i_6] [i_6 - 1] [i_7] [i_7]))));
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_7]))))) ? (((var_1) - (((/* implicit */int) arr_20 [i_7] [i_7])))) : (((/* implicit */int) arr_39 [i_5]))));
                            var_34 = ((/* implicit */unsigned short) arr_40 [i_6] [i_6 - 2] [i_7] [i_14]);
                            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) arr_39 [i_5])) ? (((/* implicit */int) arr_39 [i_5])) : (((/* implicit */int) (unsigned short)61957))));
                            var_36 -= ((/* implicit */short) ((long long int) ((((/* implicit */int) arr_26 [i_5] [i_6] [i_7] [i_12] [i_14] [i_12])) ^ (((/* implicit */int) (unsigned short)3564)))));
                        }
                        var_37 = ((_Bool) ((max((var_12), (((/* implicit */unsigned long long int) arr_29 [i_5] [i_5] [i_6] [i_7] [i_7] [i_12] [i_12])))) | (((((/* implicit */_Bool) (unsigned short)61937)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61945))) : (arr_1 [i_7] [i_7])))));
                        /* LoopSeq 1 */
                        for (int i_15 = 3; i_15 < 6; i_15 += 2) 
                        {
                            var_38 = ((/* implicit */unsigned char) max((arr_31 [i_5] [i_6] [i_7] [i_12] [i_15]), (((/* implicit */int) ((short) arr_40 [i_5] [i_6 - 2] [i_12 - 1] [i_15 + 1])))));
                            arr_51 [i_15] [i_7] [i_7] [i_7] [i_5] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)61958)) << (((/* implicit */int) arr_33 [i_5] [i_6] [i_7] [i_12] [i_15]))))) || (((((/* implicit */_Bool) arr_4 [i_7])) && (((/* implicit */_Bool) var_14)))))))));
                            var_39 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_32 [i_6])) ? (((/* implicit */int) arr_2 [i_7])) : (((/* implicit */int) (unsigned short)3608)))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_6 + 1] [i_6 - 2] [i_7] [i_12 - 1] [i_15 - 2]))) - (min((((/* implicit */unsigned long long int) (unsigned short)3591)), (arr_10 [i_5] [i_6] [i_7] [i_15])))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_40 = ((/* implicit */unsigned short) ((long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)3614)) + (((/* implicit */int) (unsigned short)3591))))), (((((/* implicit */unsigned long long int) var_1)) + (var_12))))));
    var_41 = ((((/* implicit */_Bool) var_16)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
}
