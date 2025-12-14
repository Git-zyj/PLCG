/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185693
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
    var_12 = ((/* implicit */unsigned long long int) var_5);
    var_13 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) ((unsigned char) var_3))))) - (((((/* implicit */_Bool) ((((/* implicit */long long int) var_5)) - (9223372036854775783LL)))) ? ((-(var_8))) : (((/* implicit */int) var_7))))));
    var_14 = (-(((((/* implicit */_Bool) 1548382778U)) ? (var_4) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (5) : (var_8)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45059))) ^ (12657677237277490779ULL)))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_1] [i_2])) << (((var_11) - (6583735405165267259ULL))))))))), (-6774107869295867178LL)));
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1] [i_2 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_4)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) arr_5 [i_1] [i_1] [i_2] [i_2])))))))));
                    var_17 = ((unsigned long long int) (-(((/* implicit */int) var_6))));
                }
            } 
        } 
        var_18 = ((/* implicit */signed char) max((((/* implicit */int) (unsigned char)181)), (min((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2])))));
    }
}
