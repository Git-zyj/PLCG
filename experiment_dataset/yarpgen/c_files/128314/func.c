/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128314
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
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) var_5))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 13; i_2 += 3) 
                {
                    arr_9 [i_1] [i_0] [i_1] |= ((/* implicit */int) var_3);
                    arr_10 [i_0] [i_1] [(_Bool)1] [i_1 - 1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1] [8LL])) ? (((/* implicit */int) arr_3 [i_2 + 4] [i_1 - 3] [i_0])) : (((/* implicit */int) arr_3 [i_2 + 4] [i_1 + 1] [i_0])))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (signed char)87)) ? (arr_4 [i_2] [i_1]) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 321047191)) ? (arr_12 [i_1] [i_1]) : (arr_12 [i_1] [i_2]))))))) ? (((long long int) max((((/* implicit */unsigned long long int) 384U)), (var_3)))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_8 [i_1] [i_2 - 1]), (var_5))))))))));
                        arr_13 [i_0] [i_1 - 2] [(unsigned short)15] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */_Bool) max(((((+(((/* implicit */int) (signed char)3)))) * (arr_1 [i_0]))), ((+(((/* implicit */int) var_10))))))) : (((/* implicit */_Bool) max(((((+(((/* implicit */int) (signed char)3)))) / (arr_1 [i_0]))), ((+(((/* implicit */int) var_10)))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        var_13 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)23081)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_15 [i_4] [i_1] [i_0]))) | (((/* implicit */unsigned long long int) ((long long int) arr_7 [i_0] [i_1] [i_2 + 2])))));
                        var_14 = ((/* implicit */_Bool) (+(arr_11 [i_1 - 1] [i_1 + 1] [i_2 + 3] [i_0])));
                    }
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        arr_20 [i_0] [(short)0] [i_1 + 1] [(short)0] [i_0] [i_0] = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) (~(arr_11 [i_0] [6] [i_2 - 1] [i_0])))))));
                        var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_1 - 4] [i_2 + 2] [i_2 + 2]))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (2147483647)))), (max((((/* implicit */unsigned long long int) 625772647)), (15094096301179290317ULL)))))));
                        var_16 = ((/* implicit */int) 3352647772530261298ULL);
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) ((_Bool) var_6))) >> ((((~(var_2))) - (166944927))))))))));
                        arr_21 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65532))) : (4283309789526900086LL))), (((/* implicit */long long int) max((arr_5 [i_0] [i_2] [i_1] [i_0]), (arr_12 [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) arr_17 [i_2] [i_2 - 2] [i_2 + 3])) ? (((/* implicit */int) arr_17 [(_Bool)1] [i_2 + 3] [i_2 - 1])) : (((/* implicit */int) arr_17 [i_2] [i_2 - 1] [i_2 + 1])))) : (((((/* implicit */int) var_6)) / (arr_14 [i_5] [i_0] [i_0] [i_0] [i_0])))));
                    }
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            {
                                arr_27 [i_0] [(unsigned short)10] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-102))) : (arr_4 [i_0] [i_0])));
                                arr_28 [i_0] [i_1] [i_2] [i_6] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_17 [i_7] [i_1] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-1)) >= (((/* implicit */int) arr_3 [i_6] [i_2] [i_1 - 4])))))) : (min((((/* implicit */unsigned long long int) (~(-581201821)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)109))) : (arr_11 [i_0] [i_0] [i_0] [i_0])))))));
                                var_18 |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) (unsigned short)3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0))))) : (1224616214U)))), (arr_11 [14U] [i_1] [i_1] [i_1])));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 17; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) 
                        {
                            {
                                arr_36 [i_0] [i_9] [i_0] = ((/* implicit */unsigned short) -1560813771);
                                arr_37 [i_8] [(_Bool)1] [i_8] [(_Bool)1] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_4)) - (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_8))))))));
                                arr_38 [i_9] |= ((((/* implicit */_Bool) (-(((var_3) + (18446744073709551605ULL)))))) ? (min((max((((/* implicit */int) arr_18 [11])), (1892625443))), (((/* implicit */int) (short)-1801)))) : (((int) (-(((/* implicit */int) arr_26 [10U] [i_1] [i_8] [i_1] [i_1] [10U]))))));
                                var_19 |= ((((/* implicit */_Bool) (~(arr_23 [i_0] [i_10] [i_8] [i_1 + 1] [12U] [i_10])))) ? (((/* implicit */unsigned long long int) ((1294777995786066609LL) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_1] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_34 [i_1] [i_1])))))))) : (((((/* implicit */_Bool) arr_30 [i_1] [(unsigned char)16] [i_1 - 2] [i_9])) ? ((~(arr_4 [i_9] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_6)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_7);
}
