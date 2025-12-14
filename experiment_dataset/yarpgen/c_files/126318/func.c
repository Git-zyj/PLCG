/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126318
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
    var_18 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(arr_6 [i_1])))) <= (((unsigned long long int) 2147483647))));
                arr_7 [i_1] [i_0] [i_1] = ((/* implicit */int) ((4199840670U) <= (((/* implicit */unsigned int) -2147483647))));
                arr_8 [i_1] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0])))))))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (-2147483647 - 1))), (95126626U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) 95126626U)))))));
            }
        } 
    } 
}
