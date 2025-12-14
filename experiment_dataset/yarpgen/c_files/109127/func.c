/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109127
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
    var_13 = ((/* implicit */int) var_5);
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((((min((((/* implicit */unsigned long long int) arr_2 [i_0 - 2] [i_0])), (arr_1 [i_0] [i_0]))) - (((var_12) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0 + 2]), (arr_0 [i_0 + 2]))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) max((min((-2507025154770365906LL), (((/* implicit */long long int) 1849643167)))), (((/* implicit */long long int) min((arr_0 [i_0 - 2]), (arr_0 [i_0 + 1]))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_11 [i_2] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2507025154770365919LL)) ? (2507025154770365886LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-116)))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [8U] [i_1] [i_3] [i_1] [i_4] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0 - 2])) ? (((/* implicit */unsigned long long int) 2507025154770365893LL)) : (arr_13 [i_0 + 2] [10] [i_3] [i_3] [i_1])));
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2507025154770365910LL)) ? (((/* implicit */long long int) 325080592)) : (2507025154770365905LL)))) ? (((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1] [i_2])) ? (arr_13 [i_0] [i_0 + 3] [i_3] [6] [i_0]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_0] [(unsigned char)15]))))))) : ((~(max((((/* implicit */unsigned long long int) arr_9 [i_0] [9U] [(_Bool)1] [i_4])), (arr_12 [i_0 + 3])))))));
                                arr_17 [i_0 + 1] [i_3] [i_1] [i_3] [i_0] = ((((/* implicit */_Bool) max((4074935902685511826ULL), (((/* implicit */unsigned long long int) arr_2 [i_0 + 2] [i_0]))))) ? (((-2507025154770365904LL) ^ (2507025154770365905LL))) : (((/* implicit */long long int) ((arr_2 [i_0 + 1] [i_0]) ? (((/* implicit */int) arr_2 [i_0 + 3] [i_0])) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0]))))));
                                arr_18 [i_0] [i_1] [i_4] = ((/* implicit */_Bool) min((((/* implicit */int) arr_7 [i_0 + 3] [i_0 - 1])), ((((-(((/* implicit */int) arr_10 [i_0] [i_2] [i_2])))) / (((/* implicit */int) arr_5 [i_0 + 3] [i_0 + 1] [i_2]))))));
                                var_15 = ((signed char) min((((/* implicit */unsigned int) arr_14 [3ULL] [i_0 - 2])), (arr_15 [17] [i_0 + 1] [i_0 - 2] [i_3])));
                            }
                        } 
                    } 
                    arr_19 [i_0] = ((/* implicit */unsigned char) (((((~(((/* implicit */int) var_12)))) < (((/* implicit */int) (signed char)3)))) ? (((/* implicit */unsigned long long int) var_11)) : (arr_1 [i_0] [i_1])));
                    var_16 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0] [i_1]))));
                    arr_20 [i_0 + 2] [(_Bool)1] [11] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1));
                }
            } 
        } 
    }
    for (long long int i_5 = 2; i_5 < 15; i_5 += 1) /* same iter space */
    {
        arr_23 [i_5 - 2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) -2507025154770365898LL)) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)120))) : (5575675264638032923LL)))) : (2251799813685120ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)23708), (((/* implicit */short) (_Bool)1))))))));
        var_17 = ((/* implicit */long long int) arr_10 [8U] [i_5] [i_5]);
        var_18 = ((/* implicit */unsigned int) ((unsigned char) 18444492273895866463ULL));
        arr_24 [i_5] = ((/* implicit */int) max((((long long int) (unsigned short)64224)), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(unsigned char)10] [i_5 - 2] [0] [14])) ? (arr_12 [i_5 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5 + 3] [i_5]))) : (var_11))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)68))))), (((arr_12 [12]) * (var_4)))))) && (((/* implicit */_Bool) 4092203854U))));
    }
    var_20 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)63))));
    var_21 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | (((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), (var_6)));
}
