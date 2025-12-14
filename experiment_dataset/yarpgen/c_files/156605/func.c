/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156605
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
    var_16 = (short)1639;
    var_17 = ((/* implicit */short) max((var_17), ((short)-1649)));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [10LL] [i_0] = ((/* implicit */short) (((!(((arr_4 [i_0 - 3]) <= (arr_4 [i_1]))))) || (((/* implicit */_Bool) (+((-(((/* implicit */int) (short)1639)))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_1])))), (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) var_14))))) == (min((-836681447779255049LL), (arr_4 [i_0]))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
}
