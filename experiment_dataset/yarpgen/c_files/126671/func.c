/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126671
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */int) ((unsigned char) var_14));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_0]))));
    }
    var_16 = ((0ULL) / (((/* implicit */unsigned long long int) 4743369540272022429LL)));
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 2) 
    {
        arr_6 [i_1] = ((((/* implicit */int) ((((((/* implicit */int) var_5)) / (((/* implicit */int) (unsigned short)6168)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)31)))))))) << (((((/* implicit */int) arr_5 [i_1 + 1])) - (21550))));
        var_17 = ((/* implicit */unsigned int) ((arr_0 [i_1 - 1]) * ((+(((/* implicit */int) arr_2 [i_1 - 1]))))));
    }
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        arr_11 [(unsigned char)10] [15] &= ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_5 [i_2])), (-793742203)));
        arr_12 [i_2] = ((/* implicit */int) (+(min((((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_5))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) / (arr_4 [i_2] [(_Bool)1])))))));
        arr_13 [17] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)13), (((/* implicit */unsigned short) (short)-1)))))) | (((arr_7 [i_2]) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) / (3598760827U))) : (min((((/* implicit */unsigned int) var_5)), (4294967295U)))))));
    }
}
