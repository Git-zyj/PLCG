/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143903
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
    var_18 |= ((/* implicit */long long int) 2032520514);
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) max((((/* implicit */int) var_8)), (arr_2 [i_0])))) & (var_5)))) ? (385319353) : (((/* implicit */int) max((arr_0 [i_0 - 1]), (((/* implicit */short) (!(((/* implicit */_Bool) (short)-23392))))))))));
        var_20 = ((/* implicit */signed char) var_10);
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) max(((short)23416), (((/* implicit */short) ((((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_0))))) <= ((+(((/* implicit */int) var_11)))))))));
    }
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_23 ^= ((/* implicit */unsigned int) 6294855536803897072ULL);
        var_24 |= ((/* implicit */unsigned int) ((arr_2 [i_1]) & (((/* implicit */int) var_3))));
    }
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */_Bool) ((unsigned char) var_13));
        var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))));
    }
}
