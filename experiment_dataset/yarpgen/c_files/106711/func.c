/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106711
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
    var_12 = ((/* implicit */long long int) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) (unsigned char)86))))) * (((/* implicit */int) arr_0 [i_0]))));
        var_14 = ((/* implicit */short) ((unsigned char) arr_1 [i_0]));
    }
    for (unsigned char i_1 = 1; i_1 < 22; i_1 += 2) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_1 - 1] [i_1 - 1]))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)56)), (257003737U)))) || (((/* implicit */_Bool) arr_2 [i_1]))))) : (((/* implicit */int) ((4611686018427387904ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-27))))))));
        var_15 = ((/* implicit */signed char) ((((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1]))) - (arr_2 [i_1]))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 + 3] [(signed char)4])) || (((/* implicit */_Bool) arr_3 [i_1] [i_1 + 3])))))))) >= (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)240)), (-1))))));
        arr_5 [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -8955590703792989539LL)))))))) == (arr_2 [i_1]));
    }
    var_16 = ((/* implicit */_Bool) max((1609063686), (((/* implicit */int) (unsigned short)65535))));
    var_17 = ((/* implicit */unsigned short) ((_Bool) -7662984914314508445LL));
    var_18 = ((/* implicit */unsigned long long int) var_9);
}
