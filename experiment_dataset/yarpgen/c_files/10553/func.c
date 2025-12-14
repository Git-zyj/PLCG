/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10553
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
    var_10 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9347295869295121053ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))))))), (var_9)));
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (9347295869295121022ULL)))) ? (((((/* implicit */int) (unsigned char)235)) * (((/* implicit */int) (unsigned short)51336)))) : (((/* implicit */int) (short)7393))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) var_1);
                                arr_13 [i_0] [i_3 - 2] [(unsigned short)10] [i_1] [i_0] = ((unsigned char) max((((/* implicit */unsigned long long int) var_4)), (max((((/* implicit */unsigned long long int) var_1)), (2241185869791047806ULL)))));
                                arr_14 [i_4] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1959745565U)), (9347295869295121048ULL))))));
                                var_13 += ((/* implicit */unsigned char) ((unsigned short) arr_7 [i_1 + 1]));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        var_14 = (+(((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_10 [i_0] [i_0] [i_2]), (((/* implicit */short) arr_16 [10LL] [10LL] [i_0])))))) : (arr_0 [i_1 - 1] [i_0]))));
                        var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 9347295869295121053ULL))));
                    }
                    for (unsigned short i_6 = 2; i_6 < 14; i_6 += 2) 
                    {
                        var_16 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) arr_9 [i_1] [i_2] [i_1] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)39)))), (((/* implicit */int) arr_15 [i_6 - 2] [i_6] [i_6] [i_1 + 1])))))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((unsigned int) (+((-(((/* implicit */int) (_Bool)1))))))))));
                            var_18 = ((/* implicit */short) ((((arr_0 [i_1 + 1] [i_0]) + (arr_0 [i_1 + 2] [i_0]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_0] [i_1] [i_1 - 1] [i_6 + 2] [(signed char)8] [i_6]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_6 - 1] [i_1 + 1] [i_0])))))))));
                        }
                        var_19 += ((/* implicit */unsigned int) var_6);
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (signed char)-49);
}
