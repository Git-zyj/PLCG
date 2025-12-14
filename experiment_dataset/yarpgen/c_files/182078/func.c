/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182078
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
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        arr_4 [(unsigned short)6] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0 - 2])) << (((((/* implicit */int) arr_0 [i_0 - 2])) - (15))))) - ((-(((/* implicit */int) arr_0 [i_0 + 1]))))));
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (signed char)-97))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */long long int) ((/* implicit */int) (short)1687))) : (-8367463827660831968LL))) ^ (((((-5135793198027025141LL) + (9223372036854775807LL))) << (((8367463827660831951LL) - (8367463827660831951LL)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned short) arr_2 [i_0 - 1]);
            var_16 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) / (-8367463827660831968LL)));
        }
    }
    var_17 = ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) 8367463827660831968LL)))) ? (((/* implicit */int) var_9)) : ((-(((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max((var_3), (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_8))))))))))));
        var_19 = ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_2)))) & ((~(arr_8 [i_2] [i_2]))));
    }
    var_20 = ((/* implicit */signed char) ((-8367463827660831999LL) | (8367463827660831980LL)));
    var_21 = ((/* implicit */signed char) var_8);
}
