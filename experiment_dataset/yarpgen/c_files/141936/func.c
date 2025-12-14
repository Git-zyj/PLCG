/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141936
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) (!(max((arr_0 [i_0]), (arr_0 [i_0])))));
        arr_2 [i_0] = ((_Bool) (+((+(((/* implicit */int) (_Bool)1))))));
    }
    var_16 &= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))) : (max((((/* implicit */unsigned long long int) (signed char)-28)), (var_4))))), (((/* implicit */unsigned long long int) var_1))));
    var_17 = (+(((/* implicit */int) ((_Bool) var_0))));
    /* LoopSeq 4 */
    for (signed char i_1 = 2; i_1 < 21; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) + (((/* implicit */int) min((arr_4 [i_1]), (arr_4 [i_1]))))))) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) ((_Bool) ((unsigned long long int) var_1))))));
        arr_6 [i_1] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_4 [i_1 - 2])), (arr_3 [i_1 - 2] [i_1 - 1]))), (((/* implicit */unsigned long long int) ((signed char) var_0)))));
        var_18 = ((/* implicit */signed char) (!(((_Bool) var_14))));
        arr_7 [i_1] = (~(((max((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1]))) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            arr_10 [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_9 [i_1])), (((arr_8 [i_1]) ? (arr_3 [i_1 - 2] [i_1 + 1]) : (((((/* implicit */_Bool) arr_3 [i_2] [i_1])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((((/* implicit */int) max((arr_11 [(signed char)14] [i_2] [i_3]), (arr_9 [i_1])))) & ((~(((/* implicit */int) var_14)))))) > ((+((-(461942861))))))))));
                var_20 = 624365441849616927ULL;
            }
            var_21 = ((/* implicit */signed char) ((((/* implicit */int) min((arr_12 [i_1 - 2] [i_2 + 1]), (arr_12 [i_1 - 1] [i_2 + 1])))) - (((((/* implicit */_Bool) arr_12 [i_1 - 2] [i_2 + 1])) ? (((/* implicit */int) arr_12 [i_1 - 1] [i_2 + 1])) : (((/* implicit */int) var_7))))));
        }
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_15 [i_4] [i_4] = (-(max((arr_3 [i_4] [i_4]), (arr_3 [i_4] [i_4]))));
        var_22 = ((/* implicit */unsigned long long int) -1554836077);
        arr_16 [i_4] [14ULL] |= arr_8 [i_4];
    }
    for (signed char i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            arr_22 [i_6] [i_5] [i_6] = ((/* implicit */short) ((((((/* implicit */int) var_7)) + (461942852))) >> (min((((var_12) >> (((1554836081) - (1554836047))))), (((/* implicit */unsigned long long int) min((881180775), (((/* implicit */int) (_Bool)1)))))))));
            arr_23 [i_5] [i_6] [i_6] = (_Bool)1;
        }
        var_23 |= ((/* implicit */_Bool) min((((((/* implicit */int) min((var_9), (var_7)))) ^ ((~(((/* implicit */int) arr_18 [(signed char)2])))))), ((((~(((/* implicit */int) arr_21 [i_5])))) & (((/* implicit */int) min((arr_17 [(signed char)2]), (((/* implicit */signed char) arr_19 [i_5] [i_5] [i_5])))))))));
        var_24 = ((/* implicit */unsigned long long int) (!((!((!((_Bool)1)))))));
        var_25 *= (((-(((/* implicit */int) arr_18 [(short)20])))) > (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (18446744073709551615ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20827)))))));
    }
    for (signed char i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) max((((/* implicit */signed char) ((_Bool) arr_17 [8]))), (max((arr_17 [(signed char)2]), ((signed char)-126))))))));
        var_27 = ((((/* implicit */int) max((((signed char) (_Bool)1)), (((/* implicit */signed char) (_Bool)1))))) != (((/* implicit */int) (_Bool)1)));
    }
}
