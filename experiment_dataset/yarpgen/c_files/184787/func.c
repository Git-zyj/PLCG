/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184787
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
    var_13 = ((/* implicit */unsigned char) (-(var_8)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) ((var_8) & (((/* implicit */long long int) ((((/* implicit */_Bool) 3847975805526247850ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 3])))))));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? ((+(var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14598768268183303765ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)0)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)24785)) ? (((/* implicit */int) arr_2 [(signed char)20] [i_0])) : (((/* implicit */int) var_4))))))) : (((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1 + 2]))))));
                var_16 = ((/* implicit */unsigned int) arr_1 [i_1]);
                var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)(-127 - 1))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5107)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : (min((var_0), (((/* implicit */unsigned long long int) var_5))))))));
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (-(((((/* implicit */int) min(((unsigned short)40750), (var_10)))) ^ ((~(((/* implicit */int) var_6)))))))))));
}
