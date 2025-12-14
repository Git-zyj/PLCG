/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140280
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (var_5)))) : (((((/* implicit */int) (unsigned short)20239)) / (((/* implicit */int) var_13))))))));
                var_20 = ((/* implicit */long long int) max((var_20), (max((((/* implicit */long long int) var_18)), (-7824653657566783110LL)))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_11);
}
