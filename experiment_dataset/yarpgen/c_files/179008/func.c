/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179008
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
    var_14 = var_9;
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned short) ((signed char) min((3337863307U), (((/* implicit */unsigned int) (signed char)-104)))))), (((unsigned short) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
                    arr_8 [i_1] [i_1] [(short)1] = ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) var_5))))) ? (max((957103989U), (((/* implicit */unsigned int) (signed char)-78)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_6)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [9] [i_4] [i_2] &= ((/* implicit */unsigned long long int) min((((/* implicit */short) var_9)), (max((((/* implicit */short) var_13)), (var_2)))));
                                arr_15 [i_0] [i_0] [(short)13] [i_0] [(short)12] [(short)12] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_7)), (((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))))));
                                arr_16 [i_4] [i_3 - 1] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))), (((/* implicit */int) ((_Bool) var_0)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 13; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_24 [i_6] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_11) : (var_8)))), (((var_13) ? (var_6) : (((/* implicit */unsigned long long int) var_10)))));
                                arr_25 [i_0] [i_0] [i_6] [i_5] [i_6] = ((/* implicit */unsigned int) max((((/* implicit */int) var_13)), (max((-36692556), (((/* implicit */int) (short)-22601))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 4; i_7 < 10; i_7 += 1) 
    {
        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    arr_37 [i_7] [i_7 + 1] [i_7] [i_7] = ((/* implicit */signed char) ((unsigned short) max((var_9), (((/* implicit */signed char) var_13)))));
                    arr_38 [i_7 - 2] [(_Bool)1] [i_8] [i_9] = max((((/* implicit */long long int) min((2333390604U), (((/* implicit */unsigned int) (_Bool)0))))), (min((var_1), (((/* implicit */long long int) var_12)))));
                    arr_39 [i_7] [(unsigned short)4] [i_7] = ((/* implicit */unsigned int) var_12);
                    arr_40 [i_7] [i_8] [i_7] = ((/* implicit */long long int) max((((short) var_1)), (((/* implicit */short) max((((/* implicit */signed char) var_5)), (var_7))))));
                }
                for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) /* same iter space */
                {
                    arr_43 [i_10] [i_10] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((int) var_9))), (max((((/* implicit */unsigned int) var_2)), (((unsigned int) var_13))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 1; i_11 < 8; i_11 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 3; i_12 < 10; i_12 += 3) 
                        {
                            arr_50 [i_10] [i_10] [i_10] [(signed char)10] = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) var_0)), (var_8)))));
                            arr_51 [i_10] [i_11] [i_10] [i_10] = ((/* implicit */unsigned short) var_13);
                            arr_52 [i_7] [i_8] [i_10] [i_11] [(signed char)0] = ((/* implicit */long long int) min((var_8), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 3219559000U))))))))));
                        }
                        arr_53 [i_7] [(unsigned short)8] [i_10] [i_7 + 1] [i_7] = ((/* implicit */signed char) var_2);
                        arr_54 [i_10] [(unsigned short)8] [i_10] = ((/* implicit */signed char) ((int) max((min((((/* implicit */long long int) (signed char)78)), (-4052092154405259317LL))), (((/* implicit */long long int) max((((/* implicit */short) (signed char)-90)), (var_2)))))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        for (signed char i_15 = 4; i_15 < 10; i_15 += 3) 
                        {
                            {
                                arr_64 [i_7] [i_14] [i_13] [i_14] [i_15] = ((/* implicit */unsigned long long int) ((short) var_3));
                                arr_65 [i_7] [i_8] [i_8] [i_7] [i_14] = var_2;
                                arr_66 [i_7] [i_7] [(short)8] [i_7] [i_7 - 3] [i_7] |= ((/* implicit */unsigned int) ((signed char) var_9));
                                arr_67 [i_14] [i_14] [i_8] [i_13] [(short)10] [i_15 - 1] = ((/* implicit */unsigned long long int) ((unsigned short) var_6));
                            }
                        } 
                    } 
                    arr_68 [i_13] = ((/* implicit */unsigned int) var_5);
                    arr_69 [i_7] = ((/* implicit */int) var_10);
                }
                arr_70 [i_7] [(unsigned short)6] = ((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */unsigned int) ((unsigned short) var_11))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_8))))));
                arr_71 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_12)))) : (min((var_1), (((/* implicit */long long int) var_2))))));
                arr_72 [(unsigned short)0] [(short)6] = ((/* implicit */unsigned char) var_10);
            }
        } 
    } 
}
