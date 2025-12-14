/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125913
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
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
        var_20 -= ((/* implicit */signed char) arr_0 [i_0] [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 1; i_2 < 8; i_2 += 1) 
        {
            arr_7 [5U] = ((/* implicit */signed char) var_8);
            var_21 = ((((/* implicit */_Bool) ((signed char) min((var_11), (arr_2 [i_1] [i_2 + 1]))))) ? (4177920U) : (((unsigned int) 2305479811U)));
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 4177920U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))) : (3437019130U))) << (((/* implicit */int) (!(((/* implicit */_Bool) 3437019151U)))))))) ? (694832514U) : (4290789382U)));
            var_23 = var_17;
        }
        for (unsigned int i_3 = 3; i_3 < 9; i_3 += 4) 
        {
            arr_10 [i_3 - 2] = ((/* implicit */signed char) (-(((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_3 - 1] [i_1])) && (((/* implicit */_Bool) var_3))))) | (((((/* implicit */int) arr_8 [i_1] [i_3 - 2] [i_3 - 2])) << (((/* implicit */int) arr_6 [i_1]))))))));
            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) ((857948155U) + (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
        }
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) var_11);
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [(signed char)11])) ? (((((/* implicit */_Bool) var_6)) ? (arr_4 [i_4]) : (arr_4 [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_9 [i_1]) >= (arr_0 [i_1] [i_4])))))));
        }
        arr_15 [i_1] = ((/* implicit */unsigned int) var_16);
        arr_16 [(signed char)5] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2548348098U)) ? (1989487485U) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 3437019141U))))))) && (((/* implicit */_Bool) (signed char)-1))));
        arr_17 [i_1] = ((/* implicit */signed char) max((((((unsigned int) var_14)) + (max((2305479805U), (857948144U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_1])))))));
        arr_18 [i_1] &= min((((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_9 [i_1]) : (((2147483648U) / (1560737055U))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_6 [i_1]))))) <= (((((/* implicit */_Bool) arr_9 [i_1])) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1])))))))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 3; i_5 < 8; i_5 += 2) 
    {
        arr_21 [(signed char)2] |= ((/* implicit */signed char) ((var_15) / (((/* implicit */unsigned int) (+(((/* implicit */int) var_7)))))));
        arr_22 [i_5] [i_5] = ((unsigned int) ((unsigned int) arr_8 [i_5] [i_5] [i_5 - 2]));
    }
    var_25 = ((/* implicit */signed char) max((var_15), (((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) var_13))))))));
    var_26 = ((/* implicit */signed char) ((unsigned int) ((signed char) 2305479806U)));
    var_27 = ((/* implicit */unsigned int) var_1);
}
