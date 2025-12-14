/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141373
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
    var_18 = var_16;
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_19 = arr_2 [i_0] [i_0];
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) var_2);
            var_22 += ((/* implicit */unsigned short) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (77011537))))) > (((/* implicit */int) (((-(((/* implicit */int) (unsigned char)28)))) > (((int) arr_0 [15])))))));
        }
    }
    for (unsigned char i_2 = 3; i_2 < 9; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned char) (~(arr_6 [i_2 - 1])));
        var_23 = ((/* implicit */long long int) min((var_23), (min(((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [(_Bool)1] [i_2]))) : (arr_1 [i_2 - 3] [i_2 - 3]))))), (((/* implicit */long long int) var_1))))));
    }
    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_15))));
}
