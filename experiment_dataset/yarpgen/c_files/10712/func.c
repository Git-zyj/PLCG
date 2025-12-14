/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10712
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
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                for (unsigned int i_3 = 2; i_3 < 18; i_3 += 4) 
                {
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) -9223372036854775791LL);
                            arr_12 [i_4] [i_0] = ((/* implicit */unsigned char) var_2);
                            arr_13 [i_4] [i_3] [i_1] [i_1] [i_1] [i_3] [i_0 - 1] |= ((/* implicit */int) ((unsigned int) (unsigned char)255));
                        }
                    } 
                } 
            } 
            arr_14 [i_1] |= (+(((((/* implicit */_Bool) var_2)) ? (var_13) : (arr_2 [i_0 - 1] [i_1 - 1]))));
        }
        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
        {
            arr_17 [i_0 + 2] [i_5] |= var_1;
            arr_18 [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) max((((((33030144U) >= (4294967273U))) ? ((+(9223372036854775791LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((signed char) (~(((/* implicit */int) var_7))))))));
        }
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
        {
            arr_23 [i_6] [18U] [i_6] |= ((/* implicit */unsigned long long int) arr_16 [i_6] [i_6] [i_0 - 3]);
            /* LoopSeq 2 */
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                arr_27 [i_0] [i_7] [(signed char)14] |= ((/* implicit */unsigned long long int) (-(var_11)));
                arr_28 [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */short) arr_1 [i_0] [i_0]);
                arr_29 [i_0] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)8184)) <= (((/* implicit */int) (unsigned char)254))));
            }
            for (int i_8 = 3; i_8 < 19; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 21; i_9 += 4) 
                {
                    for (long long int i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        {
                            arr_40 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((int) (unsigned short)0))) | ((+(((511U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))))));
                            arr_41 [i_0 - 3] [i_6] [i_0 - 3] [i_0] [i_9] [i_9] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_7 [i_0]))) ? (((((/* implicit */int) (unsigned short)8184)) << (((var_3) - (3174727153U))))) : ((~(((/* implicit */int) (unsigned short)64))))));
                            arr_42 [i_10] [i_0] [i_8] [i_0] [14] = ((signed char) (+(9223372036854775800LL)));
                            arr_43 [i_0] [i_6] [i_0] [i_10] |= ((/* implicit */unsigned char) arr_4 [i_0] [i_6] [i_0]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    arr_46 [i_0] [i_6] [i_6] [i_6] [i_11] = ((/* implicit */long long int) ((unsigned char) (-(((((/* implicit */_Bool) 18446744073709551601ULL)) ? (9223372036854775807LL) : (var_8))))));
                    arr_47 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) 511U)))) | (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])))))));
                    arr_48 [i_0] [i_6] [i_11] [i_0] = ((/* implicit */signed char) (((-(511U))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_11] [i_0 + 2])))));
                    arr_49 [i_11] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_13);
                }
            }
            arr_50 [i_0] [(signed char)10] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775790LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0 + 1]))));
        }
        /* LoopNest 3 */
        for (unsigned char i_12 = 0; i_12 < 21; i_12 += 4) 
        {
            for (long long int i_13 = 1; i_13 < 20; i_13 += 4) 
            {
                for (unsigned long long int i_14 = 3; i_14 < 18; i_14 += 3) 
                {
                    {
                        arr_57 [i_0] [i_0] [i_12] [i_13] [i_13] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)25);
                        arr_58 [i_14] [i_12] [i_14] [i_14] [i_0] [i_0] = ((/* implicit */unsigned char) ((max((((long long int) (-9223372036854775807LL - 1LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)32)) && (((/* implicit */_Bool) var_3))))))) + (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (+(2ULL))))))));
                    }
                } 
            } 
        } 
        arr_59 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)34))));
    }
    var_15 = ((/* implicit */unsigned long long int) ((max((var_3), (((/* implicit */unsigned int) var_1)))) >> (((var_6) + (2589846585238440563LL)))));
    var_16 = var_1;
    var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65521)) << (0ULL)));
}
