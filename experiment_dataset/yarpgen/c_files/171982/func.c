/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171982
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
    var_20 = (((+(((unsigned long long int) var_16)))) | (((/* implicit */unsigned long long int) var_8)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) max((arr_0 [i_1]), (((/* implicit */unsigned long long int) -2029521630)))));
            var_21 = max((((/* implicit */unsigned long long int) max((max((var_0), (((/* implicit */unsigned int) (short)-20667)))), (((/* implicit */unsigned int) (+(arr_4 [i_0] [i_1] [i_1]))))))), ((~(((unsigned long long int) 2199023255551ULL)))));
        }
        for (int i_2 = 1; i_2 < 23; i_2 += 1) 
        {
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_19)) >= (max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_2] [7])), (var_10)))));
            arr_9 [i_0] [19] = ((/* implicit */int) ((short) (-(arr_4 [i_2 - 1] [i_2 + 2] [i_2 - 1]))));
            var_23 = ((int) -22);
            arr_10 [i_0] [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) max((116792327U), (((/* implicit */unsigned int) -1592450662)))))));
        }
        var_24 = ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)20682))))));
        arr_11 [i_0] |= ((/* implicit */int) max(((+(arr_6 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) 4178174992U))));
        var_25 ^= ((/* implicit */int) max((max((((/* implicit */unsigned long long int) 4178174968U)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20667))) : (18446744073709551603ULL))))), (((/* implicit */unsigned long long int) max((arr_4 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (short i_3 = 2; i_3 < 15; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                {
                    var_26 = ((var_5) >> (((arr_16 [i_5]) - (2385689115U))));
                    var_27 ^= ((((/* implicit */_Bool) (short)-20677)) ? (((/* implicit */unsigned long long int) 313912841)) : (arr_0 [i_3 - 2]));
                }
            } 
        } 
        var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3 + 1]))));
        arr_21 [i_3] = ((/* implicit */unsigned long long int) (+(((unsigned int) arr_14 [i_3] [i_3 - 2]))));
        arr_22 [i_3] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_3 + 1]))));
        arr_23 [i_3] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_3 + 3] [i_3 - 1] [i_3]))));
    }
    var_29 = ((/* implicit */int) var_16);
    var_30 = max((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) (short)20682)) ? (((((/* implicit */_Bool) -1266911874)) ? (11881045772563982213ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13114))))) : (((/* implicit */unsigned long long int) var_15)))));
    var_31 = ((((/* implicit */_Bool) ((int) 66846720))) ? (var_5) : (var_15));
}
