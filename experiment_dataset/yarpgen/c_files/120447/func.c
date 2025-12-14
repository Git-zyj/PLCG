/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120447
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
    var_17 = var_10;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [(unsigned short)8] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) arr_1 [i_0] [i_0]))) & ((~(arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */long long int) ((arr_1 [i_0] [i_0]) && (((/* implicit */_Bool) arr_0 [i_0]))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [6U])) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) >> (((((/* implicit */int) var_14)) + (132)))))) || (((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) ? (var_12) : (((/* implicit */unsigned long long int) arr_0 [i_0])))))))) : (((int) (~(arr_0 [i_0])))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((int) ((int) var_6)));
        var_20 = ((/* implicit */unsigned long long int) arr_4 [3LL]);
    }
    var_21 = ((/* implicit */unsigned int) ((unsigned short) 0U));
    var_22 = var_14;
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        var_23 = ((/* implicit */unsigned int) var_7);
        arr_8 [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_2])) || (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [1U] [1U]))) <= (var_0))))) ? (arr_0 [i_2]) : (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) ((short) (short)-23394))) + (23405)))))));
    }
    /* vectorizable */
    for (signed char i_3 = 4; i_3 < 9; i_3 += 3) 
    {
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_6 [i_3 - 2] [i_3 - 3]))));
        arr_11 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) var_14))) >= (((/* implicit */int) arr_1 [i_3] [i_3 - 2]))));
    }
}
