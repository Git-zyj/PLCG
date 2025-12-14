/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116297
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
    var_11 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) min((3169603931U), (((/* implicit */unsigned int) var_2))))) % (max((0ULL), (var_7))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-29161))) / (3169603933U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_6))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 8; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (-(((((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1125363350U))) - ((-(1125363364U))))))))));
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) 969850537);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) -969850537)) || (((/* implicit */_Bool) (signed char)0))));
                        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((-1341608335) != (((/* implicit */int) ((short) arr_5 [i_3] [i_1] [i_2] [4U]))))))));
                        var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) -7412845235705935341LL)))));
                        var_16 = ((/* implicit */short) ((var_3) ? (((/* implicit */int) ((_Bool) -7903016119253829537LL))) : (((var_9) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (short)-4159))))));
                    }
                }
            } 
        } 
    } 
}
