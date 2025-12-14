/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128198
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
    var_15 ^= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)30944)), (10570199219133133025ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((short) (_Bool)1))))));
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (0U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((int) ((unsigned int) var_12)));
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((signed char) var_13)), (((/* implicit */signed char) (_Bool)1)))))) : (max((((/* implicit */unsigned long long int) ((short) (unsigned char)16))), (4115274029513734135ULL)))));
        arr_5 [6] = arr_2 [i_0];
        arr_6 [i_0] [i_0] |= ((/* implicit */signed char) var_6);
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) 
    {
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            {
                var_17 = ((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_10 [i_1] [i_1])))));
                var_18 = ((/* implicit */short) arr_10 [i_1] [i_2 + 1]);
            }
        } 
    } 
}
