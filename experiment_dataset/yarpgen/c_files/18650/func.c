/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18650
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
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22908))) : (var_1)))) ? (arr_5 [i_0] [i_1]) : (((((/* implicit */_Bool) (signed char)117)) ? (arr_5 [i_1] [i_0]) : (((/* implicit */int) arr_4 [i_1] [i_0]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (arr_3 [i_1])))) : (((arr_0 [5U]) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)-65)) : (var_0))))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_5 [i_0] [i_0]) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? ((~(var_4))) : (((((/* implicit */int) ((unsigned short) 0ULL))) ^ (((/* implicit */int) arr_1 [i_0] [i_2])))))))));
                    arr_9 [(_Bool)1] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) * (arr_6 [i_0] [i_1] [i_2] [(unsigned char)15])));
                    var_16 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_1])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_17 *= ((((2250822539327067111LL) == (((/* implicit */long long int) max((2452522114U), (((/* implicit */unsigned int) var_8))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [15]))) : (((((/* implicit */_Bool) arr_13 [i_4 + 1] [i_4 - 2] [i_4 + 1] [i_4 - 2] [i_4 + 2])) ? (arr_13 [i_4 + 1] [i_4 - 2] [21LL] [i_4 + 2] [i_4 + 2]) : (arr_13 [i_4 + 1] [i_4 - 2] [i_4] [i_4] [i_4]))));
                                var_18 = ((arr_2 [i_1]) + (((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_0] [i_1] [9LL] [(unsigned short)19]))))));
                                arr_15 [i_3] [i_3] [i_2] [i_3] [i_4 - 2] [20U] = ((/* implicit */signed char) arr_12 [(unsigned short)1] [i_2] [i_3] [i_4 + 1] [i_4 + 2] [i_4 + 2]);
                                arr_16 [i_4 + 2] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_0))));
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */int) var_2))))) : (max((((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned int) (_Bool)1))))), (var_12)))));
    var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((((/* implicit */_Bool) 1842445181U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (2452522125U))) > (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
}
