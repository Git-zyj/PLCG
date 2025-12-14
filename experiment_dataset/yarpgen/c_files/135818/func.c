/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135818
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
    var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((unsigned int) var_13))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 1; i_2 < 6; i_2 += 1) 
                {
                    var_21 += ((/* implicit */signed char) -7687167191587370478LL);
                    var_22 = ((/* implicit */_Bool) var_12);
                    arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2079982843)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                }
                for (signed char i_3 = 1; i_3 < 8; i_3 += 1) 
                {
                    arr_11 [(unsigned char)6] |= ((/* implicit */unsigned char) min(((+(((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((unsigned short) arr_0 [i_1])))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_8 [(signed char)0] [i_1] [i_1])))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) (unsigned char)43)), (arr_1 [i_0])))))));
                    arr_12 [i_1] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) (_Bool)1))))))));
                }
                arr_13 [i_1] = ((/* implicit */short) ((max((((/* implicit */unsigned int) var_2)), ((((_Bool)0) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)213))))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (signed char)0)) : (arr_3 [i_0] [i_1] [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 2) 
    {
        for (unsigned char i_5 = 3; i_5 < 10; i_5 += 1) 
        {
            {
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (arr_17 [i_5] [i_4])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)86))))) : (((((/* implicit */unsigned long long int) arr_16 [i_5])) + (arr_17 [i_4] [i_4])))))) && (((/* implicit */_Bool) (+(arr_16 [i_4 + 1])))))))));
                arr_19 [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_19)), (max((((/* implicit */int) var_14)), ((((_Bool)0) ? (((/* implicit */int) arr_15 [i_4] [i_5 - 1])) : (((/* implicit */int) arr_18 [i_4 + 3] [i_4 + 2]))))))));
                /* LoopNest 3 */
                for (unsigned int i_6 = 1; i_6 < 10; i_6 += 4) 
                {
                    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            {
                                arr_28 [i_5] = ((/* implicit */unsigned long long int) (~((~((~(((/* implicit */int) arr_25 [i_4 + 2] [i_4] [i_4]))))))));
                                var_25 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_17 [i_8] [i_4 + 2]))))), ((((_Bool)0) ? (1836807217U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_4] [i_5] [5LL] [i_5])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-79)))))))));
                                arr_29 [(unsigned short)10] [i_5] = ((/* implicit */_Bool) ((unsigned char) max(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))), (((/* implicit */int) (signed char)4)))));
                                var_26 = ((/* implicit */signed char) arr_17 [i_6 + 1] [i_4 + 2]);
                                arr_30 [i_8] [i_7] [(unsigned char)6] [(unsigned char)6] [i_5 - 2] [i_4 + 3] |= ((/* implicit */short) ((_Bool) (unsigned short)65525));
                            }
                        } 
                    } 
                } 
                arr_31 [i_4] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_18)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_4] [i_5] [i_4] [i_5]))))) : (((/* implicit */int) (short)4095))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 18401078055429586092ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_27 [i_4] [i_4] [i_4] [5ULL] [i_4] [5ULL] [5ULL])))))) : (min((arr_22 [i_4 + 2] [i_5 - 3] [9U] [i_5 - 2]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)11193)))))))));
                var_27 += ((/* implicit */short) min((arr_16 [i_4]), (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
