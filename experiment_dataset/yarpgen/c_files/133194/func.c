/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133194
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
    var_11 = ((/* implicit */unsigned short) 2729638824U);
    var_12 = ((/* implicit */unsigned short) min((((var_5) ? (((/* implicit */int) ((2729638824U) < (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : ((-(var_2))))), (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) var_4)) - (((/* implicit */int) var_6)))) : (var_1)))));
    var_13 ^= ((/* implicit */_Bool) 33554424);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) min((((/* implicit */int) ((_Bool) var_6))), (33554424))))));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (short)-18163))));
        var_16 = ((/* implicit */signed char) (((+(arr_1 [i_0] [i_0]))) + (((((/* implicit */unsigned long long int) var_1)) + (max((((/* implicit */unsigned long long int) var_2)), (arr_1 [i_0] [i_0])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_10)) << ((((+(arr_1 [i_0] [i_0]))) - (14727468143753201698ULL)))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) (+(13365955132226926285ULL)));
        var_18 = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((0U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)228)))))) * (((arr_4 [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))))));
    }
}
