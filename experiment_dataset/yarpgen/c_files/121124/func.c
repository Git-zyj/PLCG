/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121124
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) max((((var_7) ? (var_4) : (-7568296324566233686LL))), (((long long int) var_10))))) ? (var_4) : (min((((/* implicit */long long int) 4294967284U)), (max((((/* implicit */long long int) (unsigned char)64)), (var_4)))))));
    var_15 = ((/* implicit */_Bool) ((unsigned int) ((var_4) * (((/* implicit */long long int) ((/* implicit */int) var_7))))));
    var_16 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_0))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (!(((_Bool) arr_0 [i_0] [i_0])))))));
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_0 [i_0] [i_0])))) ? (((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])) ^ (arr_5 [i_0]))) : (((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_1]) ^ (arr_0 [i_0] [i_0])))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [(short)5] [(_Bool)1] [i_0] [4] [i_0] = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) (unsigned char)69)), (-7568296324566233655LL))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
                            /* LoopSeq 3 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_19 += ((/* implicit */unsigned int) (unsigned char)186);
                                var_20 = ((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_2] [8]);
                                var_21 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)199)))) ^ (arr_0 [i_0] [i_4])))) / (arr_5 [i_0])));
                                var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)131)), (9146510180048250697LL)));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [5U])) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0]))))) <= (((((/* implicit */_Bool) -7568296324566233660LL)) ? (max((((/* implicit */long long int) 4221329275U)), (-4061908285890406929LL))) : (((/* implicit */long long int) min((var_13), (((/* implicit */unsigned int) (_Bool)1))))))))))));
                                arr_19 [i_0] [i_1] [i_1] [i_0] [i_2] [i_1] [i_5] = min((min((((/* implicit */long long int) arr_18 [i_0])), (-7568296324566233682LL))), (((/* implicit */long long int) var_10)));
                                arr_20 [(_Bool)1] [(_Bool)1] [i_2] [2] [i_3] [0LL] = ((/* implicit */unsigned int) ((short) (~(arr_5 [i_1]))));
                                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((arr_4 [i_0]) % (arr_4 [i_0]))) : (((arr_14 [i_0] [i_1] [(_Bool)0] [(_Bool)1] [i_0]) + (arr_14 [6] [i_3] [(_Bool)1] [6] [i_0]))))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
                            {
                                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_2 [i_0]) : (arr_2 [i_2]))))));
                                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) arr_7 [i_3] [i_3])) : (((/* implicit */int) arr_7 [i_3] [(unsigned char)7]))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
