/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120133
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
    var_11 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))), ((~(var_8)))))) || (((/* implicit */_Bool) var_10))));
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (_Bool)1))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) 7064468127821837555LL);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((arr_0 [i_0 + 4] [i_0]) ? (((/* implicit */long long int) arr_1 [i_0])) : (7064468127821837555LL))), (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))))) ? (((/* implicit */unsigned long long int) ((((min((-7064468127821837555LL), (((/* implicit */long long int) 3758096384U)))) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1))))) : (((((144080003703767040ULL) ^ (((/* implicit */unsigned long long int) arr_8 [i_3] [i_0] [16U] [i_0])))) >> (((/* implicit */int) (unsigned char)0))))));
                        arr_10 [i_0] [i_1 + 2] [i_1 + 2] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) -7064468127821837532LL)) ? (arr_8 [i_0 + 3] [i_0 + 3] [i_1 - 1] [i_1 + 2]) : (arr_8 [i_0 - 2] [i_0] [i_1 + 1] [i_1 + 2])))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_4 = 2; i_4 < 17; i_4 += 4) 
                    {
                        arr_14 [i_0] [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) 720760160U));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((+(arr_9 [17U] [i_2] [i_1 - 1]))) | (((arr_4 [i_0 - 2]) >> (((arr_4 [i_0 - 2]) - (2858357340U)))))));
                            arr_19 [i_0] [i_1] [i_1] [i_0] [i_4 - 1] [i_5] = ((/* implicit */unsigned char) 4256891516U);
                            arr_20 [i_4] [i_4] [i_0] [i_2] [i_5] = arr_8 [i_0 + 3] [i_1] [i_0 + 3] [i_1];
                        }
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 7064468127821837549LL)) % (17191294209604306063ULL)));
                    }
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 2; i_7 < 18; i_7 += 3) /* same iter space */
                        {
                            var_16 = max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0 - 2])), (((arr_21 [i_0 - 1] [i_0 - 1] [i_6] [i_0 - 1]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_2] [i_0] [i_7])) : (((/* implicit */int) (_Bool)0))))))));
                            arr_26 [i_0] = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_7]);
                            var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(2632745321134867710ULL)))) ? (((/* implicit */unsigned long long int) ((long long int) arr_3 [i_0] [i_2] [i_6]))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_0])) ? (arr_3 [i_0 - 2] [i_2] [i_7 - 1]) : (((/* implicit */unsigned long long int) 7064468127821837561LL))))));
                        }
                        for (unsigned long long int i_8 = 2; i_8 < 18; i_8 += 3) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned int) max((arr_3 [i_8] [i_0] [i_8 - 1]), (((((/* implicit */_Bool) arr_24 [i_0] [i_1 - 1] [i_8 + 1])) ? (arr_3 [i_8] [i_0] [i_8 - 2]) : (((/* implicit */unsigned long long int) 7064468127821837567LL))))));
                            var_19 = ((/* implicit */unsigned int) (~(((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) % (((((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_0])) ? (-7064468127821837555LL) : (((/* implicit */long long int) 720760160U))))))));
                        }
                        var_20 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 3329956459U)) ? (min((((/* implicit */unsigned long long int) arr_9 [i_1] [i_2] [i_6])), (arr_22 [i_2] [i_1] [(_Bool)1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_13 [i_0 + 4] [i_0] [0LL] [i_0] [i_0 - 2] [i_0]) == (1403077806U))))))));
                        var_21 = ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_15 [i_0 + 1] [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 2]), (arr_15 [i_0 - 3] [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1] [i_1 + 1]))))) == (arr_9 [i_0] [i_1 - 2] [i_2]));
                    }
                }
            } 
        } 
    } 
}
