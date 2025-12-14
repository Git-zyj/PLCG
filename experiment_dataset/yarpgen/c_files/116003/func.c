/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116003
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
    for (int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned int i_3 = 4; i_3 < 20; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_3] [(unsigned char)16] [i_0] [20U] |= ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)53527)) - (((/* implicit */int) (unsigned char)21)))) >= ((-(((/* implicit */int) arr_6 [i_0 + 3] [18ULL]))))));
                                var_10 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (-6157842418459941255LL)))) * (((/* implicit */int) (unsigned char)149))));
                            }
                            for (int i_5 = 0; i_5 < 23; i_5 += 1) 
                            {
                                arr_18 [i_3] [8U] [i_3] [i_3] [i_3 - 3] [i_3] = ((((((/* implicit */_Bool) 2593686380U)) ? (6917529027641081856LL) : (((/* implicit */long long int) arr_8 [i_1 - 2] [i_1 - 2] [8ULL] [i_3])))) | (((/* implicit */long long int) 1241018406U)));
                                var_11 = var_9;
                                var_12 = ((/* implicit */int) 4LL);
                                var_13 = ((/* implicit */unsigned char) max((3053948890U), ((+(0U)))));
                            }
                            /* vectorizable */
                            for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) 
                            {
                                var_14 = ((/* implicit */unsigned int) max((var_14), (((((/* implicit */_Bool) arr_20 [i_2 - 1] [i_2] [i_3 - 2] [i_3] [i_3 + 1])) ? (1701280915U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)70)))))));
                                var_15 = ((/* implicit */signed char) arr_16 [i_0] [i_0] [i_0] [i_0]);
                            }
                            var_16 *= (~(min((((1241018406U) << (((-1LL) + (4LL))))), ((+(3053948902U))))));
                            var_17 = ((/* implicit */unsigned int) min((min((arr_19 [i_0 - 2] [i_0 + 2] [(unsigned short)21] [i_0 + 2] [(_Bool)1] [i_0] [i_0]), (max((((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_3 [i_0 - 3] [i_0 - 3]))))), (((/* implicit */unsigned long long int) arr_9 [i_3 + 2] [i_2 + 1] [1U] [i_1 - 2] [i_0 + 3]))));
                            arr_22 [12ULL] [i_0 - 1] [i_0] [i_0 - 1] [17ULL] [i_3] = ((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) 2593686380U)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    arr_26 [11ULL] [i_0] [18U] [i_7] &= ((/* implicit */_Bool) ((long long int) 0U));
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 4; i_8 < 20; i_8 += 4) 
                    {
                        arr_29 [i_0 - 2] [i_1] [i_7] [i_7] = ((/* implicit */unsigned short) 10LL);
                        arr_30 [i_0] [i_1 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4294967295U))));
                        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) 1241018383U)))));
                        arr_31 [i_0 - 1] [i_0 - 1] [i_7] [i_8 - 2] = ((/* implicit */unsigned int) ((1236434827) + (((/* implicit */int) arr_27 [(_Bool)1] [(_Bool)1] [i_8 + 1] [i_8]))));
                        var_19 = ((/* implicit */unsigned char) arr_9 [i_0 - 1] [i_1 + 1] [i_7] [i_8 - 3] [i_8]);
                    }
                    for (unsigned int i_9 = 1; i_9 < 21; i_9 += 1) 
                    {
                        var_20 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 0ULL)) ? (67108863LL) : (((/* implicit */long long int) arr_11 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))) - (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1 + 1] [i_9 - 1])))));
                        var_21 = ((/* implicit */unsigned long long int) (unsigned char)237);
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -67108851LL)) ? (67108831LL) : (((/* implicit */long long int) 3053948913U))));
                        var_23 -= ((/* implicit */unsigned char) (+(9223372036854775804LL)));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) 1701280916U))));
                    }
                }
                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_3))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) min(((~(max((((/* implicit */unsigned long long int) (unsigned char)218)), (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) 2835638002U)))))))))));
    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) (signed char)(-127 - 1)))))) : (((/* implicit */int) (unsigned char)255)))) >> (min((((/* implicit */unsigned long long int) (unsigned short)9)), (18446744073709551615ULL))))))));
}
