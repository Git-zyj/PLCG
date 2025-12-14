/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129725
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
    var_20 -= ((/* implicit */unsigned int) var_5);
    var_21 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) min((var_18), (((/* implicit */unsigned char) var_14))))) || ((!(((/* implicit */_Bool) var_5)))))))));
    var_22 = ((/* implicit */unsigned int) (unsigned short)31557);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 7; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                var_23 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1)))) : (arr_3 [i_0 - 3] [i_0 - 3])))));
                var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (short)29601)))));
                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) != ((-(766074613))))))));
                var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_5 [i_0 + 3] [6U])) : (((/* implicit */int) arr_4 [8ULL] [8ULL]))))) ? (((/* implicit */int) ((_Bool) var_0))) : ((-(((/* implicit */int) arr_1 [i_0 - 2])))))))));
            }
        } 
    } 
}
