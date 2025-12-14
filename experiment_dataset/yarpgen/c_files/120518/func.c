/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120518
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
    var_12 |= ((/* implicit */unsigned char) ((((/* implicit */int) max((var_8), (((var_7) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) >> (((/* implicit */int) (((~(var_4))) != ((~(1162040092U))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_7 [(signed char)16] [i_1] [i_1] |= ((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) arr_5 [i_0 - 1] [i_0])))));
                var_13 *= ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (+(var_1)))))) : (min((((var_4) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (_Bool)1)))));
                var_14 += min((var_5), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0])))))))));
            }
        } 
    } 
    var_15 |= ((/* implicit */unsigned int) var_6);
    var_16 = ((/* implicit */signed char) (~(max((max((var_5), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) var_1))))));
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
}
