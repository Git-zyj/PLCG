/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11474
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
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 - 2]))))) << (((min((arr_0 [i_1 - 3]), (((/* implicit */int) (short)-6275)))) + (155676934)))));
                var_17 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 1700153630U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 3] [(_Bool)1]))) : (arr_3 [i_0] [i_0 + 1] [i_1 + 2]))), (((/* implicit */unsigned int) ((short) arr_3 [i_0] [i_0 + 1] [i_1 + 2])))));
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) && (((/* implicit */_Bool) 1073741823U))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)6274)))) ? (((((/* implicit */_Bool) (unsigned short)65524)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((unsigned char) (signed char)24)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(var_7)))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_15))))))))) : (min((min((2954568996624155864LL), (((/* implicit */long long int) (unsigned short)1482)))), (((/* implicit */long long int) var_12))))));
}
