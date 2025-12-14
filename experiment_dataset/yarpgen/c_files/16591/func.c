/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16591
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (short i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */long long int) 712008956)) : (-2483153865195278232LL)));
                            arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_3 + 2] [i_3 - 1])) ? (((/* implicit */int) arr_9 [i_2] [i_2] [i_3 + 2] [(signed char)2])) : (((/* implicit */int) arr_9 [i_0] [i_3] [i_3 - 1] [i_0])))), (((/* implicit */int) min((arr_9 [i_1] [i_3 + 1] [(short)11] [0U]), (arr_9 [i_0] [i_3 - 1] [i_0] [i_0]))))));
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 1; i_4 < 15; i_4 += 2) 
                            {
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) ((int) var_9)))) ? (((/* implicit */unsigned int) ((int) arr_12 [i_4 - 1] [i_4 - 1] [i_2] [i_3 + 1] [i_4]))) : (arr_1 [i_0]))))));
                                var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)28)) * (((/* implicit */int) var_16))))) > (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2]))) * (arr_13 [i_2] [i_2])))))) + (min((((/* implicit */int) var_13)), (min((-323142498), (arr_7 [i_0] [i_1] [i_0] [i_4])))))));
                                arr_15 [(unsigned char)5] [(unsigned char)5] [i_1] [i_1] [i_3] [i_4 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_3 [i_4]) : (arr_1 [i_2])))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((signed char) min((((/* implicit */short) var_11)), (var_18)))))));
                                arr_16 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-20974))));
                            }
                            /* LoopSeq 1 */
                            for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                            {
                                arr_19 [i_0] [i_1] [i_1] [10ULL] [i_5] = (+(3941287498U));
                                arr_20 [i_1] [i_1] [i_2] [i_3 - 1] [i_1] = ((/* implicit */short) ((((/* implicit */int) min((var_11), (var_11)))) <= ((-(arr_7 [i_3 + 2] [i_3] [i_3 - 1] [i_3 + 1])))));
                            }
                        }
                    } 
                } 
                arr_21 [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_14 [(short)3] [(short)3] [(signed char)12])) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_18))));
}
