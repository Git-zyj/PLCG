/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173115
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((unsigned int) var_4))))), (((((/* implicit */_Bool) ((unsigned int) 281474968322048LL))) ? (((34902897112121344ULL) + (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) ((short) 4294967295U))), (max((((/* implicit */unsigned short) (short)508)), (arr_0 [i_0])))))) + (((/* implicit */int) ((max((((/* implicit */unsigned long long int) 2097151U)), (var_1))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (-1152921504606846976LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)13))))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) arr_3 [i_0] [i_0])) : (var_9)))), (max((((/* implicit */unsigned long long int) (signed char)-1)), (var_7)))))));
        var_17 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_13)), (((((((/* implicit */_Bool) 4294967295U)) ? (var_6) : (var_1))) + (((((/* implicit */_Bool) var_15)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25)))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        arr_10 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1]))) & (var_6)))) ? (((((/* implicit */_Bool) var_14)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)1)))))));
        arr_11 [i_1] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 3025148104U)) ? (((/* implicit */int) (_Bool)1)) : (366072235)))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        arr_14 [i_2] [i_2] = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_3))))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (4292870129U)))) || (((8589934591LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)-48))))))))));
    }
    /* LoopNest 3 */
    for (short i_3 = 1; i_3 < 14; i_3 += 3) 
    {
        for (short i_4 = 4; i_4 < 13; i_4 += 1) 
        {
            for (unsigned int i_5 = 4; i_5 < 14; i_5 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_2)))))), (((((/* implicit */_Bool) (short)-32742)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_4]))))));
                    arr_21 [i_4] = ((/* implicit */int) 2097136U);
                    arr_22 [i_3] [i_4] [i_5] [i_5] |= ((/* implicit */short) (-((+((-(var_6)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            {
                                arr_29 [i_3] [i_4] [i_5 - 2] [i_5] [i_6] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((2097128U) + (min((((/* implicit */unsigned int) (short)32767)), (2578741263U))))))));
                                var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_25 [i_3] [i_3] [i_3 - 1] [i_3] [i_3]), (arr_25 [i_3] [i_3] [i_3 + 1] [i_5] [i_6]))))));
                                var_21 = ((/* implicit */long long int) min(((~(var_13))), (((/* implicit */unsigned int) var_2))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
