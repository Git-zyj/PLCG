/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114153
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
    var_19 = ((/* implicit */signed char) (+(((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_2 = 1; i_2 < 22; i_2 += 2) 
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (var_4)));
                    var_21 = ((/* implicit */short) 4294967295U);
                    arr_9 [i_0] [i_0] [(signed char)1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2622303986U)) ? (arr_0 [i_2 + 1]) : (((/* implicit */int) var_14))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 1; i_3 < 22; i_3 += 4) 
                {
                    var_22 &= ((/* implicit */long long int) var_7);
                    arr_12 [i_1] [i_3 + 2] = ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)32746)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))) - (((((/* implicit */_Bool) (signed char)-34)) ? (var_13) : (((/* implicit */long long int) 1672663309U)))));
                }
                for (long long int i_4 = 1; i_4 < 22; i_4 += 2) 
                {
                    var_23 = ((/* implicit */int) var_9);
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-109))))), (var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_4])))))) : (max((((/* implicit */unsigned int) (short)-1)), (arr_16 [(signed char)18] [i_4 - 1] [i_4 + 2] [(signed char)18])))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */short) arr_10 [i_0] [i_1] [i_4 + 2]);
                                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) (+(arr_16 [i_0] [i_1] [i_6] [i_5])))) ? (((((/* implicit */long long int) 2622304001U)) % (var_18))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)254))))))))))));
                            }
                        } 
                    } 
                    arr_21 [(signed char)7] [i_1] [i_4] [4U] = ((((/* implicit */_Bool) (-(arr_20 [i_0] [i_1] [i_1] [i_1] [i_4 + 1] [i_1])))) ? ((-(1672663309U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)209))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            {
                                var_27 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? ((-(-2133043228))) : ((-(((/* implicit */int) (unsigned char)255))))));
                                var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) 2622303975U))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        for (unsigned char i_11 = 3; i_11 < 22; i_11 += 4) 
                        {
                            {
                                var_29 &= ((/* implicit */unsigned int) ((long long int) arr_29 [i_10] [i_11 - 3] [i_11 + 1] [i_11 + 2]));
                                var_30 *= ((/* implicit */unsigned int) var_5);
                                var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_11] [i_0] [i_11 - 2])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_7)))))));
                                var_32 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_24 [i_7] [i_11] [i_11] [i_11 - 2] [i_11 + 2]))));
                            }
                        } 
                    } 
                }
                var_33 = ((/* implicit */signed char) (+(min((arr_35 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0] [i_1]), (((/* implicit */long long int) max((1U), (((/* implicit */unsigned int) var_1)))))))));
            }
        } 
    } 
}
