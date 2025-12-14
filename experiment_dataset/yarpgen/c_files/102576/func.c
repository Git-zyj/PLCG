/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102576
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
    var_17 = ((/* implicit */long long int) (-(((/* implicit */int) (short)-2786))));
    var_18 = ((/* implicit */unsigned int) min((((/* implicit */int) min((var_12), (((/* implicit */signed char) var_7))))), (-406485496)));
    var_19 = ((/* implicit */short) ((((var_14) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_13)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_3 [i_1])), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_2]))))) ? (var_5) : (((/* implicit */long long int) ((arr_0 [i_0]) ? (arr_8 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)8))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) 65535LL)) & (max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) 3U)) : (70367670435840ULL))), (((/* implicit */unsigned long long int) min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */long long int) (_Bool)0))))))))))));
                                var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_1] [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_2] [i_2] [i_3 - 1] [i_3 - 1] [i_3]))) : (arr_11 [i_2] [i_3] [i_3 - 1] [i_3 - 2]))) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6103))) ^ (var_8)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_1] [i_4]))))) : (max((arr_10 [i_2] [i_3] [i_2] [2] [i_2]), (((/* implicit */unsigned int) arr_1 [i_4])))))))));
                                arr_16 [i_2] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) arr_9 [8ULL] [i_2] [i_1]);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((((var_10) >> (((var_9) - (1483921271044841517LL))))) << (((((((/* implicit */unsigned long long int) var_14)) & (var_2))) - (10385407668784234599ULL))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23854))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_11);
}
