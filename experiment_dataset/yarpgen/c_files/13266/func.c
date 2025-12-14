/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13266
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+((-2147483647 - 1))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0] [i_1 + 1]))))) : ((~(3246989056292809004LL))))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1] [i_1 + 1])) && (((/* implicit */_Bool) min((arr_0 [19U]), (((/* implicit */long long int) (_Bool)1)))))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 23; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) min((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-31723)))))), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (_Bool)1))))));
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                            {
                                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) max((min((((arr_12 [i_3] [i_1] [i_0]) ? (arr_1 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) arr_15 [i_2 + 1] [i_2] [i_2] [i_2] [23U] [(_Bool)1] [i_1])))), (((/* implicit */long long int) (((-(((/* implicit */int) arr_14 [i_4] [(unsigned char)12] [i_3] [i_2 - 1] [i_1] [i_0])))) / (((/* implicit */int) (unsigned char)18))))))))));
                                var_15 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)238)) << (((((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) - (3519353774979077844ULL))))) >> (((((((/* implicit */_Bool) (unsigned char)225)) ? (min((var_12), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) (~(1671384417)))))) - (289916140ULL)))));
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_9 [i_2 - 1] [i_2 + 1] [i_1 - 2] [i_1 - 1])))) ? (((/* implicit */long long int) (~(1042907981U)))) : (min((arr_9 [i_2 + 1] [i_2 - 1] [i_1 + 1] [i_1 - 2]), (arr_9 [i_2 + 1] [i_2 + 1] [i_1 - 2] [i_1 + 1])))));
                            }
                            for (signed char i_5 = 4; i_5 < 21; i_5 += 4) 
                            {
                                arr_20 [(short)22] [i_1] [i_1] [11ULL] [(short)4] = ((/* implicit */signed char) var_4);
                                arr_21 [i_0] [i_1] [i_2 + 1] [0U] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_15 [i_2 - 1] [i_1] [i_1] [i_3] [i_3] [i_1] [i_1]), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
                            }
                            /* LoopSeq 1 */
                            for (unsigned int i_6 = 2; i_6 < 23; i_6 += 4) 
                            {
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((-1671384417), (((/* implicit */int) (unsigned char)30))))) ? (((/* implicit */unsigned long long int) min((((long long int) (_Bool)1)), (var_9)))) : (((((var_12) >> (((((/* implicit */int) var_1)) - (3358))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6] [i_3] [i_2 + 1] [i_1 - 1] [(_Bool)1]))) : (var_6))))))));
                                var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_17 [1LL] [i_6] [i_6 - 1] [(unsigned char)9] [i_6 - 1] [4U] [i_6 - 1])) + (2147483647))) >> (((((((/* implicit */_Bool) arr_25 [i_0] [15U] [i_2 + 1] [15U] [10] [i_6 - 2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 2])))) + (11765)))))) * (((((/* implicit */_Bool) ((unsigned char) -1671384417))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_1 + 1] [i_2] [i_3] [i_6] [i_1] [i_2]))) : (arr_25 [i_0] [i_1 + 1] [22ULL] [(unsigned short)2] [22ULL] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                                arr_26 [(unsigned char)19] [4] [i_1] [i_2 - 1] [i_2] [i_3] [17] = ((/* implicit */unsigned int) max(((~(arr_19 [i_0] [i_1] [i_6 - 2] [i_2 + 1] [i_6] [i_2] [i_3]))), ((-(var_9)))));
                            }
                        }
                    } 
                } 
                var_19 -= ((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))));
                arr_27 [i_0] = ((/* implicit */_Bool) ((int) ((unsigned short) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1] [i_1] [(signed char)17] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))));
                arr_28 [12] [(_Bool)1] [(_Bool)1] = ((((/* implicit */long long int) (+((+(1671384417)))))) >= (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1 + 1] [20U])) ? (arr_9 [i_0] [i_1] [i_1 + 1] [(unsigned char)22]) : (((/* implicit */long long int) 1671384417)))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) var_6)) + (3293670431560591364LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : ((-(var_6))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    var_21 = ((/* implicit */_Bool) ((unsigned int) 3252059325U));
}
