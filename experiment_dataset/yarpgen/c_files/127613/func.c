/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127613
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
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            var_10 = ((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) arr_0 [i_0])))));
            arr_5 [(signed char)8] [i_1] = ((/* implicit */signed char) 675636047U);
            var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) (~(arr_2 [i_0] [14U]))))));
        }
        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((arr_2 [i_0 - 3] [i_0 - 1]) & (((/* implicit */unsigned int) var_3)))))));
    }
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        var_13 = ((/* implicit */_Bool) arr_4 [i_2]);
        var_14 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((short) arr_1 [i_2]))) ? (min((((/* implicit */unsigned long long int) arr_7 [i_2])), (931529508223056662ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)16), (((/* implicit */unsigned char) (signed char)99))))))))));
    }
    var_15 -= (unsigned short)40116;
}
