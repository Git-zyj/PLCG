/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131538
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((short) (+(3536803946U))));
        arr_5 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_0])), (3536803963U))))));
        var_19 = ((/* implicit */long long int) arr_1 [i_0]);
    }
    for (unsigned char i_1 = 1; i_1 < 15; i_1 += 4) 
    {
        arr_8 [(unsigned short)6] = ((/* implicit */long long int) ((((((/* implicit */int) arr_7 [i_1])) % (((/* implicit */int) var_2)))) < (((/* implicit */int) var_0))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3536803963U)) ? (((/* implicit */int) (signed char)18)) : (1808681371)));
    }
    /* LoopSeq 3 */
    for (unsigned char i_2 = 1; i_2 < 23; i_2 += 3) 
    {
        var_21 = ((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) arr_10 [i_2 + 2])), (var_6)))));
        var_22 = ((/* implicit */long long int) (unsigned char)114);
        arr_11 [12LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_9 [i_2 + 2]) >> (((((((/* implicit */_Bool) (unsigned char)158)) ? (601236350812272605LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1))))) - (601236350812272602LL)))))) ? (((min((((/* implicit */unsigned long long int) arr_9 [i_2])), (var_13))) / (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-18), ((signed char)18))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2 - 1])))));
        arr_12 [i_2] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 819188508)) ? (((/* implicit */int) (short)-31930)) : (((/* implicit */int) (short)32628)))), (((/* implicit */int) ((signed char) max((var_7), (((/* implicit */long long int) var_14))))))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        arr_16 [i_3] = ((/* implicit */unsigned char) (short)-19969);
        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (arr_13 [7] [7])))) ? (((/* implicit */long long int) arr_9 [i_3])) : (((var_10) >> (((/* implicit */int) var_8)))));
    }
    for (short i_4 = 2; i_4 < 13; i_4 += 2) 
    {
        arr_21 [i_4] = ((/* implicit */long long int) ((int) (~(((/* implicit */int) var_18)))));
        var_24 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_3 [i_4 - 2])) ? (((/* implicit */int) arr_10 [i_4 - 2])) : (((/* implicit */int) (_Bool)0)))));
        arr_22 [i_4] = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_4 - 2])) - (((/* implicit */int) arr_10 [i_4 - 2])))))));
        var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))) : (var_15)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_4 - 2] [0U]))))) : (((((/* implicit */_Bool) arr_9 [i_4])) ? (var_5) : (((/* implicit */long long int) arr_9 [5U])))))) - (((/* implicit */long long int) ((/* implicit */int) var_14)))));
    }
    var_26 = ((/* implicit */long long int) (-(((/* implicit */int) (short)16376))));
}
