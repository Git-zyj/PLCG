/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189280
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
    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (max((var_11), (((/* implicit */unsigned long long int) (_Bool)0)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_13 [(unsigned short)2] [9LL] [i_4] = (!((!(((/* implicit */_Bool) 4044378815083427644ULL)))));
                                arr_14 [i_0] = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 3076124766406247331ULL)) ? (4044378815083427644ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_3])))))))) ? (14402365258626123971ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((4044378815083427645ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_5 = 1; i_5 < 10; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) ((max((((/* implicit */int) (_Bool)0)), (2147483647))) / (((((/* implicit */_Bool) arr_22 [i_1] [i_1 + 3] [i_5] [i_5] [i_5 - 1] [i_7 - 1])) ? (arr_23 [i_1] [i_1 + 2] [i_5]) : (((/* implicit */int) (unsigned short)0))))));
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_5 + 2] [i_1 - 1] [i_6])), (arr_22 [i_0] [i_5 - 1] [i_1 + 1] [i_1] [i_7] [i_7 - 2])))) ? (((((/* implicit */_Bool) -445562168)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_22 [i_0] [i_5 + 2] [i_1 - 1] [i_0] [i_0] [i_7 - 2]))) : ((-(arr_22 [i_7 + 1] [i_5 + 2] [i_1 - 1] [8ULL] [i_1 - 1] [i_7 + 1])))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */long long int) ((unsigned short) ((((unsigned long long int) 3351401024U)) & (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (var_7)))))));
                arr_25 [5U] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) >= (841934390U))))))), (((((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned long long int) ((var_12) ? (var_1) : (((/* implicit */long long int) var_8))))) : ((~(4599511157014020440ULL)))))));
            }
        } 
    } 
}
