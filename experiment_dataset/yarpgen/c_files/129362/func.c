/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129362
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
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_0] [10LL] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [(unsigned short)8])) ? (((/* implicit */int) arr_2 [(signed char)4] [(signed char)4])) : (((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_0 + 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))))) ? (((/* implicit */int) ((short) var_3))) : ((-(((/* implicit */int) arr_2 [(_Bool)1] [(_Bool)1]))))));
                arr_6 [(signed char)16] |= arr_0 [i_0] [(unsigned short)2];
                arr_7 [6U] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 1] [(unsigned char)6])) : (((/* implicit */int) var_4)))))));
                arr_8 [i_0] [(unsigned short)6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1 - 1])) ? (arr_4 [i_0 - 1] [i_1 + 2]) : (arr_4 [i_0 + 1] [i_1 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)242))) > (34359738368LL)))) != (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)103))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_0] [(unsigned short)0])) : (((/* implicit */int) arr_2 [(short)20] [i_1 + 1]))))) ? (((((/* implicit */_Bool) arr_0 [i_1 - 1] [(_Bool)1])) ? (arr_4 [i_0] [i_0 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1] [(_Bool)0])))))));
                arr_9 [i_0] [i_1 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 1])) ? (((/* implicit */int) ((var_7) > (((/* implicit */int) var_4))))) : (((((/* implicit */int) (signed char)27)) >> (((((/* implicit */int) (unsigned char)242)) - (240)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 2])) ? (arr_4 [i_0 - 2] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0 + 2])))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))) : (max((var_7), (((/* implicit */int) arr_3 [i_0])))))) : (((/* implicit */int) (!((((_Bool)1) && (((/* implicit */_Bool) (unsigned char)13)))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (var_1)))) ? (((((/* implicit */_Bool) var_7)) ? (var_7) : (var_1))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (var_1)))))) ? (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_0)))))) : ((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))))));
    var_13 = ((/* implicit */unsigned int) ((_Bool) var_8));
}
