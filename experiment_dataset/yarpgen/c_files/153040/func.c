/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153040
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11)))) <= (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 4 */
        for (long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) - (2124354591536981311ULL))));
            arr_6 [i_0] [i_0] = min((((/* implicit */long long int) ((16383U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)31)))))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_0 + 3]) : (arr_4 [i_1 + 1]))));
            var_14 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))));
        }
        for (unsigned short i_2 = 3; i_2 < 17; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_3 = 2; i_3 < 17; i_3 += 2) 
            {
                var_15 = max(((~(var_10))), (((/* implicit */unsigned int) arr_10 [i_0] [i_2 + 3])));
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_9))));
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 19; i_4 += 1) 
                {
                    for (signed char i_5 = 4; i_5 < 19; i_5 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((min((((/* implicit */long long int) arr_11 [i_3] [i_0 + 1] [i_2 - 1])), (4879902071731425647LL))) << (((((((/* implicit */_Bool) 4294950913U)) ? (arr_11 [i_3] [i_0 - 2] [i_2 - 3]) : (arr_11 [i_3] [i_0 - 1] [i_2 - 1]))) - (3350762209U))))))));
                            var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_15 [i_5] [(short)8] [i_3 + 1] [i_0])), (2124354591536981316ULL)))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_5 - 3] [i_5 - 2] [i_5]))))) > (((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_2 - 1] [i_2 + 1] [i_3] [i_4])))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) & (((/* implicit */int) arr_14 [i_0] [i_0 + 3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0 + 2] [i_0 + 3] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_13 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_13 [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 + 1]))))) : ((+(max((((/* implicit */unsigned long long int) var_10)), (2124354591536981313ULL)))))));
                    var_20 -= ((/* implicit */signed char) min((((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (arr_7 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) != (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_7])))))), (((unsigned char) (+(((/* implicit */int) var_11)))))));
                    var_21 = ((/* implicit */int) 4294967279U);
                }
                var_22 = ((/* implicit */unsigned long long int) 32037644U);
            }
            arr_22 [i_0] [i_2] [i_2] = ((/* implicit */short) var_7);
            var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((~(16322389482172570296ULL))), (13893010615114786352ULL))))));
        }
        for (unsigned char i_8 = 2; i_8 < 18; i_8 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned int) ((unsigned short) arr_5 [i_8 - 1] [i_0] [i_0]));
            arr_25 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_21 [i_0 - 2] [i_0]);
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_24 [i_0] [i_8 + 2]))))) < (((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 + 1] [i_0 + 1])) ? (var_6) : (arr_5 [i_0 - 1] [i_0 - 1] [i_0 + 2])))));
        }
        for (unsigned char i_9 = 2; i_9 < 18; i_9 += 2) /* same iter space */
        {
            arr_30 [i_0] [i_0] = ((/* implicit */signed char) max((var_6), (var_9)));
            var_26 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_26 [i_0] [i_9] [i_0])), (2124354591536981313ULL)))))) || (((/* implicit */_Bool) arr_1 [(unsigned char)1] [(unsigned char)1]))));
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) 16383U))));
        }
        arr_31 [i_0] = ((/* implicit */short) (+(((((/* implicit */int) var_7)) + (((/* implicit */int) var_11))))));
        var_28 = (~(min((18446744073709551614ULL), (((/* implicit */unsigned long long int) var_5)))));
    }
    var_29 = ((/* implicit */signed char) ((unsigned int) ((719960559U) >> (((var_5) - (2608599535U))))));
}
