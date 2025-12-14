/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184292
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
    var_20 = ((/* implicit */long long int) ((signed char) var_4));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            {
                var_21 |= ((/* implicit */unsigned int) var_8);
                arr_7 [i_0] [i_1] [(unsigned char)2] = ((/* implicit */unsigned long long int) -8031481888366215357LL);
                var_22 = ((/* implicit */int) max((((/* implicit */unsigned int) ((_Bool) arr_2 [i_0] [i_1]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_5 [(signed char)7]))))) ? (min((1572718970U), (1572718969U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_19))))))));
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned int) var_5))), (((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))));
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(max((2722248327U), (((/* implicit */unsigned int) (unsigned short)5249))))))) % (max((arr_6 [i_1 + 2] [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_0] [(unsigned char)8]) > (((/* implicit */unsigned long long int) var_1)))))))));
            }
        } 
    } 
}
