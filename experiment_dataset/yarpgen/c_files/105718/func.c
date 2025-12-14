/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105718
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_19 += ((/* implicit */short) var_1);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned int i_4 = 3; i_4 < 20; i_4 += 4) /* same iter space */
                            {
                                var_20 = ((/* implicit */int) ((arr_8 [i_0] [i_0] [i_3 + 2] [i_0]) * (arr_8 [i_0] [i_0] [i_3 + 2] [(_Bool)1])));
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_1 [(short)14])) : (((/* implicit */int) var_1))))) * (((((/* implicit */_Bool) 598056636311458632ULL)) ? (1883969897U) : (arr_7 [i_0] [3U] [i_1])))));
                                var_22 = ((/* implicit */unsigned char) (-(arr_11 [i_3] [i_1] [i_3] [i_3 - 1] [i_4 + 2])));
                                arr_12 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_1] [i_4 - 3] [i_1] [i_3 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_11 [i_4 - 2] [i_1] [i_4 + 3] [i_1] [i_3 + 1])));
                            }
                            for (unsigned int i_5 = 3; i_5 < 20; i_5 += 4) /* same iter space */
                            {
                                var_23 ^= ((/* implicit */int) ((((/* implicit */_Bool) (short)-25954)) ? (17848687437398092983ULL) : (((/* implicit */unsigned long long int) 4294967295U))));
                                arr_15 [i_1] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_1] [i_5 - 3] [i_3])) ? (((/* implicit */unsigned long long int) 4294967295U)) : (15440584917457612071ULL)));
                                var_24 -= ((/* implicit */unsigned int) var_4);
                            }
                            arr_16 [i_1] [i_3] [i_3] = ((/* implicit */signed char) min((((((/* implicit */_Bool) 11853026224159714326ULL)) ? (-1295206250) : (((/* implicit */int) arr_2 [i_0] [i_1])))), (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_3 - 1] [i_1]))))));
                            arr_17 [i_1] [(signed char)19] [i_1] [10U] [20LL] = ((/* implicit */unsigned int) var_2);
                            var_25 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-20866))))) ? (var_11) : (((/* implicit */int) min((var_8), (var_8))))))), ((+((+(598056636311458632ULL)))))));
                        }
                    } 
                } 
                arr_18 [i_0] [(signed char)4] [i_1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 576460752303423487LL)))) ? (((/* implicit */unsigned long long int) (~(((unsigned int) (short)17620))))) : ((-(6230034603227016548ULL)))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(-603843978)))) * (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (4611686018427387903ULL)))));
    var_27 = ((/* implicit */_Bool) ((((var_11) > (((/* implicit */int) var_2)))) ? ((+((~(1295206250))))) : (((((/* implicit */int) ((((/* implicit */int) var_17)) > (((/* implicit */int) var_5))))) * (((/* implicit */int) (!(((/* implicit */_Bool) -1)))))))));
}
