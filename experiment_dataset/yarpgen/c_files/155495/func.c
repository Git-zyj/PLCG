/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155495
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
    var_10 = ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 4; i_2 < 13; i_2 += 1) 
                {
                    var_11 -= ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) ((12963912289304753931ULL) == (12367724609131415900ULL))))) ^ ((~(-3009390403804694117LL))))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
                    var_12 = ((/* implicit */unsigned int) (unsigned short)43709);
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)57874)), (3009390403804694116LL)))) && ((!(((/* implicit */_Bool) (unsigned short)9))))));
                    var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned int) arr_1 [i_1 + 2] [i_1]))), (arr_1 [i_0] [i_0])));
                    arr_8 [i_1] [(unsigned short)4] = ((((4294967287U) / (((/* implicit */unsigned int) ((/* implicit */int) min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_6)))))))) * (((unsigned int) (unsigned short)61280)));
                }
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_2 [i_0] [i_1 + 2])))) ? (((unsigned long long int) ((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63653)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)37809)) ? (((/* implicit */int) (unsigned short)17)) : (((/* implicit */int) var_5)))))));
                var_15 = ((/* implicit */long long int) max(((-(((/* implicit */int) arr_5 [i_1 - 1] [i_1])))), (((/* implicit */int) max((arr_5 [7LL] [i_1 + 2]), (max((var_5), ((unsigned short)9))))))));
                arr_9 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)39199))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65527))) != (12963912289304753920ULL)))), (((signed char) (unsigned short)9))))) ? (((max((((/* implicit */unsigned long long int) (unsigned short)37297)), (var_4))) + (((var_0) / (var_4))))) : (var_4)));
}
