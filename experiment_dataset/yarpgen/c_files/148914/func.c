/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148914
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
    var_19 = ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) % (var_12));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((arr_1 [(_Bool)1]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24722))))) <= (max((var_4), (((/* implicit */unsigned int) (_Bool)1)))))))) < (min((((/* implicit */unsigned int) ((unsigned char) arr_0 [i_0] [i_0]))), (var_1)))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) >> (((arr_0 [i_0 - 1] [i_0 - 1]) - (1371493382)))))) ? ((~(var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)-28798))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) arr_0 [i_0 - 3] [11U]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 3] [i_0 - 3])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)28800))) < (arr_1 [i_0]))))) & (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) % (arr_1 [i_0])))))));
    }
    var_22 = ((/* implicit */unsigned int) (short)-28798);
    var_23 = ((/* implicit */unsigned char) var_5);
    var_24 |= ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) < (max((var_8), (((/* implicit */unsigned long long int) var_11))))))) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)3))) < (min((((/* implicit */long long int) var_5)), (-1LL)))))));
}
