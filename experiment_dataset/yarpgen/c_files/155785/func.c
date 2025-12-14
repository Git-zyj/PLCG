/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155785
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
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1 - 2] [i_1 + 1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65090))))) ? (((/* implicit */int) ((var_12) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-24809)) != (((/* implicit */int) arr_2 [i_0]))))))))) : (var_11)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 2; i_4 < 15; i_4 += 3) 
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_0)) ? (arr_12 [i_1]) : (((/* implicit */unsigned long long int) var_16))))));
                            arr_14 [i_0] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_11 [i_1] [i_1] [(unsigned char)11] [i_1] [i_4] [i_2 - 2])) ? (((/* implicit */long long int) arr_10 [i_0] [i_1] [i_0] [i_2] [i_3] [i_1] [i_4 - 2])) : (2228647302344256720LL))) >> (((/* implicit */int) ((arr_8 [i_2] [i_2] [i_3] [i_4]) > (((/* implicit */unsigned long long int) arr_11 [i_4 - 2] [i_3] [i_0] [i_1] [i_0] [i_0])))))));
                            arr_15 [i_1] = ((/* implicit */short) (-(((((/* implicit */_Bool) 2737187460U)) ? (((/* implicit */int) arr_0 [i_0] [i_1 - 3])) : (((/* implicit */int) var_0))))));
                            arr_16 [i_0] [i_1] [i_2] [i_1] [i_0 - 1] [i_0] [i_3] = ((/* implicit */_Bool) ((int) arr_9 [i_0] [i_1] [i_2] [i_2] [i_4]));
                            arr_17 [i_0] [i_1 - 3] [i_1] [11LL] [i_4 + 1] [i_2 - 2] = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-20144)) + (2147483647))) << (((((/* implicit */int) (signed char)61)) - (61)))));
                        }
                        for (unsigned int i_5 = 3; i_5 < 15; i_5 += 2) 
                        {
                            arr_20 [i_0 + 1] [i_3] [i_1 + 1] [i_2 - 1] [8U] [(signed char)14] [(signed char)14] = ((/* implicit */short) (+(var_13)));
                            arr_21 [i_2] [i_1] [i_1] [i_3] [i_5] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_9 [i_3] [i_5] [i_2 - 1] [i_3] [i_3])))));
                            arr_22 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -2228647302344256721LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-20488))) : (-5735217157833020262LL))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) > (arr_1 [10] [i_1 - 1])))))));
                            arr_23 [i_0 + 1] [i_0] [i_2] [i_3] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) 1485868786)) >= (arr_12 [i_0]))))));
                            arr_24 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) arr_10 [(unsigned char)9] [i_1 - 1] [i_1] [i_0 + 2] [i_5] [i_2] [i_5 - 3]);
                        }
                        arr_25 [i_0] [i_1] [i_2 - 2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)61))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)20487))) : (0U)));
                        arr_26 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_10) >> (((arr_19 [i_0] [i_1] [i_0]) + (946547689)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0 + 2] [i_1]))))) : ((-(6559991460811513077LL)))));
                        arr_27 [i_0] [i_1 - 1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 3])) + (((/* implicit */int) arr_0 [i_1 - 3] [i_1 - 3]))));
                    }
                    arr_28 [i_1] [i_2] = ((/* implicit */unsigned short) (~(((var_8) - (((/* implicit */int) ((unsigned short) -6785268457574152613LL)))))));
                    arr_29 [i_0 + 2] [i_0 + 2] [i_2] &= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) arr_2 [i_2]))))) : (((/* implicit */int) ((signed char) arr_3 [i_1 - 1] [i_1] [i_1]))))), (((((/* implicit */int) (short)20488)) + (max((((/* implicit */int) (unsigned char)157)), (1485868767)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_10);
    var_18 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 0U)), (var_4)))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6610))))))), (((/* implicit */unsigned long long int) ((var_9) / (((((/* implicit */_Bool) 21ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-20488)))))))));
}
