/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102946
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
    var_16 = ((/* implicit */unsigned int) (~(min((var_2), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)24174))) / (1518781992U))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) var_5)) / (((/* implicit */int) var_7)))), (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) (short)-10618)) ? (2617017371U) : (2097152U)))));
        var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 2])) ? (1023U) : (arr_0 [i_0 - 3] [i_0 - 2]))) < (((arr_0 [i_0 - 2] [i_0 - 1]) / (4294967295U)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) (short)1023);
            var_20 = ((/* implicit */short) ((arr_0 [i_1] [i_2]) < (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
        }
        var_21 = ((/* implicit */unsigned int) ((long long int) ((unsigned char) (unsigned char)59)));
    }
    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    {
                        arr_18 [i_6] [i_5] [i_3] = ((/* implicit */short) max((((/* implicit */long long int) max(((-(arr_4 [i_6]))), (max((arr_10 [i_5]), (((/* implicit */unsigned int) var_8))))))), (max((((((/* implicit */_Bool) 6428265683881723450LL)) ? (var_0) : (8960461364405488886LL))), (((/* implicit */long long int) var_15))))));
                        var_22 = ((/* implicit */unsigned char) max((min((max((9134030512985828738LL), (((/* implicit */long long int) 3496034321U)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)20)), (4294967272U)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_3] [17U]) / (var_12)))) ? (((((/* implicit */_Bool) var_13)) ? (var_4) : (1U))) : (arr_16 [i_4] [i_4] [i_5] [i_4] [i_3] [i_3]))))));
                        arr_19 [i_6] [i_5] [i_4] = ((((/* implicit */_Bool) max((arr_8 [i_3] [i_4]), (((/* implicit */short) (unsigned char)0))))) ? (((((/* implicit */_Bool) max((var_6), ((short)15441)))) ? (((((/* implicit */_Bool) (unsigned char)115)) ? (1213907320U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))))) : (((((/* implicit */_Bool) var_10)) ? (arr_12 [i_3] [i_4] [(unsigned char)9] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)4325))))));
                        var_23 = ((/* implicit */short) 4294967272U);
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */short) ((unsigned int) (~(((long long int) var_5)))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
    {
        var_25 = var_1;
        var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (((/* implicit */short) var_5)))))) : (max((2047U), (1023U))))))));
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_21 [i_7]))))) : (max((((/* implicit */unsigned int) (short)10617)), (5U)))))) && (((/* implicit */_Bool) ((((((/* implicit */int) (short)32738)) < (((/* implicit */int) var_5)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)32738))))) : (((((/* implicit */_Bool) arr_20 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (3609982104U))))))));
        var_28 = ((/* implicit */short) min((4326833909624422172LL), (((/* implicit */long long int) (short)10619))));
        var_29 = ((/* implicit */short) min((1017248511U), (((/* implicit */unsigned int) var_15))));
    }
}
