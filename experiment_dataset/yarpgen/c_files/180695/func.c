/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180695
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) arr_4 [i_0]))));
                            arr_15 [i_0] [i_0] [(unsigned short)22] [i_0] [(unsigned short)22] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_5 [i_2 - 3] [i_3 + 1]))), ((~(arr_5 [11] [i_3 + 1])))));
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_12 [i_3 - 1] [i_3 - 1] [i_3] [i_1])))) || (((/* implicit */_Bool) -1LL)))))));
                            arr_16 [i_0] [i_0] [(unsigned short)17] [i_0] = ((/* implicit */signed char) (-(7LL)));
                            arr_17 [i_4] [i_0] [i_2] = ((/* implicit */signed char) var_13);
                        }
                        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            arr_20 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_13))))));
                            arr_21 [i_0] [i_0] [i_0] [i_3 + 2] = ((/* implicit */signed char) max((max((((/* implicit */long long int) 2581843902U)), (0LL))), (((/* implicit */long long int) ((short) (-(((/* implicit */int) var_1))))))));
                            arr_22 [i_0] [(unsigned char)16] [i_0] = ((/* implicit */int) arr_4 [(unsigned char)0]);
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((1713123373U), (1713123394U)));
                            arr_24 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(min((((unsigned int) var_2)), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-19)))))))));
                        }
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            var_18 = ((/* implicit */_Bool) max((var_18), (((max((((/* implicit */long long int) arr_7 [i_2 - 2] [i_6] [i_2 - 2])), (max((arr_25 [i_0] [i_0] [20ULL] [i_0] [i_3 + 2] [i_0] [(signed char)4]), (((/* implicit */long long int) arr_4 [(_Bool)1])))))) >= (((((/* implicit */_Bool) min((((/* implicit */long long int) var_13)), (arr_1 [i_3])))) ? (((arr_1 [1LL]) - (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [(unsigned char)4] [i_1] [(_Bool)1] [i_3 + 2] [i_1])))))))));
                            arr_28 [i_0] [i_1] [i_0] [i_3 + 1] [7LL] [i_1] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_2] [i_3] [i_0])) ? (arr_6 [i_0] [i_0] [i_0]) : (var_2)))))) ? (((/* implicit */long long int) ((unsigned int) arr_8 [i_3 - 1]))) : (1LL)));
                        }
                        arr_29 [(signed char)19] [i_0] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((_Bool) 1713123379U))), (max((((((/* implicit */unsigned long long int) var_2)) - (var_5))), (((/* implicit */unsigned long long int) ((arr_10 [i_0] [i_0] [2ULL] [0U] [0U] [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
                    }
                    var_19 += ((/* implicit */long long int) arr_26 [i_0] [i_0] [i_1] [i_0] [i_1]);
                    arr_30 [i_0] [i_0] [i_1] [(short)3] = ((((/* implicit */unsigned long long int) 72040001851883520LL)) == (10605740569256403495ULL));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(min((var_14), (((/* implicit */unsigned int) var_7))))))) ? (2939793831U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))));
}
