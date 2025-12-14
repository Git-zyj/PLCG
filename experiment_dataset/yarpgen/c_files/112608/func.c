/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112608
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
    var_13 += ((/* implicit */unsigned long long int) (+(((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)21099)) : (((/* implicit */int) var_10)))) - (((/* implicit */int) var_10))))));
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */long long int) ((-1561041122) + (1561041121))))));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)20))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_12)))))))) ? (((long long int) min((var_4), (((/* implicit */unsigned short) var_2))))) : (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */long long int) 4294967295U)))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) 1561041114))));
        arr_3 [(signed char)6] [i_0] = ((/* implicit */signed char) var_3);
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? ((~(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_7) : (((/* implicit */unsigned int) arr_2 [i_0])))))));
        var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)8)) / (1561041121)))), ((~(3677956776836756483LL)))));
    }
}
