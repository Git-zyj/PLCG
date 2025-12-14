/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136868
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            {
                var_10 -= ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) arr_3 [i_0])) ? (16981196122020447250ULL) : (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) max((arr_5 [i_1 - 3] [i_0]), (7127024260261852395LL)))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_1))))));
                arr_6 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) (short)1023)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (max((((var_4) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16189))))), (((((/* implicit */long long int) -2644580)) - (-9029736951880863642LL))))));
                arr_7 [i_1] [i_1] = ((/* implicit */long long int) (-((-((-(var_3)))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_5))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_7)))))))) : (((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_5))))))))));
    var_12 += ((/* implicit */_Bool) 7127024260261852408LL);
    var_13 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */long long int) var_9))))))))));
}
