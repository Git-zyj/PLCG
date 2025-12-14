/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172144
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
    for (short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_18 *= ((/* implicit */_Bool) max((max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_7)) != (8796093022207ULL)))), (var_9))), (((/* implicit */unsigned short) var_2))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) ((var_12) || (var_10)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_4 [i_0]))))))))));
                var_19 = ((/* implicit */long long int) ((unsigned long long int) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) 32764U)) : (var_6))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) >= (var_8)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3] [i_4]))) != (2680753027U))) ? (((var_3) & (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_6 = 1; i_6 < 9; i_6 += 4) /* same iter space */
                        {
                            var_21 ^= ((/* implicit */unsigned int) var_11);
                            var_22 = ((/* implicit */unsigned long long int) ((((arr_9 [i_3] [i_4] [i_3]) | (((/* implicit */int) var_12)))) ^ (((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_9))))));
                        }
                        for (unsigned int i_7 = 1; i_7 < 9; i_7 += 4) /* same iter space */
                        {
                            var_23 -= ((((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_2))))) / (arr_12 [i_5] [i_3] [i_3] [i_3]))) * (((/* implicit */unsigned int) ((((arr_12 [i_5] [i_5] [i_5] [8U]) > (var_17))) ? (((((/* implicit */_Bool) 2680753039U)) ? (((/* implicit */int) arr_1 [i_5])) : (((/* implicit */int) var_13)))) : (((/* implicit */int) var_11))))));
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) min((((/* implicit */int) ((((((/* implicit */_Bool) var_8)) || (var_2))) || (((var_15) || (var_10)))))), (((((/* implicit */_Bool) arr_19 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7] [i_7] [4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_15 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7] [i_7])))))))));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_7 [i_2] [i_4])))))) / (((long long int) var_0))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_7 - 1] [i_7 - 1]))) & (((unsigned long long int) var_12)))))))));
                        }
                        for (unsigned int i_8 = 1; i_8 < 9; i_8 += 4) /* same iter space */
                        {
                            var_26 ^= ((/* implicit */unsigned short) ((signed char) ((_Bool) arr_13 [5ULL] [4U] [(unsigned short)5] [i_8 + 1] [i_5] [i_2])));
                            arr_22 [i_5] [i_4] [i_4] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_2)), (((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [11ULL])))))))), (max((((long long int) var_11)), (((((/* implicit */_Bool) var_3)) ? (arr_0 [i_8]) : (((/* implicit */long long int) 524032))))))));
                        }
                        arr_23 [i_2] [i_3] [i_3] [i_3] [i_2] |= ((/* implicit */_Bool) ((int) max((((((/* implicit */int) var_12)) * (((/* implicit */int) var_9)))), (((/* implicit */int) ((((/* implicit */int) arr_1 [i_3])) < (((/* implicit */int) var_11))))))));
                    }
                    for (short i_9 = 2; i_9 < 9; i_9 += 3) 
                    {
                        arr_26 [i_2] [i_3] [8U] [i_4] = ((/* implicit */unsigned int) ((_Bool) ((unsigned long long int) arr_13 [i_9] [i_9 + 1] [i_9] [i_9 - 1] [i_9] [i_9 - 2])));
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (+(max((((/* implicit */long long int) ((_Bool) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_9]))), (((long long int) var_9)))))))));
                        var_28 = ((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (var_17))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) > (max((var_14), (((/* implicit */unsigned int) var_12)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            arr_30 [i_4] = ((/* implicit */long long int) ((arr_27 [8LL] [i_9 - 1] [8LL] [i_9]) ? (arr_21 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1]) : (((/* implicit */int) arr_6 [i_9 - 2] [i_9 - 1]))));
                            var_29 = ((/* implicit */_Bool) 2305843009213693948ULL);
                        }
                    }
                    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((((/* implicit */int) var_10)) & (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_3] [i_2] [i_3] [i_3])) && (((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2] [4] [i_4]))))))) << (((((((/* implicit */_Bool) arr_20 [i_3] [i_3] [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_14)))) : (min((var_0), (((/* implicit */long long int) 0U)))))) - (62LL))))))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned short) 0);
}
