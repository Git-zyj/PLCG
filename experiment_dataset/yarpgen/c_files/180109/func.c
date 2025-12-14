/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180109
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
    var_14 |= ((/* implicit */int) ((signed char) 875092735336534440LL));
    var_15 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (var_12)))), (max((var_1), (((/* implicit */unsigned long long int) 224749054U)))))) >> ((((~(min((((/* implicit */unsigned long long int) var_8)), (var_10))))) - (18446744073709493856ULL)))));
    var_16 = ((/* implicit */unsigned long long int) ((signed char) min((max((((/* implicit */unsigned long long int) var_4)), (var_10))), (var_7))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    var_17 ^= (-((-(((/* implicit */int) (unsigned char)183)))));
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32256))) : (2325436927U))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) arr_4 [i_0])))))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_6 [10LL] [i_1] [i_0])) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) (signed char)-3)))), (((/* implicit */int) arr_5 [i_2]))))) : (((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_1]))) : ((~(875092735336534452LL)))))));
                    var_19 = arr_4 [i_2];
                    arr_7 [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_7) + (arr_1 [i_0 - 1])))) ? (((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) arr_4 [i_0 - 1])) : (((/* implicit */int) (signed char)7)))) : (((int) var_6))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1 - 1] [i_1 - 2] [i_2] [i_3] [i_4 + 1])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_9 [i_0] [i_0] [8ULL] [i_2] [i_3] [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_9 [i_4] [i_3] [(signed char)0] [i_1 - 3] [i_0] [i_0]), (((/* implicit */short) ((_Bool) arr_2 [i_0] [i_0]))))))) : (((((/* implicit */_Bool) ((arr_5 [i_2]) ? (((/* implicit */int) arr_8 [i_0] [i_1 + 2] [4] [(signed char)0] [(signed char)0])) : (((/* implicit */int) (unsigned short)38880))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_1)))));
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_2] [i_1] [i_4 + 2])) ? (max((((((/* implicit */_Bool) 3465196750029699121LL)) ? (arr_12 [8] [i_1] [8]) : (((/* implicit */int) (unsigned short)32279)))), (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_2 [i_4] [i_0 + 1])))))));
                            }
                        } 
                    } 
                }
                arr_14 [i_1] [i_0 + 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (((_Bool)1) ? (11996456510765054429ULL) : (((/* implicit */unsigned long long int) 224749071U))))) ? (min((var_7), (((/* implicit */unsigned long long int) (unsigned char)144)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)78))))) % (((/* implicit */unsigned long long int) arr_12 [i_1 + 2] [i_1] [0]))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_6 [i_1] [i_0 + 1] [i_0]))));
            }
        } 
    } 
}
