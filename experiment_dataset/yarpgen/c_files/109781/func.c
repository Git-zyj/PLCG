/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109781
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
    var_12 += ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_4))))) >> (((1896741606U) - (1896741583U))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 7; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_0] [i_0] [i_0])) ? (2398225665U) : (2398225680U)))) ? (((unsigned long long int) 1896741615U)) : (((/* implicit */unsigned long long int) ((var_5) * (((/* implicit */long long int) 0U)))))))) ? (min((min((((/* implicit */unsigned long long int) arr_2 [i_0])), (18446744073709551603ULL))), (((/* implicit */unsigned long long int) ((2ULL) == (((/* implicit */unsigned long long int) 0U))))))) : (((/* implicit */unsigned long long int) ((4294967286U) >> (((((/* implicit */int) (short)32749)) - (32723))))))));
                    arr_8 [i_0] [6LL] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */short) min((((((((/* implicit */int) min((((/* implicit */short) var_7)), ((short)-32755)))) + (2147483647))) << (((((13ULL) ^ (((/* implicit */unsigned long long int) arr_2 [i_0])))) - (304164587ULL))))), (((/* implicit */int) ((_Bool) arr_3 [i_1])))))) : (((/* implicit */short) min((((((((/* implicit */int) min((((/* implicit */short) var_7)), ((short)-32755)))) + (2147483647))) << (((((((13ULL) ^ (((/* implicit */unsigned long long int) arr_2 [i_0])))) - (304164587ULL))) - (3625316096ULL))))), (((/* implicit */int) ((_Bool) arr_3 [i_1]))))));
                    var_14 = ((/* implicit */int) var_7);
                    arr_9 [i_0] [i_0] = ((/* implicit */int) min((18446744073709551603ULL), (((/* implicit */unsigned long long int) (_Bool)0))));
                }
            } 
        } 
    } 
}
