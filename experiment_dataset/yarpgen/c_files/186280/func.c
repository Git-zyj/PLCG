/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186280
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) 4501703797099892072LL)) ? (((/* implicit */unsigned long long int) -4501703797099892072LL)) : (var_4))))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_4)))) || (((/* implicit */_Bool) min((15292651685655366433ULL), (var_0)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [4ULL] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((unsigned char) var_5))), (max((((/* implicit */long long int) var_16)), (arr_14 [i_0] [i_0] [i_0] [i_0])))));
                                var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) 4501703797099892072LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)127))))), (-4501703797099892098LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_11 [i_3] [i_3 + 1] [i_3 - 2] [12]), (((/* implicit */unsigned short) var_2)))))) : (((unsigned int) (signed char)-113))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (unsigned short)4740)))) ? (((/* implicit */long long int) 302628186U)) : (max((arr_14 [i_0] [i_0] [i_0] [i_2]), (var_18)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (var_19)))) ? (((((/* implicit */_Bool) (signed char)-127)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 1383073291U)))))) : (((/* implicit */unsigned long long int) ((int) var_10))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) min((2147483647ULL), (((/* implicit */unsigned long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_18))))), (min((var_16), (var_14))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        var_23 = ((/* implicit */_Bool) arr_5 [i_5]);
        arr_18 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (!(var_2))))))) ? (((/* implicit */int) max(((signed char)-41), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) == (arr_10 [i_5] [i_5] [i_5]))))))) : (((((/* implicit */_Bool) var_13)) ? (arr_1 [i_5]) : (arr_1 [i_5])))));
        arr_19 [i_5] = ((/* implicit */long long int) (-(((((/* implicit */int) arr_9 [i_5] [i_5] [(_Bool)1] [i_5] [i_5] [i_5])) & (((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))));
    }
}
