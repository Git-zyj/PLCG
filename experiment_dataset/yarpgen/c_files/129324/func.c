/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129324
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned short) (~((~(3366359840U)))));
                var_14 *= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) var_8)) << (((((/* implicit */int) arr_4 [i_0] [i_0 + 3] [i_0])) - (89)))))), (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_1 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_0 [i_0 + 2] [i_1 - 1])))));
                var_15 *= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) 4102294590U)), (((((/* implicit */_Bool) 1393782406808487282LL)) ? (801262038173061384ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0] [(unsigned char)7])))))) > (((((/* implicit */_Bool) 801262038173061401ULL)) ? (((/* implicit */unsigned long long int) 1526892384)) : (17026692167014220930ULL)))));
                var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0 - 1])) <= (((/* implicit */int) arr_1 [i_0 - 2]))))), (min((min(((unsigned short)1065), (((/* implicit */unsigned short) arr_4 [i_1] [i_1] [i_1 + 2])))), (((/* implicit */unsigned short) arr_2 [i_0]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) ((int) min((((/* implicit */int) (short)-24533)), (max((((/* implicit */int) var_8)), (679446247))))));
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((4583897890896793423LL), (((/* implicit */long long int) var_7))))) % (min((801262038173061369ULL), (((/* implicit */unsigned long long int) (short)9931)))))))));
}
