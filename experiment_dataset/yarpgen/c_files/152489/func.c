/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152489
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
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1 + 1] = ((/* implicit */short) ((((/* implicit */int) (!(((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_8))))))) | ((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (211565834U))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */_Bool) (+(((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_15 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(var_3)))) > (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) (unsigned char)85)))))));
                                var_21 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) var_4)) && ((_Bool)1)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 12; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) (+(((((/* implicit */int) (signed char)-60)) - (((/* implicit */int) (unsigned char)21))))));
                                arr_22 [i_0] [(short)11] [i_2] [i_5] [i_1] = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_17))))));
                                var_23 &= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) != (arr_10 [i_0] [i_1] [i_1] [i_5]))))));
                                arr_23 [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) == (((/* implicit */int) arr_20 [(short)8] [i_1] [i_2]))))) < (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [(signed char)7] [(short)8] [i_6])) || (((/* implicit */_Bool) (unsigned short)1549)))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((-3311284644409626968LL) + (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
                    var_25 = ((/* implicit */unsigned char) (((~(var_17))) <= (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))));
                }
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 13; i_7 += 3) /* same iter space */
                {
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [(unsigned short)0])) + (((/* implicit */int) var_1))))) + (((((/* implicit */unsigned int) arr_24 [0U] [(unsigned short)0])) - (arr_21 [i_0] [i_0] [i_1] [i_7] [i_7] [i_7] [i_7]))))))));
                    arr_26 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 2101181598U))))));
                    arr_27 [i_1 - 3] [i_1] = ((/* implicit */unsigned char) (~((-(arr_21 [i_0] [i_0] [i_0] [2U] [i_0] [i_0] [i_0])))));
                    var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((908581852U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-13902))))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)2)) - (var_14)))))))));
                }
                for (signed char i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (~(((((((/* implicit */int) (signed char)101)) | (((/* implicit */int) (_Bool)0)))) & (((((/* implicit */int) (unsigned short)18214)) >> (((8412089497917298133LL) - (8412089497917298118LL))))))))))));
                    arr_30 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)147)) || (((/* implicit */_Bool) (unsigned char)5))))))))));
                    var_29 += ((/* implicit */unsigned char) (((-((-(286652979U))))) + (((/* implicit */unsigned int) ((((arr_24 [i_0] [i_0]) + (((/* implicit */int) arr_13 [i_0] [(short)6] [(unsigned char)9] [(unsigned char)11] [i_1 + 1] [i_8])))) + ((+(((/* implicit */int) (_Bool)0)))))))));
                    var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((((/* implicit */int) arr_5 [i_1])) - (var_14))) - (((((/* implicit */int) arr_5 [i_0])) + (((/* implicit */int) (unsigned char)220))))))) == (((((((/* implicit */long long int) ((/* implicit */int) var_2))) & (-304350901436033624LL))) & (((/* implicit */long long int) (~(((/* implicit */int) var_18))))))))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_9 = 0; i_9 < 22; i_9 += 3) 
    {
        for (short i_10 = 0; i_10 < 22; i_10 += 4) 
        {
            {
                var_31 = ((/* implicit */long long int) ((((((((/* implicit */int) var_7)) << (((arr_34 [i_10]) - (2417490503U))))) >> (((((((/* implicit */int) arr_32 [i_9])) | (((/* implicit */int) arr_32 [i_9])))) - (129))))) <= (((/* implicit */int) (!((!(((/* implicit */_Bool) 2057685099U)))))))));
                var_32 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((((/* implicit */_Bool) 2342474260U)) || (((/* implicit */_Bool) arr_33 [i_9] [i_10] [i_10])))) && ((!(((/* implicit */_Bool) var_6)))))))));
                arr_35 [(unsigned char)0] [i_9] [i_10] = ((/* implicit */_Bool) (~(((((((/* implicit */int) (signed char)-96)) - (((/* implicit */int) (short)-13667)))) + (((((/* implicit */int) var_8)) + (((/* implicit */int) var_10))))))));
            }
        } 
    } 
}
