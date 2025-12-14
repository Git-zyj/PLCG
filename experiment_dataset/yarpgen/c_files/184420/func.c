/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184420
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
    var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (1103424138916387834ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4))))))));
    var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) > (8953119584956106253ULL)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) 1153857826U)) - (arr_0 [i_1]))), (((/* implicit */unsigned long long int) (+(arr_5 [i_0]))))))) ? (((((/* implicit */int) arr_4 [i_0] [i_1])) - (((/* implicit */int) arr_4 [i_1] [i_1])))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -3848901246348656190LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2194))) : (8953119584956106253ULL)))))));
                var_13 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-3848901246348656187LL)))), ((~(var_1))))) ^ (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) -497056221)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_5))))))));
            }
        } 
    } 
}
