/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119833
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_14 += ((/* implicit */unsigned short) max((max((((/* implicit */long long int) var_6)), (min((arr_3 [i_1]), (var_2))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) min((var_11), ((unsigned short)57632))))) > (((arr_3 [i_0 + 1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1] [(unsigned short)4]))))))))));
                var_15 = ((/* implicit */unsigned short) min((var_15), (var_6)));
                arr_6 [i_0 - 1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])))) ^ ((-(((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1]))))));
                arr_7 [i_0 - 1] = arr_4 [i_0];
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (min((min((var_8), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) var_0)))))))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_4 = 2; i_4 < 15; i_4 += 3) /* same iter space */
                {
                    arr_18 [i_2] [i_2] [i_2] [i_3] = arr_3 [i_2];
                    arr_19 [i_2] [i_3 - 1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65520)) ? (((((/* implicit */int) arr_14 [i_2] [i_3] [i_4 - 2])) | (((/* implicit */int) arr_15 [i_2] [i_3] [i_4 + 1])))) : ((-(((/* implicit */int) var_12))))));
                    arr_20 [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)225)) ? (((((/* implicit */_Bool) (unsigned short)8128)) ? (((/* implicit */int) arr_10 [i_2] [i_4 + 1])) : (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) (_Bool)1))))));
                    var_17 *= ((((/* implicit */int) arr_16 [i_4 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])) <= ((~(((/* implicit */int) (unsigned char)130)))));
                }
                for (unsigned short i_5 = 2; i_5 < 15; i_5 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 4; i_6 < 14; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            {
                                arr_30 [i_3] [i_3] [i_5] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_2] [i_5] [i_2] [i_7])) ? (((/* implicit */int) ((((/* implicit */int) var_4)) < (((((/* implicit */_Bool) arr_24 [i_2] [i_3 - 1] [(unsigned short)8] [i_7])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_9 [i_3] [(_Bool)1]))))))) : (((/* implicit */int) arr_8 [i_2] [i_2]))));
                                arr_31 [i_2] [i_2] [i_3] [i_6] [i_6 - 2] [i_7] = ((/* implicit */unsigned short) max((((((/* implicit */int) (unsigned char)225)) / (((/* implicit */int) arr_15 [i_6] [i_6 + 1] [(unsigned short)7])))), (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    arr_32 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) min((min((min((((/* implicit */long long int) (_Bool)0)), (arr_12 [i_2] [i_3] [(unsigned short)4]))), (((/* implicit */long long int) arr_0 [i_2] [i_3])))), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_5)), (arr_26 [i_3 - 1] [i_5 + 1] [i_5 + 1] [i_5]))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        {
                            arr_40 [i_2] [i_2] [i_2] [i_8] [i_2] &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_36 [i_3 - 1] [i_9])) : (((/* implicit */int) arr_36 [i_3 - 1] [i_8])))), ((~(((/* implicit */int) (unsigned short)0))))));
                            arr_41 [i_2] [i_3] [i_8] [(unsigned short)0] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_36 [i_9] [i_8]))));
                            var_18 |= ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)225))))), (((arr_11 [i_3 - 1] [i_3 - 1] [i_3 - 1]) - (arr_11 [i_3 - 1] [i_3 - 1] [i_3 - 1])))));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((unsigned short) (-(var_8))))));
                            arr_42 [i_2] [i_2] [i_2] [i_3] [i_8] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1])) | (((/* implicit */int) ((unsigned char) arr_21 [5LL] [i_3 - 1] [i_3 - 1] [i_3 - 1])))));
                        }
                    } 
                } 
                arr_43 [i_3] = ((/* implicit */_Bool) var_1);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 1 */
    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 1) 
    {
        var_21 &= ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) <= ((+(2678898931659238616LL))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)80)) - (60))))))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)44370)) >= (((/* implicit */int) arr_2 [i_10])))))));
        var_22 = ((unsigned short) min((min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)44376))), (((/* implicit */unsigned short) arr_36 [i_10] [i_10]))));
    }
}
