/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170036
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_18)) & (min((((/* implicit */long long int) var_2)), (-485342656339323012LL)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                var_21 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) (short)15)))))) : ((-(var_16))))) & (((/* implicit */long long int) ((/* implicit */int) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_1])) > (((/* implicit */int) var_17))))))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (10652170642734402764ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-30)))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_16 [i_1] [8ULL] [i_2] [i_1] [i_4] [i_4] [i_0] = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) (unsigned char)151)), (-485342656339323009LL))), (((/* implicit */long long int) (unsigned char)208))));
                                arr_17 [i_1] [i_1] &= ((/* implicit */short) arr_11 [0] [i_1] [i_2] [i_3]);
                                arr_18 [i_0] [(signed char)1] [i_1] [i_1] [i_1] [(signed char)1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_9 [i_4] [i_3] [i_1]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_3])))))))) ? (arr_9 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_1] [i_1] [i_1 - 2] [i_1])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 4; i_5 < 11; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned char i_7 = 2; i_7 < 11; i_7 += 3) 
            {
                {
                    var_22 = ((/* implicit */long long int) ((int) (+(var_5))));
                    var_23 ^= ((/* implicit */signed char) (((_Bool)1) ? (((arr_21 [i_5] [i_7]) ? (((unsigned int) (unsigned char)255)) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_5]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_19)))));
                    arr_29 [i_6] [i_6] [i_7] [i_7] = ((/* implicit */long long int) arr_9 [i_5] [i_5] [i_7]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_8 = 1; i_8 < 18; i_8 += 4) 
    {
        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 4) 
        {
            for (unsigned char i_10 = 3; i_10 < 18; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_11 = 2; i_11 < 18; i_11 += 4) 
                    {
                        for (int i_12 = 3; i_12 < 16; i_12 += 2) 
                        {
                            {
                                var_24 = (!(((/* implicit */_Bool) 485342656339322998LL)));
                                arr_41 [(short)12] [i_12] [i_10] [i_11] [(unsigned short)14] = ((/* implicit */short) (-(((/* implicit */int) arr_14 [i_12] [i_12] [i_12]))));
                                var_25 += ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_12)) ? (arr_40 [i_12] [i_12] [i_12] [12] [i_12] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_12] [i_12] [i_12] [i_12] [i_12]))))));
                                arr_42 [i_12] [i_11] [i_10] [i_9] [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 1503144923U)))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_8] [i_10] [i_11] [i_10])) ? (485342656339323032LL) : (((/* implicit */long long int) 3392424199U))))) ? (((/* implicit */unsigned long long int) (~(var_10)))) : (arr_32 [i_11])))));
                                var_26 = ((/* implicit */unsigned long long int) arr_30 [i_8] [i_8]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 19; i_13 += 1) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 19; i_14 += 3) 
                        {
                            {
                                arr_48 [i_8] [i_9] [i_10] [12ULL] [i_13] = ((/* implicit */long long int) arr_30 [13U] [i_8 - 1]);
                                arr_49 [i_13] [17U] [17U] [i_13] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)-27)), (-9019261345843458393LL)));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned int i_15 = 0; i_15 < 19; i_15 += 1) 
                    {
                        var_27 -= ((/* implicit */short) max(((~(((/* implicit */int) arr_14 [i_10] [i_10] [i_10])))), (((/* implicit */int) (signed char)0))));
                        arr_53 [i_8] [i_8] [i_9] = ((/* implicit */unsigned int) (!(var_19)));
                        var_28 = ((/* implicit */signed char) max((var_12), (((/* implicit */long long int) var_11))));
                        arr_54 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) var_11);
                    }
                    for (short i_16 = 2; i_16 < 16; i_16 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned int) max((((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [i_10])))))))), (arr_6 [i_16 + 3] [i_16 + 3])));
                        arr_58 [i_9] = ((unsigned short) ((short) (unsigned short)33249));
                    }
                    for (int i_17 = 0; i_17 < 19; i_17 += 3) 
                    {
                        var_30 += ((/* implicit */unsigned short) arr_34 [i_8] [i_9] [i_10]);
                        arr_62 [i_17] [i_10] [i_8] [i_8] = ((/* implicit */short) max(((-(((unsigned long long int) arr_30 [i_9] [i_8])))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == ((-9223372036854775807LL - 1LL)))))));
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) ((((/* implicit */int) var_17)) < (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) var_7)) ? (var_18) : (var_5))))) << (((/* implicit */int) var_19))));
}
