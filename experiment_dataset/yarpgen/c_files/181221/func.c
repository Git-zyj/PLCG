/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181221
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
    var_14 = ((/* implicit */short) var_3);
    var_15 = ((((/* implicit */_Bool) min((min((var_1), (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))))))) ? (((/* implicit */unsigned int) min(((-(((/* implicit */int) var_7)))), (((/* implicit */int) var_0))))) : (max((3663791026U), (((/* implicit */unsigned int) 82269422)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1 - 2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((min((arr_1 [7ULL]), (((/* implicit */long long int) var_9)))) == (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [(unsigned short)20]))))))))));
                var_16 *= ((/* implicit */long long int) (~(((((/* implicit */int) arr_3 [i_0 - 1] [i_0] [i_0 - 1])) & (((/* implicit */int) arr_3 [i_0 - 1] [i_0] [i_0 - 1]))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_10)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))))) || (((((/* implicit */int) arr_2 [i_0 - 1])) > (((/* implicit */int) arr_0 [i_0 + 1]))))));
            }
        } 
    } 
}
