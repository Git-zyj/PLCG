/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122213
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) >> ((+(((/* implicit */int) var_9))))));
    var_20 = ((/* implicit */short) (((!((!(((/* implicit */_Bool) var_8)))))) ? (((/* implicit */unsigned int) 665173652)) : (max((((/* implicit */unsigned int) min((-665173642), (var_18)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_7)) : (var_12)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) (_Bool)0);
                    arr_7 [i_1] [i_1] [i_0] = var_16;
                    var_22 = var_12;
                }
            } 
        } 
        var_23 = (+(((/* implicit */int) ((short) -3313467517806671532LL))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_4)) & (var_16)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4] [i_3] [i_3]))) : (max((((/* implicit */unsigned int) (short)-1)), (var_2)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4] [i_4] [i_4])))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_4] [i_4] [i_4] [i_4]))))))))) : ((+(arr_8 [i_4]))));
            var_25 = ((/* implicit */unsigned int) ((int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) + (3506027466U)))));
        }
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                arr_18 [i_6] [i_3] [i_3] = (-(((unsigned int) arr_14 [i_3] [i_5] [6LL])));
                arr_19 [i_6] [i_5] [i_5] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3] [i_5])) ? (((/* implicit */int) ((((/* implicit */long long int) 2116880738)) <= (var_15)))) : (((/* implicit */int) var_5))));
                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3])) ? ((~(var_16))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (2116880738) : (var_18))))));
                arr_20 [i_6] [i_3] = var_6;
                var_27 = ((var_9) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 482909180U)) ? (arr_10 [i_3] [i_5] [i_5]) : (((/* implicit */int) (_Bool)0))))));
            }
            for (unsigned int i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                var_28 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_3] [i_5])), (min((((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (arr_8 [i_5]) : (((/* implicit */unsigned int) arr_11 [(short)6])))), (arr_8 [i_3])))));
                arr_24 [i_3] [i_3] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((-974493089896914916LL), (-974493089896914916LL)))) ? (((/* implicit */long long int) var_7)) : (max((max((((/* implicit */long long int) var_0)), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_7] [i_7] [i_7] [i_7])))))))));
                var_29 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) min((60529631U), (((/* implicit */unsigned int) 2147483647))))) ? (arr_17 [i_3] [i_5] [i_3]) : (arr_12 [i_5]))));
            }
            var_30 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_9 [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))) : (min((arr_12 [i_3]), (((/* implicit */unsigned int) var_7))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_3] [i_3] [i_3]))) : (((((/* implicit */_Bool) min((var_18), (var_18)))) ? (max((((/* implicit */unsigned int) var_10)), (60529627U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -665173653)) || (((/* implicit */_Bool) 482909180U)))))))));
        }
        var_31 = ((/* implicit */int) min((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_3] [i_3]))))), (((((/* implicit */unsigned int) var_4)) - (var_2))))), (((/* implicit */unsigned int) ((int) ((60529627U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [i_3] [i_3] [i_3])))))))));
    }
}
