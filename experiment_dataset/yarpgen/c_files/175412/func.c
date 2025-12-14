/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175412
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */long long int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))))) % ((-(((((/* implicit */long long int) ((/* implicit */int) var_10))) * (-1LL)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0 + 1])) % (((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) arr_0 [i_1])))))))));
                var_17 = ((/* implicit */_Bool) min((var_17), ((!(((/* implicit */_Bool) ((9016148744889548710ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))))));
            }
        } 
    } 
    var_18 = (!(((/* implicit */_Bool) 521633499U)));
    var_19 = min((((/* implicit */unsigned long long int) ((int) 10693763801330608912ULL))), (var_6));
}
