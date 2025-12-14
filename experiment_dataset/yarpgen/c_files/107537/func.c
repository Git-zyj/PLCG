/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107537
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
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
    var_21 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)4416)), (5965153201905106479LL)))))) ? (max((((((/* implicit */_Bool) -1401393122)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_18))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned short) min((((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) 345408015U)) : (-7832655405695763087LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -1401393122)) ? (-1401393122) : (arr_3 [i_0] [(unsigned char)0]))))))), (var_15)));
                arr_5 [i_0 + 4] [i_0 + 2] [i_0] = ((/* implicit */unsigned char) (+(min((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), ((~(((/* implicit */int) var_5))))))));
                arr_6 [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-5010))) : (arr_0 [i_1])))) ? (((/* implicit */long long int) min((arr_3 [i_0] [i_1 - 1]), (((/* implicit */int) (unsigned short)15632))))) : (min((((/* implicit */long long int) arr_4 [10LL] [7LL] [i_0])), (2902518094509191500LL))))), (((/* implicit */long long int) ((arr_1 [i_0 - 1]) | (arr_1 [i_0 - 2]))))));
            }
        } 
    } 
}
