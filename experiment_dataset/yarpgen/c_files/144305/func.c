/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144305
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
    var_18 = ((/* implicit */signed char) var_17);
    var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25)) ? (((/* implicit */int) (short)11)) : (((/* implicit */int) (short)-14962))))) ? (((/* implicit */unsigned long long int) ((var_12) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_14)))))))) : (var_9)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_20 += ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [(signed char)4] [i_0]))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */int) ((short) arr_5 [i_0]));
            arr_7 [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-12))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))));
            arr_8 [i_1] [0U] [i_0] = ((/* implicit */signed char) ((unsigned long long int) arr_0 [i_1] [i_1]));
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((long long int) arr_5 [5]))));
            var_22 = ((/* implicit */unsigned int) ((_Bool) ((var_10) ? (((/* implicit */int) arr_0 [12ULL] [i_1])) : (arr_5 [(_Bool)1]))));
        }
        arr_9 [i_0] [i_0] = ((/* implicit */_Bool) ((short) ((signed char) var_9)));
    }
    var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) 288089638663356416ULL))));
    var_24 = ((/* implicit */long long int) (-(var_12)));
}
