/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133492
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
    var_17 = ((/* implicit */signed char) ((unsigned long long int) min(((-(var_13))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))))));
    var_18 = ((/* implicit */long long int) var_8);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) ((unsigned int) min((arr_0 [i_0 + 1] [i_1 + 3]), (arr_0 [i_0 + 2] [i_1 + 1]))));
                    arr_6 [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_0 [i_1 - 1] [i_2]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21))))) ? (((((/* implicit */_Bool) arr_0 [i_2] [i_1])) ? (arr_2 [(unsigned short)12] [i_1] [i_2]) : (((/* implicit */unsigned long long int) arr_0 [i_2] [(signed char)6])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1 + 4] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21))) : (arr_3 [i_0 + 2] [i_1] [i_2]))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)242)), (arr_1 [i_1]))))) : (min((((((/* implicit */_Bool) arr_5 [17U] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-69))) : (arr_3 [i_0] [i_0 + 1] [i_0]))), ((-(arr_3 [i_1 - 3] [i_1] [i_2])))))));
                }
            } 
        } 
        arr_7 [10U] [7ULL] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)240)) == (((/* implicit */int) ((var_16) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48602)))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)15)), (14385931359797701669ULL)))) ? (((/* implicit */unsigned long long int) (+(2300379966U)))) : ((+(7891548983923000241ULL))))) : (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (min((((/* implicit */unsigned long long int) -14LL)), (665553902196258021ULL))) : (((/* implicit */unsigned long long int) ((((arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 2]) + (9223372036854775807LL))) << (((11578538471673413849ULL) - (11578538471673413849ULL))))))))));
    }
}
