/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106342
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
    for (int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] [i_3 + 1] [i_2] [i_3 + 1] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) ((min((arr_2 [i_4]), (((/* implicit */long long int) (short)5975)))) <= (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0])))))), (-7871116685842098888LL)));
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_4 - 2] [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 5988686098764235258LL))))))) : (((arr_7 [i_2] [i_2] [i_3 - 1] [i_3 - 1]) >> (((arr_7 [i_3] [i_3] [i_3] [i_3 + 1]) - (772184871U)))))));
                                var_16 ^= ((/* implicit */short) arr_2 [i_4]);
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((arr_12 [i_1] [i_0] [i_2] [i_1]), (((/* implicit */int) (_Bool)1))));
                    var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) var_5)), (arr_2 [i_0]))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -5988686098764235258LL)) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2]))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) 870409540U)))), ((_Bool)1))))) : ((((-(arr_8 [i_0] [i_0 - 1] [i_0 - 3] [i_1] [i_2] [i_2]))) + (max((((/* implicit */unsigned long long int) arr_1 [i_2])), (arr_0 [i_2] [i_2])))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (5988686098764235258LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            {
                arr_22 [i_5] = ((/* implicit */signed char) ((unsigned short) ((unsigned short) arr_21 [i_5] [i_5] [i_5])));
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    for (int i_8 = 1; i_8 < 14; i_8 += 4) 
                    {
                        {
                            arr_28 [i_6] [i_6] [10] [i_8 + 1] [i_5] [i_5] &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)32)) >= (((/* implicit */int) (signed char)32))));
                            arr_29 [i_5] [i_6] [i_8] [i_8] = max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) 5988686098764235258LL)) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */int) arr_27 [(_Bool)1] [(_Bool)1] [i_7] [i_8] [(_Bool)1] [i_7])) & (((/* implicit */int) (short)5975)))))));
                            var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_8 + 2] [i_8 + 1] [i_8])) ? (((/* implicit */int) arr_27 [i_8] [i_7] [i_7] [i_7] [(short)14] [i_5])) : (((/* implicit */int) ((short) arr_20 [i_7] [i_6] [i_5])))));
                            var_20 = ((/* implicit */short) arr_27 [i_8 + 2] [i_8] [i_8 + 1] [i_8 + 2] [i_8 + 1] [i_8 - 1]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 2; i_10 < 15; i_10 += 2) 
                    {
                        for (signed char i_11 = 0; i_11 < 16; i_11 += 4) 
                        {
                            {
                                arr_41 [i_5] = ((/* implicit */int) (short)169);
                                arr_42 [i_5] [i_6] [i_5] [i_10 - 2] [i_10] [i_11] [i_10] = ((/* implicit */short) var_13);
                                var_21 = ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_5] [i_6] [i_9] [i_10] [i_6]))) ^ (3424557756U))), (((/* implicit */unsigned int) arr_18 [i_5] [i_5] [i_5]))))) ? (((/* implicit */int) arr_27 [i_5] [i_10] [i_9] [i_10] [i_10 - 1] [i_10])) : (((/* implicit */int) (signed char)32)));
                                var_22 += ((/* implicit */int) ((((/* implicit */int) arr_40 [i_10 + 1] [i_10 - 2] [(short)5] [i_10] [i_10] [i_10])) > (((/* implicit */int) ((unsigned char) arr_40 [i_10 + 1] [i_10 - 2] [i_5] [i_9] [i_5] [i_5])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = var_13;
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 20; i_12 += 3) 
    {
        for (signed char i_13 = 3; i_13 < 17; i_13 += 1) 
        {
            {
                arr_47 [i_12] = ((/* implicit */short) ((arr_43 [i_12] [i_12]) == (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) -1293626663))))) == (((((/* implicit */_Bool) 1443150929)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-33)))))))));
                /* LoopNest 3 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned char i_15 = 1; i_15 < 17; i_15 += 4) 
                    {
                        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                        {
                            {
                                var_24 |= ((/* implicit */_Bool) ((short) min((max((arr_53 [i_12] [i_12] [(unsigned char)1] [i_12] [i_12]), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((arr_50 [i_13] [(short)16] [i_16]) ^ (((/* implicit */int) arr_56 [i_12] [i_14] [i_14] [i_15] [i_16]))))))));
                                var_25 = ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_52 [i_16] [i_16] [i_16] [i_16 - 1] [i_16])) : (arr_53 [i_16] [i_16] [i_16] [i_16 - 1] [i_15]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)2455), ((short)-27388))))));
                                arr_57 [i_12] [i_13] [i_13] [i_14] [i_14] [i_13] [i_16 - 1] = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_55 [i_12])) / (((((/* implicit */int) (short)-6330)) & (((/* implicit */int) var_2))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
