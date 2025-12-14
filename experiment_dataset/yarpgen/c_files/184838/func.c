/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184838
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
    for (short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_6 [i_0 + 1] [i_0 - 1] [8] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(824633720832LL)))) ? (((((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_0])), ((unsigned char)159)))) - (((((/* implicit */int) var_15)) << (((arr_3 [i_0]) - (709714126U))))))) : (((/* implicit */int) ((unsigned char) (unsigned char)169)))));
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)214)))))));
                arr_7 [i_0] [i_1] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0 + 1])) ? (arr_2 [i_0] [i_1] [i_1]) : (-824633720843LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_0])) || (((/* implicit */_Bool) (unsigned char)74))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_0);
    var_22 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_17))))), (var_7)))));
    var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_5))));
    var_24 = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_4)) / (((((/* implicit */int) var_5)) / (((/* implicit */int) (unsigned char)159))))))));
}
